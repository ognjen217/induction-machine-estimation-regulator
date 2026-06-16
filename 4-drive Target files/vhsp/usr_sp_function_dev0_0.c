// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>
#include <time.h>
#include <stdarg.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif






// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines



































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables





// const variables
static const int _battery1_soc__n_rd_as = 13107200;
static const unsigned int _battery1_soc__p_addr = 4;
static const char* _battery1_soc__p_sig_output = "True";


static const real _fl_en__p_value = 1.0;

static const int _fl_pmdc_iarm_ia1__n_rd_as = 13107200;
static const unsigned int _fl_pmdc_iarm_ia1__p_addr = 517;
static const char* _fl_pmdc_iarm_ia1__p_sig_output = "True";

static const real _fl_pmdc_integratoromega__n_initial_value[1] = {0.0};
static const int _fl_pmdc_integratoromega__n_lower_limit[1] = {0};
static const int _fl_pmdc_integratoromega__n_upper_limit[1] = {0};
static const real _fl_pmdc_integratoromega__p_execution_rate = 0.0001;
static const char _fl_pmdc_integratoromega__p_limit_output = 0;
static const char* _fl_pmdc_integratoromega__p_mode = "integrator";
static const char* _fl_pmdc_integratoromega__p_show_reset = "none";

static const int _fl_pmdc_va1_va1__n_rd_as = 13107200;
static const unsigned int _fl_pmdc_va1_va1__p_addr = 515;
static const char* _fl_pmdc_va1_va1__p_sig_output = "True";


static const real _fr_en__p_value = 1.0;

static const int _fr_pmdc_iarm_ia1__n_rd_as = 13107200;
static const unsigned int _fr_pmdc_iarm_ia1__p_addr = 518;
static const char* _fr_pmdc_iarm_ia1__p_sig_output = "True";

static const real _fr_pmdc_integratoromega__n_initial_value[1] = {0.0};
static const int _fr_pmdc_integratoromega__n_lower_limit[1] = {0};
static const int _fr_pmdc_integratoromega__n_upper_limit[1] = {0};
static const real _fr_pmdc_integratoromega__p_execution_rate = 0.0001;
static const char _fr_pmdc_integratoromega__p_limit_output = 0;
static const char* _fr_pmdc_integratoromega__p_mode = "integrator";
static const char* _fr_pmdc_integratoromega__p_show_reset = "none";

static const int _fr_pmdc_va1_va1__n_rd_as = 13107200;
static const unsigned int _fr_pmdc_va1_va1__p_addr = 516;
static const char* _fr_pmdc_va1_va1__p_sig_output = "True";


static const real _rl_en__p_value = 1.0;

static const int _rl_pmdc_iarm_ia1__n_rd_as = 13107200;
static const unsigned int _rl_pmdc_iarm_ia1__p_addr = 1029;
static const char* _rl_pmdc_iarm_ia1__p_sig_output = "True";

static const real _rl_pmdc_integratoromega__n_initial_value[1] = {0.0};
static const int _rl_pmdc_integratoromega__n_lower_limit[1] = {0};
static const int _rl_pmdc_integratoromega__n_upper_limit[1] = {0};
static const real _rl_pmdc_integratoromega__p_execution_rate = 0.0001;
static const char _rl_pmdc_integratoromega__p_limit_output = 0;
static const char* _rl_pmdc_integratoromega__p_mode = "integrator";
static const char* _rl_pmdc_integratoromega__p_show_reset = "none";

static const int _rl_pmdc_va1_va1__n_rd_as = 13107200;
static const unsigned int _rl_pmdc_va1_va1__p_addr = 1027;
static const char* _rl_pmdc_va1_va1__p_sig_output = "True";


static const real _rr_en__p_value = 1.0;

static const int _rr_pmdc_iarm_ia1__n_rd_as = 13107200;
static const unsigned int _rr_pmdc_iarm_ia1__p_addr = 1030;
static const char* _rr_pmdc_iarm_ia1__p_sig_output = "True";

static const real _rr_pmdc_integratoromega__n_initial_value[1] = {0.0};
static const int _rr_pmdc_integratoromega__n_lower_limit[1] = {0};
static const int _rr_pmdc_integratoromega__n_upper_limit[1] = {0};
static const real _rr_pmdc_integratoromega__p_execution_rate = 0.0001;
static const char _rr_pmdc_integratoromega__p_limit_output = 0;
static const char* _rr_pmdc_integratoromega__p_mode = "integrator";
static const char* _rr_pmdc_integratoromega__p_show_reset = "none";

static const int _rr_pmdc_va1_va1__n_rd_as = 13107200;
static const unsigned int _rr_pmdc_va1_va1__p_addr = 1028;
static const char* _rr_pmdc_va1_va1__p_sig_output = "True";

static const int _vcbat_va1__n_rd_as = 13107200;
static const unsigned int _vcbat_va1__p_addr = 6;
static const char* _vcbat_va1__p_sig_output = "True";


static const real _road_surface_model_fl_fz__p_value = 2943.0;


static const real _road_surface_model_fl_fz1__p_value = 2943.0;


static const real _road_surface_model_fl_fz2__p_value = 2943.0;


static const real _road_surface_model_fl_fz3__p_value = 2943.0;

static const char* _battery1_gainsoc__n_multiplication = "Element-wise(K.*u)";
static const real _battery1_gainsoc__p_gain = 100.0;

static const char* _fl_gain1__n_multiplication = "Element-wise(K.*u)";
static const real _fl_gain1__p_gain = -1.0;

static const int _fl_ina_fr__n_out_size = 1;
static const unsigned int _fl_ina_fr__p_addr = 16384;

static const char* _fl_pmdc_kt__n_multiplication = "Element-wise(K.*u)";
static const real _fl_pmdc_kt__p_gain = 0.5;

static const int _fl_pmdc_i_fr__n_out_size = 1;
static const unsigned int _fl_pmdc_i_fr__p_addr = 16388;


static const real _fl_pmdc_integrator_rollover1__p_execution_rate = 0.0001;
static const real _fl_pmdc_integrator_rollover1__p_initial_integrator_output = 0.0;
static const real _fl_pmdc_integrator_rollover1__p_roll_over_value = 6.283185307;

static const char* _fl_pmdc_ke__n_multiplication = "Element-wise(K.*u)";
static const real _fl_pmdc_ke__p_gain = 0.3;

static const char* _fl_pmdc_b__n_multiplication = "Element-wise(K.*u)";
static const real _fl_pmdc_b__p_gain = 0.002;

static const int _fl_pmdc_mech_speed_fr__n_out_size = 1;
static const unsigned int _fl_pmdc_mech_speed_fr__p_addr = 16390;

static const int _fl_pmdc_va1a2__n_out_size = 1;
static const unsigned int _fl_pmdc_va1a2__p_addr = 16386;

static const char* _fr_gain1__n_multiplication = "Element-wise(K.*u)";
static const real _fr_gain1__p_gain = -1.0;

static const int _fr_ina_fr__n_out_size = 1;
static const unsigned int _fr_ina_fr__p_addr = 16392;

static const char* _fr_pmdc_kt__n_multiplication = "Element-wise(K.*u)";
static const real _fr_pmdc_kt__p_gain = 0.5;

static const int _fr_pmdc_i_fr__n_out_size = 1;
static const unsigned int _fr_pmdc_i_fr__p_addr = 16396;


static const real _fr_pmdc_integrator_rollover1__p_execution_rate = 0.0001;
static const real _fr_pmdc_integrator_rollover1__p_initial_integrator_output = 0.0;
static const real _fr_pmdc_integrator_rollover1__p_roll_over_value = 6.283185307;

static const char* _fr_pmdc_ke__n_multiplication = "Element-wise(K.*u)";
static const real _fr_pmdc_ke__p_gain = 0.3;

static const char* _fr_pmdc_b__n_multiplication = "Element-wise(K.*u)";
static const real _fr_pmdc_b__p_gain = 0.002;

static const int _fr_pmdc_mech_speed_fr__n_out_size = 1;
static const unsigned int _fr_pmdc_mech_speed_fr__p_addr = 16398;

static const int _fr_pmdc_va1a2__n_out_size = 1;
static const unsigned int _fr_pmdc_va1a2__p_addr = 16394;

static const char* _rl_gain1__n_multiplication = "Element-wise(K.*u)";
static const real _rl_gain1__p_gain = -1.0;

static const int _rl_ina_fr__n_out_size = 1;
static const unsigned int _rl_ina_fr__p_addr = 16400;

static const char* _rl_pmdc_kt__n_multiplication = "Element-wise(K.*u)";
static const real _rl_pmdc_kt__p_gain = 0.5;

static const int _rl_pmdc_i_fr__n_out_size = 1;
static const unsigned int _rl_pmdc_i_fr__p_addr = 16404;


static const real _rl_pmdc_integrator_rollover1__p_execution_rate = 0.0001;
static const real _rl_pmdc_integrator_rollover1__p_initial_integrator_output = 0.0;
static const real _rl_pmdc_integrator_rollover1__p_roll_over_value = 6.283185307;

static const char* _rl_pmdc_ke__n_multiplication = "Element-wise(K.*u)";
static const real _rl_pmdc_ke__p_gain = 0.3;

static const char* _rl_pmdc_b__n_multiplication = "Element-wise(K.*u)";
static const real _rl_pmdc_b__p_gain = 0.002;

static const int _rl_pmdc_mech_speed_fr__n_out_size = 1;
static const unsigned int _rl_pmdc_mech_speed_fr__p_addr = 16406;

static const int _rl_pmdc_va1a2__n_out_size = 1;
static const unsigned int _rl_pmdc_va1a2__p_addr = 16402;

static const char* _rr_gain1__n_multiplication = "Element-wise(K.*u)";
static const real _rr_gain1__p_gain = -1.0;

static const int _rr_ina_fr__n_out_size = 1;
static const unsigned int _rr_ina_fr__p_addr = 16408;

static const char* _rr_pmdc_kt__n_multiplication = "Element-wise(K.*u)";
static const real _rr_pmdc_kt__p_gain = 0.5;

static const int _rr_pmdc_i_fr__n_out_size = 1;
static const unsigned int _rr_pmdc_i_fr__p_addr = 16412;


static const real _rr_pmdc_integrator_rollover1__p_execution_rate = 0.0001;
static const real _rr_pmdc_integrator_rollover1__p_initial_integrator_output = 0.0;
static const real _rr_pmdc_integrator_rollover1__p_roll_over_value = 6.283185307;

static const char* _rr_pmdc_ke__n_multiplication = "Element-wise(K.*u)";
static const real _rr_pmdc_ke__p_gain = 0.3;

static const char* _rr_pmdc_b__n_multiplication = "Element-wise(K.*u)";
static const real _rr_pmdc_b__p_gain = 0.002;

static const int _rr_pmdc_va1a2__n_out_size = 1;
static const unsigned int _rr_pmdc_va1a2__p_addr = 16410;

static const int _vbat__n_out_size = 1;
static const unsigned int _vbat__p_addr = 16416;

static const int _omega_test_1__n_out_size = 1;
static const unsigned int _omega_test_1__p_addr = 16417;

static const char* _road_surface_model_fl_cicr_wheel__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_cicr_wheel__p_gain = 0.3;

static const char* _road_surface_model_fl_cicr_wheel1__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_cicr_wheel1__p_gain = 0.3;

static const char* _road_surface_model_fl_cicr_wheel2__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_cicr_wheel2__p_gain = 0.3;

static const char* _road_surface_model_fl_cicr_wheel3__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_cicr_wheel3__p_gain = 0.3;

static const int _road_surface_model_fl_muscale_test_fl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_muscale_test_fl__p_addr = 16425;

static const int _road_surface_model_fl_v_vehicle_test__n_out_size = 1;
static const unsigned int _road_surface_model_fl_v_vehicle_test__p_addr = 16433;

static const int _fl_pmdc_el_torque_fr__n_out_size = 1;
static const unsigned int _fl_pmdc_el_torque_fr__p_addr = 16387;

static const int _fl_pmdc_mech_angle_fr__n_out_size = 1;
static const unsigned int _fl_pmdc_mech_angle_fr__p_addr = 16389;

static const int _fl_pmdc_e_bemf__n_out_size = 1;
static const unsigned int _fl_pmdc_e_bemf__p_addr = 16385;

static const int _fl_pmdc_ebemf_vs1__n_spc_baseaddr = 134217728;
static const int _fl_pmdc_ebemf_vs1__n_spc_off = 4194304;
static const int _fl_pmdc_ebemf_vs1__n_spc_sp = 2883584;
static const int _fl_pmdc_ebemf_vs1__n_spc_tv = 3145728;
static const char* _fl_pmdc_ebemf_vs1__n_val_of_type = "signal controlled";
static const unsigned int _fl_pmdc_ebemf_vs1__p_addr = 0;
static const unsigned int _fl_pmdc_ebemf_vs1__p_spc_nb = 1;

static const int _fr_pmdc_el_torque_fr__n_out_size = 1;
static const unsigned int _fr_pmdc_el_torque_fr__p_addr = 16395;

static const int _fr_pmdc_mech_angle_fr__n_out_size = 1;
static const unsigned int _fr_pmdc_mech_angle_fr__p_addr = 16397;

static const int _fr_pmdc_e_bemf__n_out_size = 1;
static const unsigned int _fr_pmdc_e_bemf__p_addr = 16393;

static const int _fr_pmdc_ebemf_vs1__n_spc_baseaddr = 134217728;
static const int _fr_pmdc_ebemf_vs1__n_spc_off = 4194304;
static const int _fr_pmdc_ebemf_vs1__n_spc_sp = 2883584;
static const int _fr_pmdc_ebemf_vs1__n_spc_tv = 3145728;
static const char* _fr_pmdc_ebemf_vs1__n_val_of_type = "signal controlled";
static const unsigned int _fr_pmdc_ebemf_vs1__p_addr = 1;
static const unsigned int _fr_pmdc_ebemf_vs1__p_spc_nb = 1;

static const int _rl_pmdc_el_torque_fr__n_out_size = 1;
static const unsigned int _rl_pmdc_el_torque_fr__p_addr = 16403;

static const int _rl_pmdc_mech_angle_fr__n_out_size = 1;
static const unsigned int _rl_pmdc_mech_angle_fr__p_addr = 16405;

static const int _rl_pmdc_e_bemf__n_out_size = 1;
static const unsigned int _rl_pmdc_e_bemf__p_addr = 16401;

static const int _rl_pmdc_ebemf_vs1__n_spc_baseaddr = 134217728;
static const int _rl_pmdc_ebemf_vs1__n_spc_off = 4194304;
static const int _rl_pmdc_ebemf_vs1__n_spc_sp = 2883584;
static const int _rl_pmdc_ebemf_vs1__n_spc_tv = 3145728;
static const char* _rl_pmdc_ebemf_vs1__n_val_of_type = "signal controlled";
static const unsigned int _rl_pmdc_ebemf_vs1__p_addr = 0;
static const unsigned int _rl_pmdc_ebemf_vs1__p_spc_nb = 2;

static const int _rr_pmdc_el_torque_fr__n_out_size = 1;
static const unsigned int _rr_pmdc_el_torque_fr__p_addr = 16411;

static const int _rr_pmdc_mech_angle_fr__n_out_size = 1;
static const unsigned int _rr_pmdc_mech_angle_fr__p_addr = 16413;

static const int _rr_pmdc_e_bemf__n_out_size = 1;
static const unsigned int _rr_pmdc_e_bemf__p_addr = 16409;

static const int _rr_pmdc_ebemf_vs1__n_spc_baseaddr = 134217728;
static const int _rr_pmdc_ebemf_vs1__n_spc_off = 4194304;
static const int _rr_pmdc_ebemf_vs1__n_spc_sp = 2883584;
static const int _rr_pmdc_ebemf_vs1__n_spc_tv = 3145728;
static const char* _rr_pmdc_ebemf_vs1__n_val_of_type = "signal controlled";
static const unsigned int _rr_pmdc_ebemf_vs1__p_addr = 1;
static const unsigned int _rr_pmdc_ebemf_vs1__p_spc_nb = 2;

static const int _rr_pmdc_mech_speed_fr__n_out_size = 1;
static const unsigned int _rr_pmdc_mech_speed_fr__p_addr = 16414;

static const int _road_surface_model_fl_v_wheel_fl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_v_wheel_fl__p_addr = 16437;

static const int _road_surface_model_fl_v_wheel_fr__n_out_size = 1;
static const unsigned int _road_surface_model_fl_v_wheel_fr__p_addr = 16434;

static const int _road_surface_model_fl_v_wheel_rl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_v_wheel_rl__p_addr = 16435;

static const int _road_surface_model_fl_v_wheel_rr__n_out_size = 1;
static const unsigned int _road_surface_model_fl_v_wheel_rr__p_addr = 16436;




static const int _road_surface_model_fl_slip_fl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_slip_fl__p_addr = 16428;

static const int _road_surface_model_fl_slip_signfl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_slip_signfl__p_addr = 16432;




static const int _road_surface_model_fl_slip_fr__n_out_size = 1;
static const unsigned int _road_surface_model_fl_slip_fr__p_addr = 16429;




static const int _road_surface_model_fl_slip_rl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_slip_rl__p_addr = 16430;




static const int _road_surface_model_fl_slip_rr__n_out_size = 1;
static const unsigned int _road_surface_model_fl_slip_rr__p_addr = 16431;

const double _road_surface_model_fl_lut_mu_slip_fl__lut_table[9] = { 0.0, 0.25, 0.55, 0.9, 1.0, 0.95, 0.8, 0.6, 0.4 };
const double _road_surface_model_fl_lut_mu_slip_fl__lut_addrs[9] = { 0.0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.3, 0.5, 1.0 };
const double _road_surface_model_fl_lut_mu_slip_fr__lut_table[9] = { 0.0, 0.25, 0.55, 0.9, 1.0, 0.95, 0.8, 0.6, 0.4 };
const double _road_surface_model_fl_lut_mu_slip_fr__lut_addrs[9] = { 0.0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.3, 0.5, 1.0 };
const double _road_surface_model_fl_lut_mu_slip_rl__lut_table[9] = { 0.0, 0.25, 0.55, 0.9, 1.0, 0.95, 0.8, 0.6, 0.4 };
const double _road_surface_model_fl_lut_mu_slip_rl__lut_addrs[9] = { 0.0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.3, 0.5, 1.0 };
const double _road_surface_model_fl_lut_mu_slip_rr__lut_table[9] = { 0.0, 0.25, 0.55, 0.9, 1.0, 0.95, 0.8, 0.6, 0.4 };
const double _road_surface_model_fl_lut_mu_slip_rr__lut_addrs[9] = { 0.0, 0.02, 0.05, 0.1, 0.15, 0.2, 0.3, 0.5, 1.0 };
static const int _road_surface_model_fl_product1__n_in_size = 1;
static const int _road_surface_model_fl_product1__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product1__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_product3__n_in_size = 1;
static const int _road_surface_model_fl_product3__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product3__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_product5__n_in_size = 1;
static const int _road_surface_model_fl_product5__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product5__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_product7__n_in_size = 1;
static const int _road_surface_model_fl_product7__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product7__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_product2__n_in_size = 1;
static const int _road_surface_model_fl_product2__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product2__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_mu_fl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_mu_fl__p_addr = 16421;

static const int _road_surface_model_fl_product4__n_in_size = 1;
static const int _road_surface_model_fl_product4__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product4__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_mu_fr__n_out_size = 1;
static const unsigned int _road_surface_model_fl_mu_fr__p_addr = 16422;

static const int _road_surface_model_fl_product6__n_in_size = 1;
static const int _road_surface_model_fl_product6__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product6__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_mu_rl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_mu_rl__p_addr = 16423;

static const int _road_surface_model_fl_product8__n_in_size = 1;
static const int _road_surface_model_fl_product8__n_num_of_terminals = 2;
static const char _road_surface_model_fl_product8__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_mu_rr__n_out_size = 1;
static const unsigned int _road_surface_model_fl_mu_rr__p_addr = 16424;

static const int _road_surface_model_fl_fx__n_in_size = 1;
static const int _road_surface_model_fl_fx__n_num_of_terminals = 2;
static const char _road_surface_model_fl_fx__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_fx1__n_in_size = 1;
static const int _road_surface_model_fl_fx1__n_num_of_terminals = 2;
static const char _road_surface_model_fl_fx1__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_fx2__n_in_size = 1;
static const int _road_surface_model_fl_fx2__n_num_of_terminals = 2;
static const char _road_surface_model_fl_fx2__n_signs_bool[2] = {1, 1};


static const int _road_surface_model_fl_fx3__n_in_size = 1;
static const int _road_surface_model_fl_fx3__n_num_of_terminals = 2;
static const char _road_surface_model_fl_fx3__n_signs_bool[2] = {1, 1};


static const char* _road_surface_model_fl_gain_rw_tload__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_gain_rw_tload__p_gain = 0.3;

static const int _road_surface_model_fl_fx_fl__n_out_size = 1;
static const unsigned int _road_surface_model_fl_fx_fl__p_addr = 16420;

static const char* _road_surface_model_fl_gain_rw_tload1__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_gain_rw_tload1__p_gain = 0.3;

static const char* _road_surface_model_fl_gain_rw_tload2__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_gain_rw_tload2__p_gain = 0.3;

static const char* _road_surface_model_fl_gain_rw_tload3__n_multiplication = "Element-wise(K.*u)";
static const real _road_surface_model_fl_gain_rw_tload3__p_gain = 0.3;

static const char* _fl_pmdc_gain__n_multiplication = "Element-wise(K.*u)";
static const real _fl_pmdc_gain__p_gain = 0.0;

static const int _fl_t_load__n_out_size = 1;
static const unsigned int _fl_t_load__p_addr = 16391;

static const int _road_surface_model_fl_fl_tload__n_out_size = 1;
static const unsigned int _road_surface_model_fl_fl_tload__p_addr = 16418;

static const char* _fr_pmdc_gain__n_multiplication = "Element-wise(K.*u)";
static const real _fr_pmdc_gain__p_gain = 0.0;

static const int _fr_t_load__n_out_size = 1;
static const unsigned int _fr_t_load__p_addr = 16399;

static const int _road_surface_model_fl_fr_load__n_out_size = 1;
static const unsigned int _road_surface_model_fl_fr_load__p_addr = 16419;

static const char* _rl_pmdc_gain1__n_multiplication = "Element-wise(K.*u)";
static const real _rl_pmdc_gain1__p_gain = 0.0;

static const int _rl_t_load__n_out_size = 1;
static const unsigned int _rl_t_load__p_addr = 16407;

static const int _road_surface_model_fl_rl_load__n_out_size = 1;
static const unsigned int _road_surface_model_fl_rl_load__p_addr = 16426;

static const char* _rr_pmdc_gain__n_multiplication = "Element-wise(K.*u)";
static const real _rr_pmdc_gain__p_gain = 0.0;

static const int _rr_t_load__n_out_size = 1;
static const unsigned int _rr_t_load__p_addr = 16415;

static const int _road_surface_model_fl_rr_load__n_out_size = 1;
static const unsigned int _road_surface_model_fl_rr_load__p_addr = 16427;

static const int _fl_pmdc_sum1__n_in_size = 1;
static const int _fl_pmdc_sum1__n_num_of_inputs = 3;
static const char _fl_pmdc_sum1__n_signs_bool[3] = {1, 0, 0};


static const int _fr_pmdc_sum1__n_in_size = 1;
static const int _fr_pmdc_sum1__n_num_of_inputs = 3;
static const char _fr_pmdc_sum1__n_signs_bool[3] = {1, 0, 0};


static const int _rl_pmdc_sum1__n_in_size = 1;
static const int _rl_pmdc_sum1__n_num_of_inputs = 3;
static const char _rl_pmdc_sum1__n_signs_bool[3] = {1, 0, 0};


static const int _rr_pmdc_sum1__n_in_size = 1;
static const int _rr_pmdc_sum1__n_num_of_inputs = 3;
static const char _rr_pmdc_sum1__n_signs_bool[3] = {1, 0, 0};


static const char* _fl_pmdc_j_1__n_multiplication = "Element-wise(K.*u)";
static const real _fl_pmdc_j_1__p_gain = 50.0;

static const char* _fr_pmdc_j_1__n_multiplication = "Element-wise(K.*u)";
static const real _fr_pmdc_j_1__p_gain = 50.0;

static const char* _rl_pmdc_j_1__n_multiplication = "Element-wise(K.*u)";
static const real _rl_pmdc_j_1__p_gain = 50.0;

static const char* _rr_pmdc_j_1__n_multiplication = "Element-wise(K.*u)";
static const real _rr_pmdc_j_1__p_gain = 50.0;


//@cmp.var.start
// variables
real _battery1_soc__out;
static real _fl_en__out;
double _fl_ina__out;
real _fl_pmdc_iarm_ia1__out;
static real _fl_pmdc_integratoromega__out;
real _fl_pmdc_va1_va1__out;
static real _fr_en__out;
double _fr_ina__out;
real _fr_pmdc_iarm_ia1__out;
static real _fr_pmdc_integratoromega__out;
real _fr_pmdc_va1_va1__out;
static real _rl_en__out;
double _rl_ina__out;
real _rl_pmdc_iarm_ia1__out;
static real _rl_pmdc_integratoromega__out;
real _rl_pmdc_va1_va1__out;
static real _rr_en__out;
double _rr_ina__out;
real _rr_pmdc_iarm_ia1__out;
static real _rr_pmdc_integratoromega__out;
real _rr_pmdc_va1_va1__out;
real _vcbat_va1__out;
double _omega_test__out;
static real _road_surface_model_fl_fz__out;
static real _road_surface_model_fl_fz1__out;
static real _road_surface_model_fl_fz2__out;
static real _road_surface_model_fl_fz3__out;
double _road_surface_model_fl_mu_scalefl__out;
double _road_surface_model_fl_mu_scalefr__out;
double _road_surface_model_fl_mu_scalerl__out;
double _road_surface_model_fl_mu_scalerr__out;
double _road_surface_model_fl_v_vehicle__out;
static real _battery1_gainsoc__out;
static real _fl_gain1__out;



static real _fl_pmdc_kt__out;



static real _fl_pmdc_integrator_rollover1__out;
static real _fl_pmdc_ke__out;
static real _fl_pmdc_b__out;






static real _fr_gain1__out;



static real _fr_pmdc_kt__out;



static real _fr_pmdc_integrator_rollover1__out;
static real _fr_pmdc_ke__out;
static real _fr_pmdc_b__out;






static real _rl_gain1__out;



static real _rl_pmdc_kt__out;



static real _rl_pmdc_integrator_rollover1__out;
static real _rl_pmdc_ke__out;
static real _rl_pmdc_b__out;






static real _rr_gain1__out;



static real _rr_pmdc_kt__out;



static real _rr_pmdc_integrator_rollover1__out;
static real _rr_pmdc_ke__out;
static real _rr_pmdc_b__out;









static real _road_surface_model_fl_cicr_wheel__out;
static real _road_surface_model_fl_cicr_wheel1__out;
static real _road_surface_model_fl_cicr_wheel2__out;
static real _road_surface_model_fl_cicr_wheel3__out;






X_UnInt32 _fl_single_phase_inverter1_pwm_modulator__channels[2] = {0, 1};
double _fl_single_phase_inverter1_pwm_modulator__limited_in[2];











X_UnInt32 _fr_single_phase_inverter1_pwm_modulator__channels[2] = {2, 3};
double _fr_single_phase_inverter1_pwm_modulator__limited_in[2];











X_UnInt32 _rl_single_phase_inverter1_pwm_modulator__channels[2] = {4, 5};
double _rl_single_phase_inverter1_pwm_modulator__limited_in[2];











X_UnInt32 _rr_single_phase_inverter1_pwm_modulator__channels[2] = {6, 7};
double _rr_single_phase_inverter1_pwm_modulator__limited_in[2];














double _road_surface_model_fl_c_function2__v_vehicle;
double _road_surface_model_fl_c_function2__v_wheel;

double _road_surface_model_fl_c_function2__slip;
double _road_surface_model_fl_c_function2__slip_sign;




double _road_surface_model_fl_c_function3__v_vehicle;
double _road_surface_model_fl_c_function3__v_wheel;

double _road_surface_model_fl_c_function3__slip;
double _road_surface_model_fl_c_function3__slip_sign;




double _road_surface_model_fl_c_function4__v_vehicle;
double _road_surface_model_fl_c_function4__v_wheel;

double _road_surface_model_fl_c_function4__slip;
double _road_surface_model_fl_c_function4__slip_sign;




double _road_surface_model_fl_c_function5__v_vehicle;
double _road_surface_model_fl_c_function5__v_wheel;

double _road_surface_model_fl_c_function5__slip;
double _road_surface_model_fl_c_function5__slip_sign;




static real _road_surface_model_fl_abs1__out;






static real _road_surface_model_fl_abs2__out;



static real _road_surface_model_fl_abs3__out;



static real _road_surface_model_fl_abs4__out;



double _road_surface_model_fl_lut_mu_slip_fl__value;
X_Int32 _road_surface_model_fl_lut_mu_slip_fl__leftIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_fl__rightIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_fl__curAddr;
double _road_surface_model_fl_lut_mu_slip_fl__fraction;

double _road_surface_model_fl_lut_mu_slip_fr__value;
X_Int32 _road_surface_model_fl_lut_mu_slip_fr__leftIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_fr__rightIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_fr__curAddr;
double _road_surface_model_fl_lut_mu_slip_fr__fraction;

double _road_surface_model_fl_lut_mu_slip_rl__value;
X_Int32 _road_surface_model_fl_lut_mu_slip_rl__leftIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_rl__rightIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_rl__curAddr;
double _road_surface_model_fl_lut_mu_slip_rl__fraction;

double _road_surface_model_fl_lut_mu_slip_rr__value;
X_Int32 _road_surface_model_fl_lut_mu_slip_rr__leftIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_rr__rightIndex;
X_Int32 _road_surface_model_fl_lut_mu_slip_rr__curAddr;
double _road_surface_model_fl_lut_mu_slip_rr__fraction;

static real _road_surface_model_fl_product1__out;
static real _road_surface_model_fl_product3__out;
static real _road_surface_model_fl_product5__out;
static real _road_surface_model_fl_product7__out;
static real _road_surface_model_fl_product2__out;



static real _road_surface_model_fl_product4__out;



static real _road_surface_model_fl_product6__out;



static real _road_surface_model_fl_product8__out;



static real _road_surface_model_fl_fx__out;
static real _road_surface_model_fl_fx1__out;
static real _road_surface_model_fl_fx2__out;
static real _road_surface_model_fl_fx3__out;
static real _road_surface_model_fl_gain_rw_tload__out;



static real _road_surface_model_fl_gain_rw_tload1__out;
static real _road_surface_model_fl_gain_rw_tload2__out;
static real _road_surface_model_fl_gain_rw_tload3__out;
static real _fl_pmdc_gain__out;






static real _fr_pmdc_gain__out;






static real _rl_pmdc_gain1__out;






static real _rr_pmdc_gain__out;






static real _fl_pmdc_sum1__out;
static real _fr_pmdc_sum1__out;
static real _rl_pmdc_sum1__out;
static real _rr_pmdc_sum1__out;
static real _fl_pmdc_j_1__out;
static real _fr_pmdc_j_1__out;
static real _rl_pmdc_j_1__out;
static real _rr_pmdc_j_1__out;
//@cmp.var.end

//@cmp.svar.start
// state variables









real _fl_pmdc_integratoromega__state;











real _fr_pmdc_integratoromega__state;











real _rl_pmdc_integratoromega__state;











real _rr_pmdc_integratoromega__state;



































real _fl_pmdc_integrator_rollover1__state;


























real _fr_pmdc_integrator_rollover1__state;


























real _rl_pmdc_integrator_rollover1__state;


























real _rr_pmdc_integrator_rollover1__state;




































































































































































































































































//@cmp.svar.end

// IO shared variables

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif





// generated using template: \templates\virtual_hil\fmi_custom_logger_fncs.template---------------------------------
#include <stdarg.h>



//
// DMA buffers
//





















































































































































































































































































































































































































































































































































































































// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    {
        _fl_pmdc_integratoromega__state = 0;
    }
    {
        _fl_pmdc_integratoromega__state = ((real) _fl_pmdc_integratoromega__n_initial_value[0]);
    }
    {
        _fr_pmdc_integratoromega__state = 0;
    }
    {
        _fr_pmdc_integratoromega__state = ((real) _fr_pmdc_integratoromega__n_initial_value[0]);
    }
    {
        _rl_pmdc_integratoromega__state = 0;
    }
    {
        _rl_pmdc_integratoromega__state = ((real) _rl_pmdc_integratoromega__n_initial_value[0]);
    }
    {
        _rr_pmdc_integratoromega__state = 0;
    }
    {
        _rr_pmdc_integratoromega__state = ((real) _rr_pmdc_integratoromega__n_initial_value[0]);
    }
    {
        HIL_OutAO(0x4000, 0);
    }
    {
        HIL_OutAO(0x4004, 0);
    }
    {
        _fl_pmdc_integrator_rollover1__state = 0;
    }
    {
        _fl_pmdc_integrator_rollover1__state = _fl_pmdc_integrator_rollover1__p_initial_integrator_output;
    }
    {
        HIL_OutAO(0x4006, 0);
    }
    {
        HIL_OutAO(0x4002, 0);
    }
    {
        HIL_OutAO(0x4008, 0);
    }
    {
        HIL_OutAO(0x400c, 0);
    }
    {
        _fr_pmdc_integrator_rollover1__state = 0;
    }
    {
        _fr_pmdc_integrator_rollover1__state = _fr_pmdc_integrator_rollover1__p_initial_integrator_output;
    }
    {
        HIL_OutAO(0x400e, 0);
    }
    {
        HIL_OutAO(0x400a, 0);
    }
    {
        HIL_OutAO(0x4010, 0);
    }
    {
        HIL_OutAO(0x4014, 0);
    }
    {
        _rl_pmdc_integrator_rollover1__state = 0;
    }
    {
        _rl_pmdc_integrator_rollover1__state = _rl_pmdc_integrator_rollover1__p_initial_integrator_output;
    }
    {
        HIL_OutAO(0x4016, 0);
    }
    {
        HIL_OutAO(0x4012, 0);
    }
    {
        HIL_OutAO(0x4018, 0);
    }
    {
        HIL_OutAO(0x401c, 0);
    }
    {
        _rr_pmdc_integrator_rollover1__state = 0;
    }
    {
        _rr_pmdc_integrator_rollover1__state = _rr_pmdc_integrator_rollover1__p_initial_integrator_output;
    }
    {
        HIL_OutAO(0x401a, 0);
    }
    {
        HIL_OutAO(0x4020, 0);
    }
    {
        HIL_OutAO(0x4021, 0);
    }
    {
        HIL_OutAO(0x4029, 0);
    }
    {
        HIL_OutAO(0x4031, 0);
    }
    HIL_OutInt32(0x2000080 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 280);
    HIL_OutInt32(0x2000080 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x20000c0 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 280);
    HIL_OutInt32(0x20001c0 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x2000200 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000340 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, 0x3);
    {
        HIL_OutAO(0x4003, 0);
    }
    {
        HIL_OutAO(0x4005, 0);
    }
    {
        HIL_OutAO(0x4001, 0);
    }
    {
        HIL_OutFloat(0x86c0000, 0.0);
    }
    HIL_OutInt32(0x2000080 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 280);
    HIL_OutInt32(0x2000080 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x20000c0 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 280);
    HIL_OutInt32(0x20001c0 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x2000200 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000340 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, 0xc);
    {
        HIL_OutAO(0x400b, 0);
    }
    {
        HIL_OutAO(0x400d, 0);
    }
    {
        HIL_OutAO(0x4009, 0);
    }
    {
        HIL_OutFloat(0x86c0001, 0.0);
    }
    HIL_OutInt32(0x2000080 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 280);
    HIL_OutInt32(0x2000080 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x20000c0 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 280);
    HIL_OutInt32(0x20001c0 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x2000200 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000340 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, 0x30);
    {
        HIL_OutAO(0x4013, 0);
    }
    {
        HIL_OutAO(0x4015, 0);
    }
    {
        HIL_OutAO(0x4011, 0);
    }
    {
        HIL_OutFloat(0x8ac0000, 0.0);
    }
    HIL_OutInt32(0x2000080 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 14000);
    HIL_OutInt32(0x20000c0 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 280);
    HIL_OutInt32(0x2000080 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x20000c0 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 280);
    HIL_OutInt32(0x20001c0 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 14000);
    HIL_OutInt32(0x2000200 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000340 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000340 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, 0xc0);
    {
        HIL_OutAO(0x401b, 0);
    }
    {
        HIL_OutAO(0x401d, 0);
    }
    {
        HIL_OutAO(0x4019, 0);
    }
    {
        HIL_OutFloat(0x8ac0001, 0.0);
    }
    {
        HIL_OutAO(0x401e, 0);
    }
    {
    }
    {
        HIL_OutAO(0x4035, 0);
    }
    {
    }
    {
        HIL_OutAO(0x4032, 0);
    }
    {
    }
    {
        HIL_OutAO(0x4033, 0);
    }
    {
    }
    {
        HIL_OutAO(0x4034, 0);
    }
    {
        HIL_OutAO(0x402c, 0);
    }
    {
        HIL_OutAO(0x4030, 0);
    }
    {
        HIL_OutAO(0x402d, 0);
    }
    {
        HIL_OutAO(0x402e, 0);
    }
    {
        HIL_OutAO(0x402f, 0);
    }
    {
        HIL_OutAO(0x4025, 0);
    }
    {
        HIL_OutAO(0x4026, 0);
    }
    {
        HIL_OutAO(0x4027, 0);
    }
    {
        HIL_OutAO(0x4028, 0);
    }
    {
        HIL_OutAO(0x4024, 0);
    }
    {
        HIL_OutAO(0x4007, 0);
    }
    {
        HIL_OutAO(0x4022, 0);
    }
    {
        HIL_OutAO(0x400f, 0);
    }
    {
        HIL_OutAO(0x4023, 0);
    }
    {
        HIL_OutAO(0x4017, 0);
    }
    {
        HIL_OutAO(0x402a, 0);
    }
    {
        HIL_OutAO(0x401f, 0);
    }
    {
        HIL_OutAO(0x402b, 0);
    }
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}


// generated using template: virtual_hil/common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Battery1.SOC
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80004);
        _battery1_soc__out = tac_tmp1;
    }
    // Generated from the component: FL.En
    {
        _fl_en__out = _fl_en__p_value;
    }
    // Generated from the component: FL.InA
    _fl_ina__out = XIo_InFloat(0x2f800000);
    // Generated from the component: FL.PMDC.Iarm.Ia1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80205);
        _fl_pmdc_iarm_ia1__out = tac_tmp1;
    }
    // Generated from the component: FL.PMDC.IntegratorOmega
    {
        _fl_pmdc_integratoromega__out = _fl_pmdc_integratoromega__state;
    }
    // Generated from the component: FL.PMDC.Va1.Va1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80203);
        _fl_pmdc_va1_va1__out = tac_tmp1;
    }
    // Generated from the component: FR.En
    {
        _fr_en__out = _fr_en__p_value;
    }
    // Generated from the component: FR.InA
    _fr_ina__out = XIo_InFloat(0x2f800004);
    // Generated from the component: FR.PMDC.Iarm.Ia1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80206);
        _fr_pmdc_iarm_ia1__out = tac_tmp1;
    }
    // Generated from the component: FR.PMDC.IntegratorOmega
    {
        _fr_pmdc_integratoromega__out = _fr_pmdc_integratoromega__state;
    }
    // Generated from the component: FR.PMDC.Va1.Va1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80204);
        _fr_pmdc_va1_va1__out = tac_tmp1;
    }
    // Generated from the component: RL.En
    {
        _rl_en__out = _rl_en__p_value;
    }
    // Generated from the component: RL.InA
    _rl_ina__out = XIo_InFloat(0x2f800008);
    // Generated from the component: RL.PMDC.Iarm.Ia1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80405);
        _rl_pmdc_iarm_ia1__out = tac_tmp1;
    }
    // Generated from the component: RL.PMDC.IntegratorOmega
    {
        _rl_pmdc_integratoromega__out = _rl_pmdc_integratoromega__state;
    }
    // Generated from the component: RL.PMDC.Va1.Va1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80403);
        _rl_pmdc_va1_va1__out = tac_tmp1;
    }
    // Generated from the component: RR.En
    {
        _rr_en__out = _rr_en__p_value;
    }
    // Generated from the component: RR.InA
    _rr_ina__out = XIo_InFloat(0x2f80000c);
    // Generated from the component: RR.PMDC.Iarm.Ia1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80406);
        _rr_pmdc_iarm_ia1__out = tac_tmp1;
    }
    // Generated from the component: RR.PMDC.IntegratorOmega
    {
        _rr_pmdc_integratoromega__out = _rr_pmdc_integratoromega__state;
    }
    // Generated from the component: RR.PMDC.Va1.Va1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80404);
        _rr_pmdc_va1_va1__out = tac_tmp1;
    }
    // Generated from the component: VCbat.Va1
    {
        real tac_tmp1;
        tac_tmp1 = HIL_InFloat(0xc80006);
        _vcbat_va1__out = tac_tmp1;
    }
    // Generated from the component: omega_test
    _omega_test__out = XIo_InFloat(0x2f800010);
    // Generated from the component: road_surface_model_fl.fz
    {
        _road_surface_model_fl_fz__out = _road_surface_model_fl_fz__p_value;
    }
    // Generated from the component: road_surface_model_fl.fz1
    {
        _road_surface_model_fl_fz1__out = _road_surface_model_fl_fz1__p_value;
    }
    // Generated from the component: road_surface_model_fl.fz2
    {
        _road_surface_model_fl_fz2__out = _road_surface_model_fl_fz2__p_value;
    }
    // Generated from the component: road_surface_model_fl.fz3
    {
        _road_surface_model_fl_fz3__out = _road_surface_model_fl_fz3__p_value;
    }
    // Generated from the component: road_surface_model_fl.mu_scalefl
    _road_surface_model_fl_mu_scalefl__out = XIo_InFloat(0x2f800014);
    // Generated from the component: road_surface_model_fl.mu_scalefr
    _road_surface_model_fl_mu_scalefr__out = XIo_InFloat(0x2f800018);
    // Generated from the component: road_surface_model_fl.mu_scalerl
    _road_surface_model_fl_mu_scalerl__out = XIo_InFloat(0x2f80001c);
    // Generated from the component: road_surface_model_fl.mu_scalerr
    _road_surface_model_fl_mu_scalerr__out = XIo_InFloat(0x2f800020);
    // Generated from the component: road_surface_model_fl.v_vehicle
    _road_surface_model_fl_v_vehicle__out = XIo_InFloat(0x2f800024);
    // Generated from the component: Battery1.GainSOC
    {
        _battery1_gainsoc__out = ((real) (_battery1_gainsoc__p_gain * _battery1_soc__out));
    }
    // Generated from the component: FL.Gain1
    {
        _fl_gain1__out = ((real) (_fl_gain1__p_gain * _fl_ina__out));
    }
    // Generated from the component: FL.InA_FR
    {
        HIL_OutAO(0x4000, _fl_ina__out);
    }
    // Generated from the component: FL.PMDC.Kt
    {
        _fl_pmdc_kt__out = ((real) (_fl_pmdc_kt__p_gain * _fl_pmdc_iarm_ia1__out));
    }
    // Generated from the component: FL.PMDC.i_fr
    {
        HIL_OutAO(0x4004, _fl_pmdc_iarm_ia1__out);
    }
    // Generated from the component: FL.PMDC.Integrator Rollover1
    {
        _fl_pmdc_integrator_rollover1__state += (_fl_pmdc_integrator_rollover1__p_execution_rate * _fl_pmdc_integratoromega__out);
        if((_fl_pmdc_integrator_rollover1__state >= _fl_pmdc_integrator_rollover1__p_roll_over_value)) {
            _fl_pmdc_integrator_rollover1__state = (_fl_pmdc_integrator_rollover1__state - _fl_pmdc_integrator_rollover1__p_roll_over_value);
        }
        _fl_pmdc_integrator_rollover1__out = _fl_pmdc_integrator_rollover1__state;
    }
    // Generated from the component: FL.PMDC.Ke
    {
        _fl_pmdc_ke__out = ((real) (_fl_pmdc_ke__p_gain * _fl_pmdc_integratoromega__out));
    }
    // Generated from the component: FL.PMDC.b
    {
        _fl_pmdc_b__out = ((real) (_fl_pmdc_b__p_gain * _fl_pmdc_integratoromega__out));
    }
    // Generated from the component: FL.PMDC.mech_speed_fr
    {
        HIL_OutAO(0x4006, _fl_pmdc_integratoromega__out);
    }
    // Generated from the component: FL.PMDC.Va1a2
    {
        HIL_OutAO(0x4002, _fl_pmdc_va1_va1__out);
    }
    // Generated from the component: FR.Gain1
    {
        _fr_gain1__out = ((real) (_fr_gain1__p_gain * _fr_ina__out));
    }
    // Generated from the component: FR.InA_FR
    {
        HIL_OutAO(0x4008, _fr_ina__out);
    }
    // Generated from the component: FR.PMDC.Kt
    {
        _fr_pmdc_kt__out = ((real) (_fr_pmdc_kt__p_gain * _fr_pmdc_iarm_ia1__out));
    }
    // Generated from the component: FR.PMDC.i_fr
    {
        HIL_OutAO(0x400c, _fr_pmdc_iarm_ia1__out);
    }
    // Generated from the component: FR.PMDC.Integrator Rollover1
    {
        _fr_pmdc_integrator_rollover1__state += (_fr_pmdc_integrator_rollover1__p_execution_rate * _fr_pmdc_integratoromega__out);
        if((_fr_pmdc_integrator_rollover1__state >= _fr_pmdc_integrator_rollover1__p_roll_over_value)) {
            _fr_pmdc_integrator_rollover1__state = (_fr_pmdc_integrator_rollover1__state - _fr_pmdc_integrator_rollover1__p_roll_over_value);
        }
        _fr_pmdc_integrator_rollover1__out = _fr_pmdc_integrator_rollover1__state;
    }
    // Generated from the component: FR.PMDC.Ke
    {
        _fr_pmdc_ke__out = ((real) (_fr_pmdc_ke__p_gain * _fr_pmdc_integratoromega__out));
    }
    // Generated from the component: FR.PMDC.b
    {
        _fr_pmdc_b__out = ((real) (_fr_pmdc_b__p_gain * _fr_pmdc_integratoromega__out));
    }
    // Generated from the component: FR.PMDC.mech_speed_fr
    {
        HIL_OutAO(0x400e, _fr_pmdc_integratoromega__out);
    }
    // Generated from the component: FR.PMDC.Va1a2
    {
        HIL_OutAO(0x400a, _fr_pmdc_va1_va1__out);
    }
    // Generated from the component: RL.Gain1
    {
        _rl_gain1__out = ((real) (_rl_gain1__p_gain * _rl_ina__out));
    }
    // Generated from the component: RL.InA_FR
    {
        HIL_OutAO(0x4010, _rl_ina__out);
    }
    // Generated from the component: RL.PMDC.Kt
    {
        _rl_pmdc_kt__out = ((real) (_rl_pmdc_kt__p_gain * _rl_pmdc_iarm_ia1__out));
    }
    // Generated from the component: RL.PMDC.i_fr
    {
        HIL_OutAO(0x4014, _rl_pmdc_iarm_ia1__out);
    }
    // Generated from the component: RL.PMDC.Integrator Rollover1
    {
        _rl_pmdc_integrator_rollover1__state += (_rl_pmdc_integrator_rollover1__p_execution_rate * _rl_pmdc_integratoromega__out);
        if((_rl_pmdc_integrator_rollover1__state >= _rl_pmdc_integrator_rollover1__p_roll_over_value)) {
            _rl_pmdc_integrator_rollover1__state = (_rl_pmdc_integrator_rollover1__state - _rl_pmdc_integrator_rollover1__p_roll_over_value);
        }
        _rl_pmdc_integrator_rollover1__out = _rl_pmdc_integrator_rollover1__state;
    }
    // Generated from the component: RL.PMDC.Ke
    {
        _rl_pmdc_ke__out = ((real) (_rl_pmdc_ke__p_gain * _rl_pmdc_integratoromega__out));
    }
    // Generated from the component: RL.PMDC.b
    {
        _rl_pmdc_b__out = ((real) (_rl_pmdc_b__p_gain * _rl_pmdc_integratoromega__out));
    }
    // Generated from the component: RL.PMDC.mech_speed_fr
    {
        HIL_OutAO(0x4016, _rl_pmdc_integratoromega__out);
    }
    // Generated from the component: RL.PMDC.Va1a2
    {
        HIL_OutAO(0x4012, _rl_pmdc_va1_va1__out);
    }
    // Generated from the component: RR.Gain1
    {
        _rr_gain1__out = ((real) (_rr_gain1__p_gain * _rr_ina__out));
    }
    // Generated from the component: RR.InA_FR
    {
        HIL_OutAO(0x4018, _rr_ina__out);
    }
    // Generated from the component: RR.PMDC.Kt
    {
        _rr_pmdc_kt__out = ((real) (_rr_pmdc_kt__p_gain * _rr_pmdc_iarm_ia1__out));
    }
    // Generated from the component: RR.PMDC.i_fr
    {
        HIL_OutAO(0x401c, _rr_pmdc_iarm_ia1__out);
    }
    // Generated from the component: RR.PMDC.Integrator Rollover1
    {
        _rr_pmdc_integrator_rollover1__state += (_rr_pmdc_integrator_rollover1__p_execution_rate * _rr_pmdc_integratoromega__out);
        if((_rr_pmdc_integrator_rollover1__state >= _rr_pmdc_integrator_rollover1__p_roll_over_value)) {
            _rr_pmdc_integrator_rollover1__state = (_rr_pmdc_integrator_rollover1__state - _rr_pmdc_integrator_rollover1__p_roll_over_value);
        }
        _rr_pmdc_integrator_rollover1__out = _rr_pmdc_integrator_rollover1__state;
    }
    // Generated from the component: RR.PMDC.Ke
    {
        _rr_pmdc_ke__out = ((real) (_rr_pmdc_ke__p_gain * _rr_pmdc_integratoromega__out));
    }
    // Generated from the component: RR.PMDC.b
    {
        _rr_pmdc_b__out = ((real) (_rr_pmdc_b__p_gain * _rr_pmdc_integratoromega__out));
    }
    // Generated from the component: RR.PMDC.Va1a2
    {
        HIL_OutAO(0x401a, _rr_pmdc_va1_va1__out);
    }
    // Generated from the component: Vbat
    {
        HIL_OutAO(0x4020, _vcbat_va1__out);
    }
    // Generated from the component: omega_TEST
    {
        HIL_OutAO(0x4021, _omega_test__out);
    }
    // Generated from the component: road_surface_model_fl.cicr_wheel
    {
        _road_surface_model_fl_cicr_wheel__out = ((real) (_road_surface_model_fl_cicr_wheel__p_gain * _omega_test__out));
    }
    // Generated from the component: road_surface_model_fl.cicr_wheel1
    {
        _road_surface_model_fl_cicr_wheel1__out = ((real) (_road_surface_model_fl_cicr_wheel1__p_gain * _omega_test__out));
    }
    // Generated from the component: road_surface_model_fl.cicr_wheel2
    {
        _road_surface_model_fl_cicr_wheel2__out = ((real) (_road_surface_model_fl_cicr_wheel2__p_gain * _omega_test__out));
    }
    // Generated from the component: road_surface_model_fl.cicr_wheel3
    {
        _road_surface_model_fl_cicr_wheel3__out = ((real) (_road_surface_model_fl_cicr_wheel3__p_gain * _omega_test__out));
    }
    // Generated from the component: road_surface_model_fl.muscale_test_fl
    {
        HIL_OutAO(0x4029, _road_surface_model_fl_mu_scalefl__out);
    }
    // Generated from the component: road_surface_model_fl.v_vehicle_test
    {
        HIL_OutAO(0x4031, _road_surface_model_fl_v_vehicle__out);
    }
    // Generated from the component: FL.Single Phase Inverter1.PWM_Modulator
    _fl_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_fl_ina__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _fl_single_phase_inverter1_pwm_modulator__channels[0], ceil((_fl_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    _fl_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_fl_gain1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _fl_single_phase_inverter1_pwm_modulator__channels[1], ceil((_fl_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 7000.0));
    if (_fl_en__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _fl_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _fl_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    // 2
    HIL_OutInt32(0x2000140, 0x3);
    // Generated from the component: FL.PMDC.el_torque_fr
    {
        HIL_OutAO(0x4003, _fl_pmdc_kt__out);
    }
    // Generated from the component: FL.PMDC.mech_angle_fr
    {
        HIL_OutAO(0x4005, _fl_pmdc_integrator_rollover1__out);
    }
    // Generated from the component: FL.PMDC.E_bemf
    {
        HIL_OutAO(0x4001, _fl_pmdc_ke__out);
    }
    // Generated from the component: FL.PMDC.Ebemf.Vs1
    {
        HIL_OutFloat(0x86c0000, _fl_pmdc_ke__out);
    }
    // Generated from the component: FR.Single Phase Inverter1.PWM_Modulator
    _fr_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_fr_ina__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _fr_single_phase_inverter1_pwm_modulator__channels[0], ceil((_fr_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    _fr_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_fr_gain1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _fr_single_phase_inverter1_pwm_modulator__channels[1], ceil((_fr_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 7000.0));
    if (_fr_en__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _fr_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _fr_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    // 2
    HIL_OutInt32(0x2000140, 0xc);
    // Generated from the component: FR.PMDC.el_torque_fr
    {
        HIL_OutAO(0x400b, _fr_pmdc_kt__out);
    }
    // Generated from the component: FR.PMDC.mech_angle_fr
    {
        HIL_OutAO(0x400d, _fr_pmdc_integrator_rollover1__out);
    }
    // Generated from the component: FR.PMDC.E_bemf
    {
        HIL_OutAO(0x4009, _fr_pmdc_ke__out);
    }
    // Generated from the component: FR.PMDC.Ebemf.Vs1
    {
        HIL_OutFloat(0x86c0001, _fr_pmdc_ke__out);
    }
    // Generated from the component: RL.Single Phase Inverter1.PWM_Modulator
    _rl_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_rl_ina__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _rl_single_phase_inverter1_pwm_modulator__channels[0], ceil((_rl_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    _rl_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_rl_gain1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _rl_single_phase_inverter1_pwm_modulator__channels[1], ceil((_rl_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 7000.0));
    if (_rl_en__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _rl_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _rl_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    // 2
    HIL_OutInt32(0x2000140, 0x30);
    // Generated from the component: RL.PMDC.el_torque_fr
    {
        HIL_OutAO(0x4013, _rl_pmdc_kt__out);
    }
    // Generated from the component: RL.PMDC.mech_angle_fr
    {
        HIL_OutAO(0x4015, _rl_pmdc_integrator_rollover1__out);
    }
    // Generated from the component: RL.PMDC.E_bemf
    {
        HIL_OutAO(0x4011, _rl_pmdc_ke__out);
    }
    // Generated from the component: RL.PMDC.Ebemf.Vs1
    {
        HIL_OutFloat(0x8ac0000, _rl_pmdc_ke__out);
    }
    // Generated from the component: RR.Single Phase Inverter1.PWM_Modulator
    _rr_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_rr_ina__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _rr_single_phase_inverter1_pwm_modulator__channels[0], ceil((_rr_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 7000.0));
    _rr_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_rr_gain1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _rr_single_phase_inverter1_pwm_modulator__channels[1], ceil((_rr_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 7000.0));
    if (_rr_en__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _rr_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _rr_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    // 2
    HIL_OutInt32(0x2000140, 0xc0);
    // Generated from the component: RR.PMDC.el_torque_fr
    {
        HIL_OutAO(0x401b, _rr_pmdc_kt__out);
    }
    // Generated from the component: RR.PMDC.mech_angle_fr
    {
        HIL_OutAO(0x401d, _rr_pmdc_integrator_rollover1__out);
    }
    // Generated from the component: RR.PMDC.E_bemf
    {
        HIL_OutAO(0x4019, _rr_pmdc_ke__out);
    }
    // Generated from the component: RR.PMDC.Ebemf.Vs1
    {
        HIL_OutFloat(0x8ac0001, _rr_pmdc_ke__out);
    }
    // Generated from the component: RR.PMDC.mech_speed_fr
    {
        HIL_OutAO(0x401e, _rr_pmdc_ke__out);
    }
    // Generated from the component: road_surface_model_fl.C function2
    _road_surface_model_fl_c_function2__v_vehicle = _road_surface_model_fl_v_vehicle__out;
    _road_surface_model_fl_c_function2__v_wheel = _road_surface_model_fl_cicr_wheel__out;
    {
        double  v_min = 0.5;
        double  denom = fabs ( _road_surface_model_fl_c_function2__v_vehicle );
        if ( denom < v_min )     {
            denom = v_min ;
        }
        double  slip_local = ( _road_surface_model_fl_c_function2__v_wheel - _road_surface_model_fl_c_function2__v_vehicle ) / denom;
        if ( slip_local > 1.0 )     {
            slip_local = 1.0 ;
        }
        if ( slip_local < - 1.0 )     {
            slip_local = - 1.0 ;
        }
        _road_surface_model_fl_c_function2__slip = slip_local ;
        if ( slip_local > 0.001 )     {
            _road_surface_model_fl_c_function2__slip_sign = 1.0 ;
        }
        else if ( slip_local < - 0.001 )     {
            _road_surface_model_fl_c_function2__slip_sign = - 1.0 ;
        }
        else     {
            _road_surface_model_fl_c_function2__slip_sign = 0.0 ;
        }
    }
    // Generated from the component: road_surface_model_fl.v_wheel_fl
    {
        HIL_OutAO(0x4035, _road_surface_model_fl_cicr_wheel__out);
    }
    // Generated from the component: road_surface_model_fl.C function3
    _road_surface_model_fl_c_function3__v_vehicle = _road_surface_model_fl_v_vehicle__out;
    _road_surface_model_fl_c_function3__v_wheel = _road_surface_model_fl_cicr_wheel1__out;
    {
        double  v_min = 0.5;
        double  denom = fabs ( _road_surface_model_fl_c_function3__v_vehicle );
        if ( denom < v_min )     {
            denom = v_min ;
        }
        double  slip_local = ( _road_surface_model_fl_c_function3__v_wheel - _road_surface_model_fl_c_function3__v_vehicle ) / denom;
        if ( slip_local > 1.0 )     {
            slip_local = 1.0 ;
        }
        if ( slip_local < - 1.0 )     {
            slip_local = - 1.0 ;
        }
        _road_surface_model_fl_c_function3__slip = slip_local ;
        if ( slip_local > 0.001 )     {
            _road_surface_model_fl_c_function3__slip_sign = 1.0 ;
        }
        else if ( slip_local < - 0.001 )     {
            _road_surface_model_fl_c_function3__slip_sign = - 1.0 ;
        }
        else     {
            _road_surface_model_fl_c_function3__slip_sign = 0.0 ;
        }
    }
    // Generated from the component: road_surface_model_fl.v_wheel_FR
    {
        HIL_OutAO(0x4032, _road_surface_model_fl_cicr_wheel1__out);
    }
    // Generated from the component: road_surface_model_fl.C function4
    _road_surface_model_fl_c_function4__v_vehicle = _road_surface_model_fl_v_vehicle__out;
    _road_surface_model_fl_c_function4__v_wheel = _road_surface_model_fl_cicr_wheel2__out;
    {
        double  v_min = 0.5;
        double  denom = fabs ( _road_surface_model_fl_c_function4__v_vehicle );
        if ( denom < v_min )     {
            denom = v_min ;
        }
        double  slip_local = ( _road_surface_model_fl_c_function4__v_wheel - _road_surface_model_fl_c_function4__v_vehicle ) / denom;
        if ( slip_local > 1.0 )     {
            slip_local = 1.0 ;
        }
        if ( slip_local < - 1.0 )     {
            slip_local = - 1.0 ;
        }
        _road_surface_model_fl_c_function4__slip = slip_local ;
        if ( slip_local > 0.001 )     {
            _road_surface_model_fl_c_function4__slip_sign = 1.0 ;
        }
        else if ( slip_local < - 0.001 )     {
            _road_surface_model_fl_c_function4__slip_sign = - 1.0 ;
        }
        else     {
            _road_surface_model_fl_c_function4__slip_sign = 0.0 ;
        }
    }
    // Generated from the component: road_surface_model_fl.v_wheel_RL
    {
        HIL_OutAO(0x4033, _road_surface_model_fl_cicr_wheel2__out);
    }
    // Generated from the component: road_surface_model_fl.C function5
    _road_surface_model_fl_c_function5__v_vehicle = _road_surface_model_fl_v_vehicle__out;
    _road_surface_model_fl_c_function5__v_wheel = _road_surface_model_fl_cicr_wheel3__out;
    {
        double  v_min = 0.5;
        double  denom = fabs ( _road_surface_model_fl_c_function5__v_vehicle );
        if ( denom < v_min )     {
            denom = v_min ;
        }
        double  slip_local = ( _road_surface_model_fl_c_function5__v_wheel - _road_surface_model_fl_c_function5__v_vehicle ) / denom;
        if ( slip_local > 1.0 )     {
            slip_local = 1.0 ;
        }
        if ( slip_local < - 1.0 )     {
            slip_local = - 1.0 ;
        }
        _road_surface_model_fl_c_function5__slip = slip_local ;
        if ( slip_local > 0.001 )     {
            _road_surface_model_fl_c_function5__slip_sign = 1.0 ;
        }
        else if ( slip_local < - 0.001 )     {
            _road_surface_model_fl_c_function5__slip_sign = - 1.0 ;
        }
        else     {
            _road_surface_model_fl_c_function5__slip_sign = 0.0 ;
        }
    }
    // Generated from the component: road_surface_model_fl.v_wheel_RR
    {
        HIL_OutAO(0x4034, _road_surface_model_fl_cicr_wheel3__out);
    }
    // Generated from the component: road_surface_model_fl.Abs1
    {
        _road_surface_model_fl_abs1__out = ((real) fabs(_road_surface_model_fl_c_function2__slip));
    }
    // Generated from the component: road_surface_model_fl.slip_fl
    {
        HIL_OutAO(0x402c, _road_surface_model_fl_c_function2__slip);
    }
    // Generated from the component: road_surface_model_fl.slip_signFL
    {
        HIL_OutAO(0x4030, _road_surface_model_fl_c_function2__slip_sign);
    }
    // Generated from the component: road_surface_model_fl.Abs2
    {
        _road_surface_model_fl_abs2__out = ((real) fabs(_road_surface_model_fl_c_function3__slip));
    }
    // Generated from the component: road_surface_model_fl.slip_fr
    {
        HIL_OutAO(0x402d, _road_surface_model_fl_c_function3__slip);
    }
    // Generated from the component: road_surface_model_fl.Abs3
    {
        _road_surface_model_fl_abs3__out = ((real) fabs(_road_surface_model_fl_c_function4__slip));
    }
    // Generated from the component: road_surface_model_fl.slip_rl
    {
        HIL_OutAO(0x402e, _road_surface_model_fl_c_function4__slip);
    }
    // Generated from the component: road_surface_model_fl.Abs4
    {
        _road_surface_model_fl_abs4__out = ((real) fabs(_road_surface_model_fl_c_function5__slip));
    }
    // Generated from the component: road_surface_model_fl.slip_rr
    {
        HIL_OutAO(0x402f, _road_surface_model_fl_c_function5__slip);
    }
    // Generated from the component: road_surface_model_fl.LUT_mu_slip_FL
    if(_road_surface_model_fl_abs1__out <= _road_surface_model_fl_lut_mu_slip_fl__lut_addrs[0]) {
        _road_surface_model_fl_lut_mu_slip_fl__fraction = 0.0;
        _road_surface_model_fl_lut_mu_slip_fl__leftIndex = 0;
    }
    else if(_road_surface_model_fl_abs1__out < _road_surface_model_fl_lut_mu_slip_fl__lut_addrs[8]) {
        _road_surface_model_fl_lut_mu_slip_fl__curAddr = 8 >> 1;
        _road_surface_model_fl_lut_mu_slip_fl__leftIndex = 0;
        _road_surface_model_fl_lut_mu_slip_fl__rightIndex = 8;
        while (1 < _road_surface_model_fl_lut_mu_slip_fl__rightIndex - _road_surface_model_fl_lut_mu_slip_fl__leftIndex) {
            if (_road_surface_model_fl_abs1__out < _road_surface_model_fl_lut_mu_slip_fl__lut_addrs[_road_surface_model_fl_lut_mu_slip_fl__curAddr]) {
                _road_surface_model_fl_lut_mu_slip_fl__rightIndex = _road_surface_model_fl_lut_mu_slip_fl__curAddr;
            }
            else {
                _road_surface_model_fl_lut_mu_slip_fl__leftIndex = _road_surface_model_fl_lut_mu_slip_fl__curAddr;
            }
            _road_surface_model_fl_lut_mu_slip_fl__curAddr = (_road_surface_model_fl_lut_mu_slip_fl__leftIndex + _road_surface_model_fl_lut_mu_slip_fl__rightIndex) >> 1;
        }
        _road_surface_model_fl_lut_mu_slip_fl__fraction = (_road_surface_model_fl_abs1__out - _road_surface_model_fl_lut_mu_slip_fl__lut_addrs[_road_surface_model_fl_lut_mu_slip_fl__leftIndex])
                / (_road_surface_model_fl_lut_mu_slip_fl__lut_addrs[_road_surface_model_fl_lut_mu_slip_fl__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_fl__lut_addrs[_road_surface_model_fl_lut_mu_slip_fl__leftIndex]);
    }
    else {
        _road_surface_model_fl_lut_mu_slip_fl__fraction = 1.0;
        _road_surface_model_fl_lut_mu_slip_fl__leftIndex = 7;
    }
    _road_surface_model_fl_lut_mu_slip_fl__value = (_road_surface_model_fl_lut_mu_slip_fl__lut_table[_road_surface_model_fl_lut_mu_slip_fl__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_fl__lut_table[_road_surface_model_fl_lut_mu_slip_fl__leftIndex])
            * _road_surface_model_fl_lut_mu_slip_fl__fraction + _road_surface_model_fl_lut_mu_slip_fl__lut_table[_road_surface_model_fl_lut_mu_slip_fl__leftIndex];
    // Generated from the component: road_surface_model_fl.LUT_mu_slip_FR
    if(_road_surface_model_fl_abs2__out <= _road_surface_model_fl_lut_mu_slip_fr__lut_addrs[0]) {
        _road_surface_model_fl_lut_mu_slip_fr__fraction = 0.0;
        _road_surface_model_fl_lut_mu_slip_fr__leftIndex = 0;
    }
    else if(_road_surface_model_fl_abs2__out < _road_surface_model_fl_lut_mu_slip_fr__lut_addrs[8]) {
        _road_surface_model_fl_lut_mu_slip_fr__curAddr = 8 >> 1;
        _road_surface_model_fl_lut_mu_slip_fr__leftIndex = 0;
        _road_surface_model_fl_lut_mu_slip_fr__rightIndex = 8;
        while (1 < _road_surface_model_fl_lut_mu_slip_fr__rightIndex - _road_surface_model_fl_lut_mu_slip_fr__leftIndex) {
            if (_road_surface_model_fl_abs2__out < _road_surface_model_fl_lut_mu_slip_fr__lut_addrs[_road_surface_model_fl_lut_mu_slip_fr__curAddr]) {
                _road_surface_model_fl_lut_mu_slip_fr__rightIndex = _road_surface_model_fl_lut_mu_slip_fr__curAddr;
            }
            else {
                _road_surface_model_fl_lut_mu_slip_fr__leftIndex = _road_surface_model_fl_lut_mu_slip_fr__curAddr;
            }
            _road_surface_model_fl_lut_mu_slip_fr__curAddr = (_road_surface_model_fl_lut_mu_slip_fr__leftIndex + _road_surface_model_fl_lut_mu_slip_fr__rightIndex) >> 1;
        }
        _road_surface_model_fl_lut_mu_slip_fr__fraction = (_road_surface_model_fl_abs2__out - _road_surface_model_fl_lut_mu_slip_fr__lut_addrs[_road_surface_model_fl_lut_mu_slip_fr__leftIndex])
                / (_road_surface_model_fl_lut_mu_slip_fr__lut_addrs[_road_surface_model_fl_lut_mu_slip_fr__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_fr__lut_addrs[_road_surface_model_fl_lut_mu_slip_fr__leftIndex]);
    }
    else {
        _road_surface_model_fl_lut_mu_slip_fr__fraction = 1.0;
        _road_surface_model_fl_lut_mu_slip_fr__leftIndex = 7;
    }
    _road_surface_model_fl_lut_mu_slip_fr__value = (_road_surface_model_fl_lut_mu_slip_fr__lut_table[_road_surface_model_fl_lut_mu_slip_fr__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_fr__lut_table[_road_surface_model_fl_lut_mu_slip_fr__leftIndex])
            * _road_surface_model_fl_lut_mu_slip_fr__fraction + _road_surface_model_fl_lut_mu_slip_fr__lut_table[_road_surface_model_fl_lut_mu_slip_fr__leftIndex];
    // Generated from the component: road_surface_model_fl.LUT_mu_slip_RL
    if(_road_surface_model_fl_abs3__out <= _road_surface_model_fl_lut_mu_slip_rl__lut_addrs[0]) {
        _road_surface_model_fl_lut_mu_slip_rl__fraction = 0.0;
        _road_surface_model_fl_lut_mu_slip_rl__leftIndex = 0;
    }
    else if(_road_surface_model_fl_abs3__out < _road_surface_model_fl_lut_mu_slip_rl__lut_addrs[8]) {
        _road_surface_model_fl_lut_mu_slip_rl__curAddr = 8 >> 1;
        _road_surface_model_fl_lut_mu_slip_rl__leftIndex = 0;
        _road_surface_model_fl_lut_mu_slip_rl__rightIndex = 8;
        while (1 < _road_surface_model_fl_lut_mu_slip_rl__rightIndex - _road_surface_model_fl_lut_mu_slip_rl__leftIndex) {
            if (_road_surface_model_fl_abs3__out < _road_surface_model_fl_lut_mu_slip_rl__lut_addrs[_road_surface_model_fl_lut_mu_slip_rl__curAddr]) {
                _road_surface_model_fl_lut_mu_slip_rl__rightIndex = _road_surface_model_fl_lut_mu_slip_rl__curAddr;
            }
            else {
                _road_surface_model_fl_lut_mu_slip_rl__leftIndex = _road_surface_model_fl_lut_mu_slip_rl__curAddr;
            }
            _road_surface_model_fl_lut_mu_slip_rl__curAddr = (_road_surface_model_fl_lut_mu_slip_rl__leftIndex + _road_surface_model_fl_lut_mu_slip_rl__rightIndex) >> 1;
        }
        _road_surface_model_fl_lut_mu_slip_rl__fraction = (_road_surface_model_fl_abs3__out - _road_surface_model_fl_lut_mu_slip_rl__lut_addrs[_road_surface_model_fl_lut_mu_slip_rl__leftIndex])
                / (_road_surface_model_fl_lut_mu_slip_rl__lut_addrs[_road_surface_model_fl_lut_mu_slip_rl__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_rl__lut_addrs[_road_surface_model_fl_lut_mu_slip_rl__leftIndex]);
    }
    else {
        _road_surface_model_fl_lut_mu_slip_rl__fraction = 1.0;
        _road_surface_model_fl_lut_mu_slip_rl__leftIndex = 7;
    }
    _road_surface_model_fl_lut_mu_slip_rl__value = (_road_surface_model_fl_lut_mu_slip_rl__lut_table[_road_surface_model_fl_lut_mu_slip_rl__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_rl__lut_table[_road_surface_model_fl_lut_mu_slip_rl__leftIndex])
            * _road_surface_model_fl_lut_mu_slip_rl__fraction + _road_surface_model_fl_lut_mu_slip_rl__lut_table[_road_surface_model_fl_lut_mu_slip_rl__leftIndex];
    // Generated from the component: road_surface_model_fl.LUT_mu_slip_RR
    if(_road_surface_model_fl_abs4__out <= _road_surface_model_fl_lut_mu_slip_rr__lut_addrs[0]) {
        _road_surface_model_fl_lut_mu_slip_rr__fraction = 0.0;
        _road_surface_model_fl_lut_mu_slip_rr__leftIndex = 0;
    }
    else if(_road_surface_model_fl_abs4__out < _road_surface_model_fl_lut_mu_slip_rr__lut_addrs[8]) {
        _road_surface_model_fl_lut_mu_slip_rr__curAddr = 8 >> 1;
        _road_surface_model_fl_lut_mu_slip_rr__leftIndex = 0;
        _road_surface_model_fl_lut_mu_slip_rr__rightIndex = 8;
        while (1 < _road_surface_model_fl_lut_mu_slip_rr__rightIndex - _road_surface_model_fl_lut_mu_slip_rr__leftIndex) {
            if (_road_surface_model_fl_abs4__out < _road_surface_model_fl_lut_mu_slip_rr__lut_addrs[_road_surface_model_fl_lut_mu_slip_rr__curAddr]) {
                _road_surface_model_fl_lut_mu_slip_rr__rightIndex = _road_surface_model_fl_lut_mu_slip_rr__curAddr;
            }
            else {
                _road_surface_model_fl_lut_mu_slip_rr__leftIndex = _road_surface_model_fl_lut_mu_slip_rr__curAddr;
            }
            _road_surface_model_fl_lut_mu_slip_rr__curAddr = (_road_surface_model_fl_lut_mu_slip_rr__leftIndex + _road_surface_model_fl_lut_mu_slip_rr__rightIndex) >> 1;
        }
        _road_surface_model_fl_lut_mu_slip_rr__fraction = (_road_surface_model_fl_abs4__out - _road_surface_model_fl_lut_mu_slip_rr__lut_addrs[_road_surface_model_fl_lut_mu_slip_rr__leftIndex])
                / (_road_surface_model_fl_lut_mu_slip_rr__lut_addrs[_road_surface_model_fl_lut_mu_slip_rr__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_rr__lut_addrs[_road_surface_model_fl_lut_mu_slip_rr__leftIndex]);
    }
    else {
        _road_surface_model_fl_lut_mu_slip_rr__fraction = 1.0;
        _road_surface_model_fl_lut_mu_slip_rr__leftIndex = 7;
    }
    _road_surface_model_fl_lut_mu_slip_rr__value = (_road_surface_model_fl_lut_mu_slip_rr__lut_table[_road_surface_model_fl_lut_mu_slip_rr__leftIndex + 1] - _road_surface_model_fl_lut_mu_slip_rr__lut_table[_road_surface_model_fl_lut_mu_slip_rr__leftIndex])
            * _road_surface_model_fl_lut_mu_slip_rr__fraction + _road_surface_model_fl_lut_mu_slip_rr__lut_table[_road_surface_model_fl_lut_mu_slip_rr__leftIndex];
    // Generated from the component: road_surface_model_fl.Product1
    {
        _road_surface_model_fl_product1__out = 1;
        _road_surface_model_fl_product1__out *= ((real) _road_surface_model_fl_lut_mu_slip_fl__value);
        _road_surface_model_fl_product1__out *= ((real) _road_surface_model_fl_mu_scalefl__out);
    }
    // Generated from the component: road_surface_model_fl.Product3
    {
        _road_surface_model_fl_product3__out = 1;
        _road_surface_model_fl_product3__out *= ((real) _road_surface_model_fl_lut_mu_slip_fr__value);
        _road_surface_model_fl_product3__out *= ((real) _road_surface_model_fl_mu_scalefr__out);
    }
    // Generated from the component: road_surface_model_fl.Product5
    {
        _road_surface_model_fl_product5__out = 1;
        _road_surface_model_fl_product5__out *= ((real) _road_surface_model_fl_lut_mu_slip_rl__value);
        _road_surface_model_fl_product5__out *= ((real) _road_surface_model_fl_mu_scalerl__out);
    }
    // Generated from the component: road_surface_model_fl.Product7
    {
        _road_surface_model_fl_product7__out = 1;
        _road_surface_model_fl_product7__out *= ((real) _road_surface_model_fl_lut_mu_slip_rr__value);
        _road_surface_model_fl_product7__out *= ((real) _road_surface_model_fl_mu_scalerr__out);
    }
    // Generated from the component: road_surface_model_fl.Product2
    {
        _road_surface_model_fl_product2__out = 1;
        _road_surface_model_fl_product2__out *= ((real) _road_surface_model_fl_fz__out);
        _road_surface_model_fl_product2__out *= ((real) _road_surface_model_fl_product1__out);
    }
    // Generated from the component: road_surface_model_fl.mu_FL
    {
        HIL_OutAO(0x4025, _road_surface_model_fl_product1__out);
    }
    // Generated from the component: road_surface_model_fl.Product4
    {
        _road_surface_model_fl_product4__out = 1;
        _road_surface_model_fl_product4__out *= ((real) _road_surface_model_fl_fz1__out);
        _road_surface_model_fl_product4__out *= ((real) _road_surface_model_fl_product3__out);
    }
    // Generated from the component: road_surface_model_fl.mu_FR
    {
        HIL_OutAO(0x4026, _road_surface_model_fl_product3__out);
    }
    // Generated from the component: road_surface_model_fl.Product6
    {
        _road_surface_model_fl_product6__out = 1;
        _road_surface_model_fl_product6__out *= ((real) _road_surface_model_fl_fz2__out);
        _road_surface_model_fl_product6__out *= ((real) _road_surface_model_fl_product5__out);
    }
    // Generated from the component: road_surface_model_fl.mu_RL
    {
        HIL_OutAO(0x4027, _road_surface_model_fl_product5__out);
    }
    // Generated from the component: road_surface_model_fl.Product8
    {
        _road_surface_model_fl_product8__out = 1;
        _road_surface_model_fl_product8__out *= ((real) _road_surface_model_fl_fz3__out);
        _road_surface_model_fl_product8__out *= ((real) _road_surface_model_fl_product7__out);
    }
    // Generated from the component: road_surface_model_fl.mu_RR
    {
        HIL_OutAO(0x4028, _road_surface_model_fl_product7__out);
    }
    // Generated from the component: road_surface_model_fl.Fx
    {
        _road_surface_model_fl_fx__out = 1;
        _road_surface_model_fl_fx__out *= ((real) _road_surface_model_fl_product2__out);
        _road_surface_model_fl_fx__out *= ((real) _road_surface_model_fl_c_function2__slip_sign);
    }
    // Generated from the component: road_surface_model_fl.Fx1
    {
        _road_surface_model_fl_fx1__out = 1;
        _road_surface_model_fl_fx1__out *= ((real) _road_surface_model_fl_product4__out);
        _road_surface_model_fl_fx1__out *= ((real) _road_surface_model_fl_c_function3__slip_sign);
    }
    // Generated from the component: road_surface_model_fl.Fx2
    {
        _road_surface_model_fl_fx2__out = 1;
        _road_surface_model_fl_fx2__out *= ((real) _road_surface_model_fl_product6__out);
        _road_surface_model_fl_fx2__out *= ((real) _road_surface_model_fl_c_function4__slip_sign);
    }
    // Generated from the component: road_surface_model_fl.Fx3
    {
        _road_surface_model_fl_fx3__out = 1;
        _road_surface_model_fl_fx3__out *= ((real) _road_surface_model_fl_product8__out);
        _road_surface_model_fl_fx3__out *= ((real) _road_surface_model_fl_c_function5__slip_sign);
    }
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload
    {
        _road_surface_model_fl_gain_rw_tload__out = ((real) (_road_surface_model_fl_gain_rw_tload__p_gain * _road_surface_model_fl_fx__out));
    }
    // Generated from the component: road_surface_model_fl.fx_fl
    {
        HIL_OutAO(0x4024, _road_surface_model_fl_fx__out);
    }
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload1
    {
        _road_surface_model_fl_gain_rw_tload1__out = ((real) (_road_surface_model_fl_gain_rw_tload1__p_gain * _road_surface_model_fl_fx1__out));
    }
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload2
    {
        _road_surface_model_fl_gain_rw_tload2__out = ((real) (_road_surface_model_fl_gain_rw_tload2__p_gain * _road_surface_model_fl_fx2__out));
    }
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload3
    {
        _road_surface_model_fl_gain_rw_tload3__out = ((real) (_road_surface_model_fl_gain_rw_tload3__p_gain * _road_surface_model_fl_fx3__out));
    }
    // Generated from the component: FL.PMDC.Gain
    {
        _fl_pmdc_gain__out = ((real) (_fl_pmdc_gain__p_gain * _road_surface_model_fl_gain_rw_tload__out));
    }
    // Generated from the component: FL.T_load
    {
        HIL_OutAO(0x4007, _road_surface_model_fl_gain_rw_tload__out);
    }
    // Generated from the component: road_surface_model_fl.fl_Tload
    {
        HIL_OutAO(0x4022, _road_surface_model_fl_gain_rw_tload__out);
    }
    // Generated from the component: FR.PMDC.Gain
    {
        _fr_pmdc_gain__out = ((real) (_fr_pmdc_gain__p_gain * _road_surface_model_fl_gain_rw_tload1__out));
    }
    // Generated from the component: FR.T_load
    {
        HIL_OutAO(0x400f, _road_surface_model_fl_gain_rw_tload1__out);
    }
    // Generated from the component: road_surface_model_fl.fr_load
    {
        HIL_OutAO(0x4023, _road_surface_model_fl_gain_rw_tload1__out);
    }
    // Generated from the component: RL.PMDC.Gain1
    {
        _rl_pmdc_gain1__out = ((real) (_rl_pmdc_gain1__p_gain * _road_surface_model_fl_gain_rw_tload2__out));
    }
    // Generated from the component: RL.T_load
    {
        HIL_OutAO(0x4017, _road_surface_model_fl_gain_rw_tload2__out);
    }
    // Generated from the component: road_surface_model_fl.rl_load
    {
        HIL_OutAO(0x402a, _road_surface_model_fl_gain_rw_tload2__out);
    }
    // Generated from the component: RR.PMDC.Gain
    {
        _rr_pmdc_gain__out = ((real) (_rr_pmdc_gain__p_gain * _road_surface_model_fl_gain_rw_tload3__out));
    }
    // Generated from the component: RR.T_load
    {
        HIL_OutAO(0x401f, _road_surface_model_fl_gain_rw_tload3__out);
    }
    // Generated from the component: road_surface_model_fl.rr_load
    {
        HIL_OutAO(0x402b, _road_surface_model_fl_gain_rw_tload3__out);
    }
    // Generated from the component: FL.PMDC.Sum1
    {
        _fl_pmdc_sum1__out = 0;
        _fl_pmdc_sum1__out += ((real) _fl_pmdc_kt__out);
        _fl_pmdc_sum1__out -= ((real) _fl_pmdc_gain__out);
        _fl_pmdc_sum1__out -= ((real) _fl_pmdc_b__out);
    }
    // Generated from the component: FR.PMDC.Sum1
    {
        _fr_pmdc_sum1__out = 0;
        _fr_pmdc_sum1__out += ((real) _fr_pmdc_kt__out);
        _fr_pmdc_sum1__out -= ((real) _fr_pmdc_gain__out);
        _fr_pmdc_sum1__out -= ((real) _fr_pmdc_b__out);
    }
    // Generated from the component: RL.PMDC.Sum1
    {
        _rl_pmdc_sum1__out = 0;
        _rl_pmdc_sum1__out += ((real) _rl_pmdc_kt__out);
        _rl_pmdc_sum1__out -= ((real) _rl_pmdc_gain1__out);
        _rl_pmdc_sum1__out -= ((real) _rl_pmdc_b__out);
    }
    // Generated from the component: RR.PMDC.Sum1
    {
        _rr_pmdc_sum1__out = 0;
        _rr_pmdc_sum1__out += ((real) _rr_pmdc_kt__out);
        _rr_pmdc_sum1__out -= ((real) _rr_pmdc_gain__out);
        _rr_pmdc_sum1__out -= ((real) _rr_pmdc_b__out);
    }
    // Generated from the component: FL.PMDC.J-1
    {
        _fl_pmdc_j_1__out = ((real) (_fl_pmdc_j_1__p_gain * _fl_pmdc_sum1__out));
    }
    // Generated from the component: FR.PMDC.J-1
    {
        _fr_pmdc_j_1__out = ((real) (_fr_pmdc_j_1__p_gain * _fr_pmdc_sum1__out));
    }
    // Generated from the component: RL.PMDC.J-1
    {
        _rl_pmdc_j_1__out = ((real) (_rl_pmdc_j_1__p_gain * _rl_pmdc_sum1__out));
    }
    // Generated from the component: RR.PMDC.J-1
    {
        _rr_pmdc_j_1__out = ((real) (_rr_pmdc_j_1__p_gain * _rr_pmdc_sum1__out));
    }
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Battery1.SOC
    // Generated from the component: FL.En
    // Generated from the component: FL.PMDC.Iarm.Ia1
    // Generated from the component: FL.PMDC.IntegratorOmega
    {
        {{
                int tmp1;
                for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                    {
                        int i;
                        i = tmp1;
                        {
                            if((1)) {
                                _fl_pmdc_integratoromega__state += (_fl_pmdc_j_1__out * _fl_pmdc_integratoromega__p_execution_rate);
                            }
                            else {
                                if((0)) {}
                            }
                        }
                    }
                }
            }
        } if(((char) (_fl_pmdc_integratoromega__p_limit_output != 0))) {
            int tmp1;
            for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                if((_fl_pmdc_integratoromega__n_upper_limit[0] != INFINITY)) {
                    _fl_pmdc_integratoromega__state = ((real) ((_fl_pmdc_integratoromega__state) < (_fl_pmdc_integratoromega__n_upper_limit[0]) ? (_fl_pmdc_integratoromega__state) : (_fl_pmdc_integratoromega__n_upper_limit[0])));
                }
                if((_fl_pmdc_integratoromega__n_lower_limit[0] != (- INFINITY))) {
                    _fl_pmdc_integratoromega__state = ((real) ((_fl_pmdc_integratoromega__state) > (_fl_pmdc_integratoromega__n_lower_limit[0]) ? (_fl_pmdc_integratoromega__state) : (_fl_pmdc_integratoromega__n_lower_limit[0])));
                }
            }
        }
    }
    // Generated from the component: FL.PMDC.Va1.Va1
    // Generated from the component: FR.En
    // Generated from the component: FR.PMDC.Iarm.Ia1
    // Generated from the component: FR.PMDC.IntegratorOmega
    {
        {{
                int tmp1;
                for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                    {
                        int i;
                        i = tmp1;
                        {
                            if((1)) {
                                _fr_pmdc_integratoromega__state += (_fr_pmdc_j_1__out * _fr_pmdc_integratoromega__p_execution_rate);
                            }
                            else {
                                if((0)) {}
                            }
                        }
                    }
                }
            }
        } if(((char) (_fr_pmdc_integratoromega__p_limit_output != 0))) {
            int tmp1;
            for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                if((_fr_pmdc_integratoromega__n_upper_limit[0] != INFINITY)) {
                    _fr_pmdc_integratoromega__state = ((real) ((_fr_pmdc_integratoromega__state) < (_fr_pmdc_integratoromega__n_upper_limit[0]) ? (_fr_pmdc_integratoromega__state) : (_fr_pmdc_integratoromega__n_upper_limit[0])));
                }
                if((_fr_pmdc_integratoromega__n_lower_limit[0] != (- INFINITY))) {
                    _fr_pmdc_integratoromega__state = ((real) ((_fr_pmdc_integratoromega__state) > (_fr_pmdc_integratoromega__n_lower_limit[0]) ? (_fr_pmdc_integratoromega__state) : (_fr_pmdc_integratoromega__n_lower_limit[0])));
                }
            }
        }
    }
    // Generated from the component: FR.PMDC.Va1.Va1
    // Generated from the component: RL.En
    // Generated from the component: RL.PMDC.Iarm.Ia1
    // Generated from the component: RL.PMDC.IntegratorOmega
    {
        {{
                int tmp1;
                for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                    {
                        int i;
                        i = tmp1;
                        {
                            if((1)) {
                                _rl_pmdc_integratoromega__state += (_rl_pmdc_j_1__out * _rl_pmdc_integratoromega__p_execution_rate);
                            }
                            else {
                                if((0)) {}
                            }
                        }
                    }
                }
            }
        } if(((char) (_rl_pmdc_integratoromega__p_limit_output != 0))) {
            int tmp1;
            for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                if((_rl_pmdc_integratoromega__n_upper_limit[0] != INFINITY)) {
                    _rl_pmdc_integratoromega__state = ((real) ((_rl_pmdc_integratoromega__state) < (_rl_pmdc_integratoromega__n_upper_limit[0]) ? (_rl_pmdc_integratoromega__state) : (_rl_pmdc_integratoromega__n_upper_limit[0])));
                }
                if((_rl_pmdc_integratoromega__n_lower_limit[0] != (- INFINITY))) {
                    _rl_pmdc_integratoromega__state = ((real) ((_rl_pmdc_integratoromega__state) > (_rl_pmdc_integratoromega__n_lower_limit[0]) ? (_rl_pmdc_integratoromega__state) : (_rl_pmdc_integratoromega__n_lower_limit[0])));
                }
            }
        }
    }
    // Generated from the component: RL.PMDC.Va1.Va1
    // Generated from the component: RR.En
    // Generated from the component: RR.PMDC.Iarm.Ia1
    // Generated from the component: RR.PMDC.IntegratorOmega
    {
        {{
                int tmp1;
                for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                    {
                        int i;
                        i = tmp1;
                        {
                            if((1)) {
                                _rr_pmdc_integratoromega__state += (_rr_pmdc_j_1__out * _rr_pmdc_integratoromega__p_execution_rate);
                            }
                            else {
                                if((0)) {}
                            }
                        }
                    }
                }
            }
        } if(((char) (_rr_pmdc_integratoromega__p_limit_output != 0))) {
            int tmp1;
            for(tmp1 = 0; tmp1 < 1; tmp1 += 1) {
                if((_rr_pmdc_integratoromega__n_upper_limit[0] != INFINITY)) {
                    _rr_pmdc_integratoromega__state = ((real) ((_rr_pmdc_integratoromega__state) < (_rr_pmdc_integratoromega__n_upper_limit[0]) ? (_rr_pmdc_integratoromega__state) : (_rr_pmdc_integratoromega__n_upper_limit[0])));
                }
                if((_rr_pmdc_integratoromega__n_lower_limit[0] != (- INFINITY))) {
                    _rr_pmdc_integratoromega__state = ((real) ((_rr_pmdc_integratoromega__state) > (_rr_pmdc_integratoromega__n_lower_limit[0]) ? (_rr_pmdc_integratoromega__state) : (_rr_pmdc_integratoromega__n_lower_limit[0])));
                }
            }
        }
    }
    // Generated from the component: RR.PMDC.Va1.Va1
    // Generated from the component: VCbat.Va1
    // Generated from the component: road_surface_model_fl.fz
    // Generated from the component: road_surface_model_fl.fz1
    // Generated from the component: road_surface_model_fl.fz2
    // Generated from the component: road_surface_model_fl.fz3
    // Generated from the component: Battery1.GainSOC
    // Generated from the component: FL.Gain1
    // Generated from the component: FL.InA_FR
    // Generated from the component: FL.PMDC.Kt
    // Generated from the component: FL.PMDC.i_fr
    // Generated from the component: FL.PMDC.Integrator Rollover1
    // Generated from the component: FL.PMDC.Ke
    // Generated from the component: FL.PMDC.b
    // Generated from the component: FL.PMDC.mech_speed_fr
    // Generated from the component: FL.PMDC.Va1a2
    // Generated from the component: FR.Gain1
    // Generated from the component: FR.InA_FR
    // Generated from the component: FR.PMDC.Kt
    // Generated from the component: FR.PMDC.i_fr
    // Generated from the component: FR.PMDC.Integrator Rollover1
    // Generated from the component: FR.PMDC.Ke
    // Generated from the component: FR.PMDC.b
    // Generated from the component: FR.PMDC.mech_speed_fr
    // Generated from the component: FR.PMDC.Va1a2
    // Generated from the component: RL.Gain1
    // Generated from the component: RL.InA_FR
    // Generated from the component: RL.PMDC.Kt
    // Generated from the component: RL.PMDC.i_fr
    // Generated from the component: RL.PMDC.Integrator Rollover1
    // Generated from the component: RL.PMDC.Ke
    // Generated from the component: RL.PMDC.b
    // Generated from the component: RL.PMDC.mech_speed_fr
    // Generated from the component: RL.PMDC.Va1a2
    // Generated from the component: RR.Gain1
    // Generated from the component: RR.InA_FR
    // Generated from the component: RR.PMDC.Kt
    // Generated from the component: RR.PMDC.i_fr
    // Generated from the component: RR.PMDC.Integrator Rollover1
    // Generated from the component: RR.PMDC.Ke
    // Generated from the component: RR.PMDC.b
    // Generated from the component: RR.PMDC.Va1a2
    // Generated from the component: Vbat
    // Generated from the component: omega_TEST
    // Generated from the component: road_surface_model_fl.cicr_wheel
    // Generated from the component: road_surface_model_fl.cicr_wheel1
    // Generated from the component: road_surface_model_fl.cicr_wheel2
    // Generated from the component: road_surface_model_fl.cicr_wheel3
    // Generated from the component: road_surface_model_fl.muscale_test_fl
    // Generated from the component: road_surface_model_fl.v_vehicle_test
    // Generated from the component: FL.PMDC.el_torque_fr
    // Generated from the component: FL.PMDC.mech_angle_fr
    // Generated from the component: FL.PMDC.E_bemf
    // Generated from the component: FL.PMDC.Ebemf.Vs1
    // Generated from the component: FR.PMDC.el_torque_fr
    // Generated from the component: FR.PMDC.mech_angle_fr
    // Generated from the component: FR.PMDC.E_bemf
    // Generated from the component: FR.PMDC.Ebemf.Vs1
    // Generated from the component: RL.PMDC.el_torque_fr
    // Generated from the component: RL.PMDC.mech_angle_fr
    // Generated from the component: RL.PMDC.E_bemf
    // Generated from the component: RL.PMDC.Ebemf.Vs1
    // Generated from the component: RR.PMDC.el_torque_fr
    // Generated from the component: RR.PMDC.mech_angle_fr
    // Generated from the component: RR.PMDC.E_bemf
    // Generated from the component: RR.PMDC.Ebemf.Vs1
    // Generated from the component: RR.PMDC.mech_speed_fr
    // Generated from the component: road_surface_model_fl.C function2
    {
    }
    // Generated from the component: road_surface_model_fl.v_wheel_fl
    // Generated from the component: road_surface_model_fl.C function3
    {
    }
    // Generated from the component: road_surface_model_fl.v_wheel_FR
    // Generated from the component: road_surface_model_fl.C function4
    {
    }
    // Generated from the component: road_surface_model_fl.v_wheel_RL
    // Generated from the component: road_surface_model_fl.C function5
    {
    }
    // Generated from the component: road_surface_model_fl.v_wheel_RR
    // Generated from the component: road_surface_model_fl.Abs1
    // Generated from the component: road_surface_model_fl.slip_fl
    // Generated from the component: road_surface_model_fl.slip_signFL
    // Generated from the component: road_surface_model_fl.Abs2
    // Generated from the component: road_surface_model_fl.slip_fr
    // Generated from the component: road_surface_model_fl.Abs3
    // Generated from the component: road_surface_model_fl.slip_rl
    // Generated from the component: road_surface_model_fl.Abs4
    // Generated from the component: road_surface_model_fl.slip_rr
    // Generated from the component: road_surface_model_fl.Product1
    // Generated from the component: road_surface_model_fl.Product3
    // Generated from the component: road_surface_model_fl.Product5
    // Generated from the component: road_surface_model_fl.Product7
    // Generated from the component: road_surface_model_fl.Product2
    // Generated from the component: road_surface_model_fl.mu_FL
    // Generated from the component: road_surface_model_fl.Product4
    // Generated from the component: road_surface_model_fl.mu_FR
    // Generated from the component: road_surface_model_fl.Product6
    // Generated from the component: road_surface_model_fl.mu_RL
    // Generated from the component: road_surface_model_fl.Product8
    // Generated from the component: road_surface_model_fl.mu_RR
    // Generated from the component: road_surface_model_fl.Fx
    // Generated from the component: road_surface_model_fl.Fx1
    // Generated from the component: road_surface_model_fl.Fx2
    // Generated from the component: road_surface_model_fl.Fx3
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload
    // Generated from the component: road_surface_model_fl.fx_fl
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload1
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload2
    // Generated from the component: road_surface_model_fl.Gain_Rw_Tload3
    // Generated from the component: FL.PMDC.Gain
    // Generated from the component: FL.T_load
    // Generated from the component: road_surface_model_fl.fl_Tload
    // Generated from the component: FR.PMDC.Gain
    // Generated from the component: FR.T_load
    // Generated from the component: road_surface_model_fl.fr_load
    // Generated from the component: RL.PMDC.Gain1
    // Generated from the component: RL.T_load
    // Generated from the component: road_surface_model_fl.rl_load
    // Generated from the component: RR.PMDC.Gain
    // Generated from the component: RR.T_load
    // Generated from the component: road_surface_model_fl.rr_load
    // Generated from the component: FL.PMDC.Sum1
    // Generated from the component: FR.PMDC.Sum1
    // Generated from the component: RL.PMDC.Sum1
    // Generated from the component: RR.PMDC.Sum1
    // Generated from the component: FL.PMDC.J-1
    // Generated from the component: FR.PMDC.J-1
    // Generated from the component: RL.PMDC.J-1
    // Generated from the component: RR.PMDC.J-1
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------