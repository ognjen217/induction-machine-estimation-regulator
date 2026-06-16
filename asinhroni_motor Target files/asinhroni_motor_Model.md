Model asinhroni_motor


REM *****************************************:


REM * Common entries:


REM *****************************************:


REM Setting the simulation time step...
rtds_write 0x00000000 0x00000046


REM External SFP Link
rtds_write 0x00000030 0x00000000


REM Fast SFP Send


REM Converter solvers setup


REM Reset analog and digital outputs on simulation stop
rtds_write 0x00C00700 0x00000001
rtds_write 0x00F00000 0x00000001


REM Module block enable
rtds_write 0x00000003 0x00010001
rtds_file_write 0x00820000 three_phase_squirrel_cage_induction_machine_linear_imem.txt
rtds_write 0x00810000 0x00000003
rtds_write 0x00810001 0x00000005
rtds_write 0x00810400 0x40400000
rtds_write 0x00810401 0x00000000
rtds_write 0x00810402 0x3F7FFB53
rtds_write 0x00810403 0x2AB98000
rtds_write 0x00810404 0x388DB551
rtds_write 0x00810405 0x9E950000
rtds_write 0x00810406 0x3871FBF2
rtds_write 0x00810407 0x2A594000
rtds_write 0x00810408 0x3F7FFBEB
rtds_write 0x00810409 0x55E2C000
rtds_write 0x0081040A 0x34863683
rtds_write 0x0081040B 0x47934000
rtds_write 0x0081040C 0xAD149786
rtds_write 0x0081040D 0x9F1BC000
rtds_write 0x0081040E 0x2CFDBD21
rtds_write 0x0081040F 0x1F26C000
rtds_write 0x00810410 0xB48636AB
rtds_write 0x00810411 0x2B6FC000
rtds_write 0x00810412 0x41AE00D0
rtds_write 0x00810413 0xC62DC000
rtds_write 0x00810414 0xC1A4D1F9
rtds_write 0x00810415 0x4A580000
rtds_write 0x00810416 0x41B1E278
rtds_write 0x00810417 0x64168000
rtds_write 0x00810418 0x3FC00000
rtds_write 0x00810419 0x00000000
rtds_write 0x0081041A 0x3F000000
rtds_write 0x0081041B 0x00000000
rtds_write 0x00800001 2.5e-07
rtds_write 0x00800011 3.3333333333333335e-05
rtds_write 0x00800012 0.5
rtds_write 0x00800005 0x00000000
rtds_write 0x00800020 0x00000000
rtds_write 0x0080001E 0.0
rtds_write 0x0080001F 1.0
rtds_write 0x00800013 0.006135923151542565
rtds_write 0x00800014 1024.0
rtds_write 0x00800015 0x00000400
rtds_write 0x00800016 0.0009765625
rtds_write 0x00800021 0x00000010
rtds_write 0x00800028 0x00000000
rtds_write 0x00800023 0x00000000
rtds_write 0x00800022 0x00000001
rtds_write 0x0080002B 1.0
rtds_write 0x0080002C 0.007853981633974482
rtds_write 0x0080002D 0x00000000
rtds_write 0x0080002E 0x00000000
rtds_write 0x0080003C 0x00000001
rtds_write 0x0080003D 0x00000000
rtds_write 0x00800026 0.0
rtds_write 0x00800027 1.0
rtds_write 0x00800040 6.283185307179586
rtds_write 0x00800041 0.0
rtds_write 0x00800044 6.283185307179586
rtds_write 0x00800045 0.0


REM LUT solver inputs...
rtds_write 0x01000000 0x00000000
rtds_write 0x01000001 0x00000000


REM HSSL configuration files...
rtds_file_write 0x01C40000 hssl_tx_config.txt
rtds_file_write 0x01C80000 hssl_rx_config.txt


REM Parallel DTV configuration...


REM *****************************************:


REM * SPC0 entries:


REM *****************************************:


REM SPC0 Topology Selector (TS) initialization...
rtds_file_write 0x08180000 SPC0_red_table.txt
rtds_write 0x08100020 0x00000004
rtds_write 0x08100021 0x00000003
rtds_write 0x08100023 0x00000001
rtds_write 0x08100024 0x00000000
rtds_write 0x08100025 0x00000000
rtds_write 0x08100026 0x00000000
rtds_write 0x08100027 0x00000000
rtds_write 0x0810002E 0x00000000
rtds_write 0x0810002F 0x00000000
rtds_write 0x08100030 0x00000000
rtds_write 0x08100031 0x00000000
rtds_write 0x08100032 0x00000001
rtds_write 0x08100033 0x00000001
rtds_write 0x08100034 0x00000000
rtds_write 0x08100035 0x00000000
rtds_write 0x08100036 0x00000000
rtds_write 0x08100037 0x00000000
rtds_write 0x08100038 0x00000000
rtds_write 0x08100039 0x00000000
rtds_file_write 0x08140000 igbt_leg_imem.txt
rtds_file_write 0x08142000 igbt_leg_lut.txt
rtds_write 0x08100040 0x00000004
rtds_write 0x08100041 0x00000003
rtds_write 0x08100043 0x00000001
rtds_write 0x08100044 0x00000000
rtds_write 0x08100045 0x00000000
rtds_write 0x08100046 0x00000000
rtds_write 0x08100047 0x00000000
rtds_write 0x0810004E 0x00000000
rtds_write 0x0810004F 0x00000000
rtds_write 0x08100050 0x00000000
rtds_write 0x08100051 0x00000000
rtds_write 0x08100052 0x00000001
rtds_write 0x08100053 0x00000001
rtds_write 0x08100054 0x00000000
rtds_write 0x08100055 0x00000000
rtds_write 0x08100056 0x00000000
rtds_write 0x08100057 0x00000000
rtds_write 0x08100058 0x00000000
rtds_write 0x08100059 0x00000000
rtds_file_write 0x08148000 igbt_leg_imem.txt
rtds_file_write 0x0814A000 igbt_leg_lut.txt
rtds_write 0x08100060 0x00000004
rtds_write 0x08100061 0x00000003
rtds_write 0x08100063 0x00000001
rtds_write 0x08100064 0x00000000
rtds_write 0x08100065 0x00000000
rtds_write 0x08100066 0x00000000
rtds_write 0x08100067 0x00000000
rtds_write 0x0810006E 0x00000000
rtds_write 0x0810006F 0x00000000
rtds_write 0x08100070 0x00000000
rtds_write 0x08100071 0x00000000
rtds_write 0x08100072 0x00000001
rtds_write 0x08100073 0x00000001
rtds_write 0x08100074 0x00000000
rtds_write 0x08100075 0x00000000
rtds_write 0x08100076 0x00000000
rtds_write 0x08100077 0x00000000
rtds_write 0x08100078 0x00000000
rtds_write 0x08100079 0x00000000
rtds_file_write 0x08150000 igbt_leg_imem.txt
rtds_file_write 0x08152000 igbt_leg_lut.txt


REM SPC0 Variable Delay initialization...
rtds_write 0x08100001 0x0


REM SPC0 Output voltage compare mode...
rtds_write 0x08100005 0x00000000
rtds_write 0x08100006 0x00000014


REM SPC0 Matrix multiplier initialization...
rtds_file_write 0x08000000 SPC0_Com_Word.txt
rtds_file_write 0x08020000 SPC0_Com_LUT.txt
rtds_file_write 0x08080000 SPC0_MAC0.txt
rtds_file_write 0x08082000 SPC0_MAC1.txt
rtds_file_write 0x08084000 SPC0_MAC2.txt
rtds_file_write 0x08086000 SPC0_MAC3.txt
rtds_write 0x08100004 0x00000000


REM SPC0 Contactors initialization...


REM SPC0 GDS compensation settings...
rtds_write 0x080C0000 0x00000001
rtds_write 0x080C0001 0x00000000
rtds_write 0x080C0004 0x3C6A0EA0
rtds_write 0x080C0005 0xEA0F0000
rtds_write 0x08100000 0x00000046
rtds_write 0x08100007 0x00000000


REM SPC0 FSM digital input pin assignments...
rtds_write 0x08100028 0x00000000
rtds_write 0x08100029 0x00000000
rtds_write 0x0810002A 0x00000000
rtds_write 0x0810002B 0x00000000
rtds_write 0x0810002C 0x00000020
rtds_write 0x0810002D 0x00000021
rtds_write 0x08100022 0x00000000
rtds_write 0x08100048 0x00000000
rtds_write 0x08100049 0x00000000
rtds_write 0x0810004A 0x00000000
rtds_write 0x0810004B 0x00000000
rtds_write 0x0810004C 0x00000022
rtds_write 0x0810004D 0x00000023
rtds_write 0x08100042 0x00000000
rtds_write 0x08100068 0x00000000
rtds_write 0x08100069 0x00000000
rtds_write 0x0810006A 0x00000000
rtds_write 0x0810006B 0x00000000
rtds_write 0x0810006C 0x00000024
rtds_write 0x0810006D 0x00000025
rtds_write 0x08100062 0x00000000


REM SPC0 Comparators initialization...


REM SPC0 DTSM initialization...


REM SPC0 Time Varying Elements initialization...


REM *****************************************:


REM * SPC1 entries:


REM *****************************************:


REM SPC1 Topology Selector (TS) initialization...
rtds_file_write 0x08580000 SPC1_red_table.txt
rtds_write 0x08500020 0x00000004
rtds_write 0x08500021 0x00000000
rtds_write 0x08500023 0x00000000
rtds_write 0x08500024 0x00000000
rtds_write 0x08500025 0x00000000
rtds_write 0x08500026 0x00000000
rtds_write 0x08500027 0x00000000
rtds_write 0x0850002E 0x00000000
rtds_write 0x0850002F 0x00000000
rtds_write 0x08500030 0x00000000
rtds_write 0x08500031 0x00000000
rtds_write 0x08500032 0x00000000
rtds_write 0x08500033 0x00000000
rtds_write 0x08500034 0x00000000
rtds_write 0x08500035 0x00000000
rtds_write 0x08500036 0x00000000
rtds_write 0x08500037 0x00000000
rtds_write 0x08500038 0x00000000
rtds_write 0x08500039 0x00000000
rtds_file_write 0x08540000 diode_leg_imem.txt
rtds_file_write 0x08542000 diode_leg_lut.txt
rtds_write 0x08500040 0x00000004
rtds_write 0x08500041 0x00000000
rtds_write 0x08500043 0x00000000
rtds_write 0x08500044 0x00000000
rtds_write 0x08500045 0x00000000
rtds_write 0x08500046 0x00000000
rtds_write 0x08500047 0x00000000
rtds_write 0x0850004E 0x00000000
rtds_write 0x0850004F 0x00000000
rtds_write 0x08500050 0x00000000
rtds_write 0x08500051 0x00000000
rtds_write 0x08500052 0x00000000
rtds_write 0x08500053 0x00000000
rtds_write 0x08500054 0x00000000
rtds_write 0x08500055 0x00000000
rtds_write 0x08500056 0x00000000
rtds_write 0x08500057 0x00000000
rtds_write 0x08500058 0x00000000
rtds_write 0x08500059 0x00000000
rtds_file_write 0x08548000 diode_leg_imem.txt
rtds_file_write 0x0854A000 diode_leg_lut.txt
rtds_write 0x08500060 0x00000004
rtds_write 0x08500061 0x00000000
rtds_write 0x08500063 0x00000000
rtds_write 0x08500064 0x00000000
rtds_write 0x08500065 0x00000000
rtds_write 0x08500066 0x00000000
rtds_write 0x08500067 0x00000000
rtds_write 0x0850006E 0x00000000
rtds_write 0x0850006F 0x00000000
rtds_write 0x08500070 0x00000000
rtds_write 0x08500071 0x00000000
rtds_write 0x08500072 0x00000000
rtds_write 0x08500073 0x00000000
rtds_write 0x08500074 0x00000000
rtds_write 0x08500075 0x00000000
rtds_write 0x08500076 0x00000000
rtds_write 0x08500077 0x00000000
rtds_write 0x08500078 0x00000000
rtds_write 0x08500079 0x00000000
rtds_file_write 0x08550000 diode_leg_imem.txt
rtds_file_write 0x08552000 diode_leg_lut.txt


REM SPC1 Variable Delay initialization...
rtds_write 0x08500001 0x0


REM SPC1 Output voltage compare mode...
rtds_write 0x08500005 0x00000000
rtds_write 0x08500006 0x00000014


REM SPC1 Matrix multiplier initialization...
rtds_file_write 0x08400000 SPC1_Com_Word.txt
rtds_file_write 0x08420000 SPC1_Com_LUT.txt
rtds_file_write 0x08480000 SPC1_MAC0.txt
rtds_file_write 0x08482000 SPC1_MAC1.txt
rtds_file_write 0x08484000 SPC1_MAC2.txt
rtds_file_write 0x08486000 SPC1_MAC3.txt
rtds_write 0x08500004 0x00000000


REM SPC1 Contactors initialization...


REM SPC1 GDS compensation settings...
rtds_write 0x084C0000 0x00000000
rtds_write 0x084C0001 0x00000000
rtds_write 0x084C0004 0x00000000
rtds_write 0x084C0005 0x00000000
rtds_write 0x08500000 0x00000000
rtds_write 0x08500007 0x00000000


REM SPC1 FSM digital input pin assignments...
rtds_write 0x08500028 0x00000000
rtds_write 0x08500029 0x00000000
rtds_write 0x0850002A 0x00000000
rtds_write 0x0850002B 0x00000000
rtds_write 0x0850002C 0x00000000
rtds_write 0x0850002D 0x00000000
rtds_write 0x08500022 0x00000000
rtds_write 0x08500048 0x00000000
rtds_write 0x08500049 0x00000000
rtds_write 0x0850004A 0x00000000
rtds_write 0x0850004B 0x00000000
rtds_write 0x0850004C 0x00000000
rtds_write 0x0850004D 0x00000000
rtds_write 0x08500042 0x00000000
rtds_write 0x08500068 0x00000000
rtds_write 0x08500069 0x00000000
rtds_write 0x0850006A 0x00000000
rtds_write 0x0850006B 0x00000000
rtds_write 0x0850006C 0x00000000
rtds_write 0x0850006D 0x00000000
rtds_write 0x08500062 0x00000000


REM SPC1 Comparators initialization...


REM SPC1 DTSM initialization...


REM SPC1 Time Varying Elements initialization...


REM *****************************************:


REM * SPC2 entries:


REM *****************************************:


REM SPC2 Topology Selector (TS) initialization...
rtds_file_write 0x08980000 SPC2_red_table.txt
rtds_write 0x08900020 0x00000000
rtds_write 0x08900021 0x00000000
rtds_write 0x08900023 0x00000000
rtds_write 0x08900024 0x00000000
rtds_write 0x08900025 0x00000000
rtds_write 0x08900026 0x00000000
rtds_write 0x08900027 0x00000000
rtds_write 0x0890002E 0x00000000
rtds_write 0x0890002F 0x00000000
rtds_write 0x08900030 0x00000000
rtds_write 0x08900031 0x00000000
rtds_write 0x08900032 0x00000000
rtds_write 0x08900033 0x00000000
rtds_write 0x08900034 0x00000000
rtds_write 0x08900035 0x00000000
rtds_write 0x08900036 0x00000000
rtds_write 0x08900037 0x00000000
rtds_write 0x08900038 0x00000000
rtds_write 0x08900039 0x00000000
rtds_file_write 0x08940000 trivial_imem.txt
rtds_file_write 0x08942000 trivial_lut.txt
rtds_write 0x08900040 0x00000000
rtds_write 0x08900041 0x00000000
rtds_write 0x08900043 0x00000000
rtds_write 0x08900044 0x00000000
rtds_write 0x08900045 0x00000000
rtds_write 0x08900046 0x00000000
rtds_write 0x08900047 0x00000000
rtds_write 0x0890004E 0x00000000
rtds_write 0x0890004F 0x00000000
rtds_write 0x08900050 0x00000000
rtds_write 0x08900051 0x00000000
rtds_write 0x08900052 0x00000000
rtds_write 0x08900053 0x00000000
rtds_write 0x08900054 0x00000000
rtds_write 0x08900055 0x00000000
rtds_write 0x08900056 0x00000000
rtds_write 0x08900057 0x00000000
rtds_write 0x08900058 0x00000000
rtds_write 0x08900059 0x00000000
rtds_file_write 0x08948000 trivial_imem.txt
rtds_file_write 0x0894A000 trivial_lut.txt
rtds_write 0x08900060 0x00000000
rtds_write 0x08900061 0x00000000
rtds_write 0x08900063 0x00000000
rtds_write 0x08900064 0x00000000
rtds_write 0x08900065 0x00000000
rtds_write 0x08900066 0x00000000
rtds_write 0x08900067 0x00000000
rtds_write 0x0890006E 0x00000000
rtds_write 0x0890006F 0x00000000
rtds_write 0x08900070 0x00000000
rtds_write 0x08900071 0x00000000
rtds_write 0x08900072 0x00000000
rtds_write 0x08900073 0x00000000
rtds_write 0x08900074 0x00000000
rtds_write 0x08900075 0x00000000
rtds_write 0x08900076 0x00000000
rtds_write 0x08900077 0x00000000
rtds_write 0x08900078 0x00000000
rtds_write 0x08900079 0x00000000
rtds_file_write 0x08950000 trivial_imem.txt
rtds_file_write 0x08952000 trivial_lut.txt


REM SPC2 Variable Delay initialization...
rtds_write 0x08900001 0x0


REM SPC2 Output voltage compare mode...
rtds_write 0x08900005 0x00000000
rtds_write 0x08900006 0x00000000


REM SPC2 Matrix multiplier initialization...
rtds_file_write 0x08800000 SPC2_Com_Word.txt
rtds_file_write 0x08820000 SPC2_Com_LUT.txt
rtds_file_write 0x08880000 SPC2_MAC0.txt
rtds_file_write 0x08882000 SPC2_MAC1.txt
rtds_file_write 0x08884000 SPC2_MAC2.txt
rtds_file_write 0x08886000 SPC2_MAC3.txt
rtds_write 0x08900004 0x00000000


REM SPC2 Contactors initialization...


REM SPC2 GDS compensation settings...
rtds_write 0x088C0000 0x00000000
rtds_write 0x088C0001 0x00000000
rtds_write 0x088C0004 0x00000000
rtds_write 0x088C0005 0x00000000
rtds_write 0x08900000 0x00000000
rtds_write 0x08900007 0x00000000


REM SPC2 FSM digital input pin assignments...


REM SPC2 Comparators initialization...


REM SPC2 DTSM initialization...


REM SPC2 Time Varying Elements initialization...
*****************************************:


REM SP data configuration...
*****************************************:


REM Setting the capture sample step...


REM post SP Init calculation...
rtds_write  
rtds_write 0x00000041 0x000011C1
rtds_write 0x00000005 0x00000002
rtds_write 0x00000043 0x00002710
rtds_write 0x00000042 0x000001F3
rtds_write 0x0000000A 0x00000001
glbl_write 0xFD1A0104 0x0000380E


REM disable active eth interfaces previously used by host applications, if required for bm apps
sys_command_custom "ifconfig eth1 up"
glbl_file_write 0x38000000 user_sp_cpu_0_imem.bin


REM configure system synchronization
sys_command_custom "echo -e '[global]\n{ \n} \n' > ptp_settings.txt"
hil_app_var_write 0 0x0
hil_app_var_write 1 -1
hil_app_var_write 2 -1


REM Communication peripherals reset and load sequence
# Disable CAN interfaces from OS
# CAN bare metal app enables the clocks directly
# CANopen app enables them through ip link commands
sys_command 0x2
glbl_write 0xFD1A0104 0x280a


REM Restart counter for collected Linux OS communication apps
app_file_write 0x0 app_init


REM Clear the /mnt/ext_files. directory
file_write_custom clean_ext_files None
rtds_write 0x00000027 0x00000046
rtds_write 0x00000040 0x00FFFFFF