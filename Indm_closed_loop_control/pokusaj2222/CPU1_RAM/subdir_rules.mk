################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"F:/ccs00004/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 -Ooff --include_path="C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222" --include_path="C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222/device" --include_path="F:/ccs00004/C2000Ware_26_00_00_00/driverlib/f2837xd/driverlib/" --include_path="F:/ccs00004/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/include" --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222/CPU1_RAM/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-1331703692: ../c2000.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"F:/ccs00004/ccs/utils/sysconfig_1.26.0/sysconfig_cli.bat" -s "F:/ccs00004/C2000Ware_26_00_00_00/.metadata/sdk.json" -d "F2837xD" --script "C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222/c2000.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-1331703692 ../c2000.syscfg
syscfg/board.h: build-1331703692
syscfg/board.cmd.genlibs: build-1331703692
syscfg/board.opt: build-1331703692
syscfg/board.json: build-1331703692
syscfg/pinmux.csv: build-1331703692
syscfg/c2000ware_libraries.cmd.genlibs: build-1331703692
syscfg/c2000ware_libraries.opt: build-1331703692
syscfg/c2000ware_libraries.c: build-1331703692
syscfg/c2000ware_libraries.h: build-1331703692
syscfg/clocktree.h: build-1331703692
syscfg: build-1331703692

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"F:/ccs00004/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 -Ooff --include_path="C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222" --include_path="C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222/device" --include_path="F:/ccs00004/C2000Ware_26_00_00_00/driverlib/f2837xd/driverlib/" --include_path="F:/ccs00004/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/include" --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="C:/Users/Ognjen/Desktop/typhh/induction-machine-estimation-regulator/Indm_closed_loop_control/pokusaj2222/CPU1_RAM/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


