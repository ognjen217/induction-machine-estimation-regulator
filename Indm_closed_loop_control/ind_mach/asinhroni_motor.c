
#include "driverlib.h"
#include "device.h"

#define EX_ADC_RESOLUTION 12

volatile uint16_t adcTren = 0;
volatile uint16_t adcRef  = 0;
volatile uint16_t dacOut  = 0;
volatile float adcTren_skal=0;
volatile float adcRef_skal=0;
volatile float adcTren_rpm=0;
volatile float adcRef_rpm=0;
volatile uint16_t pwmOut;
volatile float output;
volatile float error;
volatile float testOut;

//PI parametri
float Kp=200.0f;
float Ki=30.0f;
float integral=0.0f;
const float Ts=0.0001f; //100mikros-period ISR-a

#define OUT_MIN 0.0f
#define OUT_MAX 1000.0f

void initADC(void);
void initEPWM(void);
void initADCSOC(void);
//void configureDAC(void);
__interrupt void adcA1ISR(void);

void main(void){
    Device_init();
    Device_initGPIO();
    Interrupt_initModule();
    Interrupt_initVectorTable();

    Interrupt_register(INT_ADCA1, &adcA1ISR);

   
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM2);// upravljacki signal
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);


    GPIO_setPadConfig(2, GPIO_PIN_TYPE_STD);
    GPIO_setPinConfig(GPIO_2_EPWM2A);
    
    initADC();
    initEPWM();
    initADCSOC();
   
    Interrupt_enable(INT_ADCA1);
    EINT;
    ERTM;

    while(1){
       
     }
}

void initADC(void)
{
    ADC_setPrescaler(ADCA_BASE, ADC_CLK_DIV_4_0);
    ADC_setMode(ADCA_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
    ADC_setInterruptPulseMode(ADCA_BASE, ADC_PULSE_END_OF_CONV);
    ADC_enableConverter(ADCA_BASE);

    ADC_setPrescaler(ADCC_BASE, ADC_CLK_DIV_4_0);
    ADC_setMode(ADCC_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
    ADC_setInterruptPulseMode(ADCC_BASE, ADC_PULSE_END_OF_CONV);
    ADC_enableConverter(ADCC_BASE);

    DEVICE_DELAY_US(1000);
}

void initEPWM(void)
{
    EPWM_enableADCTrigger(EPWM1_BASE, EPWM_SOC_A);
    EPWM_setADCTriggerSource(EPWM1_BASE, EPWM_SOC_A,
                             EPWM_SOC_TBCTR_U_CMPA);
    EPWM_setADCTriggerEventPrescale(EPWM1_BASE, EPWM_SOC_A, 1);
    EPWM_setCounterCompareValue(EPWM1_BASE,
                                EPWM_COUNTER_COMPARE_A, 1000);
    EPWM_setTimeBasePeriod(EPWM1_BASE, 9999);
    EPWM_setClockPrescaler(EPWM1_BASE,
                           EPWM_CLOCK_DIVIDER_1,
                           EPWM_HSCLOCK_DIVIDER_1);
    EPWM_setTimeBaseCounterMode(EPWM1_BASE, EPWM_COUNTER_MODE_UP);
    // ── ePWM2 — upravljački signal → GPIO2 → DI HIL-a ─────────────
    EPWM_setTimeBasePeriod(EPWM2_BASE, 1000);  // period = 1000
    EPWM_setClockPrescaler(EPWM2_BASE,
                           EPWM_CLOCK_DIVIDER_1,
                           EPWM_HSCLOCK_DIVIDER_1);
    EPWM_setTimeBaseCounterMode(EPWM2_BASE, EPWM_COUNTER_MODE_UP_DOWN);

    // LOW kad ide gore → HIGH kad ide dole: duty = CMPA/PERIOD
    EPWM_setActionQualifierAction(EPWM2_BASE, EPWM_AQ_OUTPUT_A,
                                  EPWM_AQ_OUTPUT_LOW,
                                  EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);
    EPWM_setActionQualifierAction(EPWM2_BASE, EPWM_AQ_OUTPUT_A,
                                  EPWM_AQ_OUTPUT_HIGH,
                                  EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);
    EPWM_setCounterCompareValue(EPWM2_BASE,
                                EPWM_COUNTER_COMPARE_A, 0);
}

void initADCSOC(void)
{
    ADC_setupSOC(ADCA_BASE, ADC_SOC_NUMBER0,
                 ADC_TRIGGER_EPWM1_SOCA,
                 ADC_CH_ADCIN14, 15);
    ADC_setupSOC(ADCC_BASE, ADC_SOC_NUMBER0,
                 ADC_TRIGGER_EPWM1_SOCA,
                 ADC_CH_ADCIN3, 15);
    ADC_setInterruptSource(ADCA_BASE, ADC_INT_NUMBER1,
                           ADC_SOC_NUMBER0);
    ADC_enableInterrupt(ADCA_BASE, ADC_INT_NUMBER1);
    ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
}


__interrupt void adcA1ISR(void)
{
    adcTren = ADC_readResult(ADCARESULT_BASE, ADC_SOC_NUMBER0);
    adcRef  = ADC_readResult(ADCCRESULT_BASE, ADC_SOC_NUMBER0);
    
    // HIL AO scaling = 200 rad/s mechanical; full scale ADC -> 200 rad/s -> ~1910 RPM
    adcTren_skal = ((float)adcTren / 4095.0f) * 200.0f;
    adcRef_skal  = ((float)adcRef  / 4095.0f) * 200.0f;

    // mechanical rad/s -> RPM (no pole-pair division)
    adcTren_rpm = adcTren_skal * 60.0f / (2.0f * 3.14159f);
    adcRef_rpm  = adcRef_skal  * 60.0f / (2.0f * 3.14159f);

    error=(float)adcRef_rpm-(float)adcTren_rpm;
    float integralTemp=integral+Ki*error*Ts;
    output=Kp*error+integralTemp;

    if(output>=OUT_MIN && output<=OUT_MAX)
    {
        integral=integralTemp;
    }
    if(output>OUT_MAX) output=OUT_MAX;
    if(output<OUT_MIN) output=OUT_MIN;

    pwmOut=output;
    EPWM_setCounterCompareValue(EPWM2_BASE,EPWM_COUNTER_COMPARE_A,pwmOut);

    ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
    if(true == ADC_getInterruptOverflowStatus(ADCA_BASE, ADC_INT_NUMBER1))
    {
        ADC_clearInterruptOverflowStatus(ADCA_BASE, ADC_INT_NUMBER1);
        ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
    }
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}





/*
///KOD ZA DAC

 #include "driverlib.h"
 #include "device.h"

 #define EX_ADC_RESOLUTION 12

 volatile uint16_t adcTren = 0;
 volatile uint16_t adcRef  = 0;
 volatile uint16_t dacOut  = 0;
 volatile uint16_t adcTren_skal=0;
 volatile uint16_t adcRef_skal=0;
 volatile float adcTren_rpm=0;
 volatile float adcRef_rpm=0;
 volatile uint16_t pwmOut;
 volatile uint16_t output;
 volatile uint16_t error;

// //PI parametri
 float Kp=0.2f;
 float Ki=0.001f;
 float integral=0.0f;
// //const float dt=0.0001f; //100mikros-period ISR-a(ePWM1 period 9999,100MHz)

 #define OUT_MIN 0.0f
 #define OUT_MAX 1000.0f



 void initADC(void);
 void initEPWM(void);
 void initADCSOC(void);
 void configureDAC(void);
 __interrupt void adcA1ISR(void);

 void main(void){
     Device_init();
     Device_initGPIO();
     Interrupt_initModule();
     Interrupt_initVectorTable();

     Interrupt_register(INT_ADCA1, &adcA1ISR);

     SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_DACB);
     SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM1);
//     //SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM2);// upravljacki signal
     SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);


//     // GPIO_setPadConfig(2, GPIO_PIN_TYPE_STD);
//     // GPIO_setPinConfig(GPIO_2_EPWM2A);
    
     initADC();
     initEPWM();
     initADCSOC();
     configureDAC();

   

     Interrupt_enable(INT_ADCA1);
     EINT;
     ERTM;

     EPWM_enableADCTrigger(EPWM1_BASE, EPWM_SOC_A);
     EPWM_setTimeBaseCounterMode(EPWM1_BASE, EPWM_COUNTER_MODE_UP);

//       // GPIO0 kao digitalni izlaz
   

     while(1){
     
      }
 }

 void initADC(void)
 {
     ADC_setPrescaler(ADCA_BASE, ADC_CLK_DIV_4_0);
     ADC_setMode(ADCA_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
     ADC_setInterruptPulseMode(ADCA_BASE, ADC_PULSE_END_OF_CONV);
     ADC_enableConverter(ADCA_BASE);

     ADC_setPrescaler(ADCC_BASE, ADC_CLK_DIV_4_0);
     ADC_setMode(ADCC_BASE, ADC_RESOLUTION_12BIT, ADC_MODE_SINGLE_ENDED);
     ADC_setInterruptPulseMode(ADCC_BASE, ADC_PULSE_END_OF_CONV);
     ADC_enableConverter(ADCC_BASE);

     DEVICE_DELAY_US(1000);
 }

 void initEPWM(void)
 {
     EPWM_enableADCTrigger(EPWM1_BASE, EPWM_SOC_A);
     EPWM_setADCTriggerSource(EPWM1_BASE, EPWM_SOC_A,
                              EPWM_SOC_TBCTR_U_CMPA);
     EPWM_setADCTriggerEventPrescale(EPWM1_BASE, EPWM_SOC_A, 1);
     EPWM_setCounterCompareValue(EPWM1_BASE,
                                 EPWM_COUNTER_COMPARE_A, 1000);
     EPWM_setTimeBasePeriod(EPWM1_BASE, 9999);
     EPWM_setClockPrescaler(EPWM1_BASE,
                            EPWM_CLOCK_DIVIDER_1,
                            EPWM_HSCLOCK_DIVIDER_1);
     EPWM_setTimeBaseCounterMode(EPWM1_BASE, EPWM_COUNTER_MODE_UP);
//     // // ── ePWM2 — upravljački signal → GPIO2 → DI HIL-a ─────────────
//     // EPWM_setTimeBasePeriod(EPWM2_BASE, 1000);  // period = 1000
//     // EPWM_setClockPrescaler(EPWM2_BASE,
//     //                        EPWM_CLOCK_DIVIDER_1,
//     //                        EPWM_HSCLOCK_DIVIDER_1);
//     // EPWM_setTimeBaseCounterMode(EPWM2_BASE, EPWM_COUNTER_MODE_UP_DOWN);

//     // // HIGH kada brojač ide gore i dostigne CMPA
//     // // LOW  kada brojač ide dolje i dostigne CMPA
//     // EPWM_setActionQualifierAction(EPWM2_BASE, EPWM_AQ_OUTPUT_A,
//     //                               EPWM_AQ_OUTPUT_LOW,
//     //                               EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);
//     // EPWM_setActionQualifierAction(EPWM2_BASE, EPWM_AQ_OUTPUT_A,
//     //                               EPWM_AQ_OUTPUT_HIGH,
//     //                               EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);
//     // EPWM_setCounterCompareValue(EPWM2_BASE,
//     //                             EPWM_COUNTER_COMPARE_A, 0);
 }

 void initADCSOC(void)
 {
     ADC_setupSOC(ADCA_BASE, ADC_SOC_NUMBER0,
                  ADC_TRIGGER_EPWM1_SOCA,
                  ADC_CH_ADCIN14, 15);
     ADC_setupSOC(ADCC_BASE, ADC_SOC_NUMBER0,
                  ADC_TRIGGER_EPWM1_SOCA,
                  ADC_CH_ADCIN3, 15);
     ADC_setInterruptSource(ADCA_BASE, ADC_INT_NUMBER1,
                            ADC_SOC_NUMBER0);
     ADC_enableInterrupt(ADCA_BASE, ADC_INT_NUMBER1);
     ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
 }

 void configureDAC(void)
 {
     DAC_setReferenceVoltage(DACB_BASE, DAC_REF_ADC_VREFHI);
     DAC_setLoadMode(DACB_BASE, DAC_LOAD_SYSCLK);
     DAC_enableOutput(DACB_BASE);
     DAC_setShadowValue(DACB_BASE, 0);
     DEVICE_DELAY_US(10);
    
     }

 __interrupt void adcA1ISR(void)
 {
     adcTren = ADC_readResult(ADCARESULT_BASE, ADC_SOC_NUMBER0);
     adcRef  = ADC_readResult(ADCCRESULT_BASE, ADC_SOC_NUMBER0);
    
//     // adcTren_skal= ((float)adcTren / 4095.0f) * (2.0f * 3.14159f * 50.0f);
   
//     // adcRef_skal  = ((float)adcRef / 4095.0f) * (2.0f * 3.14159f * 50.0f);


//     // adcTren_rpm= adcTren_skal * 60.0f / (2.0f * 3.14159f * 2.0f);
//     // adcRef_rpm  = adcRef_skal  * 60.0f / (2.0f * 3.14159f * 2.0f);

//     //  error=(float)adcRef-(float)adcTren;
//     // float integralTemp=integral+Ki*error;
//     // output=Kp*error+integralTemp;

//     // if(output>=OUT_MIN && output<=OUT_MAX)
//     // {
//     //     integral=integralTemp;
//     // }
//     // if(output>OUT_MAX) output=OUT_MAX;
//     // if(output<OUT_MIN) output=OUT_MIN;
    
    //dacOut = (uint16_t)(output / OUT_MAX * 4095.0f);
    DAC_setShadowValue(DACB_BASE, 4095);
     ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
     if(true == ADC_getInterruptOverflowStatus(ADCA_BASE, ADC_INT_NUMBER1))
     {
         ADC_clearInterruptOverflowStatus(ADCA_BASE, ADC_INT_NUMBER1);
         ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
     }
     Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
 }
*/

