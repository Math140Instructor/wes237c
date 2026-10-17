# Project 2

## Baseline
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 12:50:31 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.73 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.49 seconds. CPU system time: 0.74 seconds. Elapsed time: 1.41 seconds; current allocated memory: 660.500 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.94 seconds. CPU system time: 0.98 seconds. Elapsed time: 9.48 seconds; current allocated memory: 670.180 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.180 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.219 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.219 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.055 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.508 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.22 seconds; current allocated memory: 692.473 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.473 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 692.473 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.473 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 692.508 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.27 seconds; current allocated memory: 693.531 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.41 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.81 seconds; current allocated memory: 696.164 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.45 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.79 seconds; current allocated memory: 698.582 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 55.465 MB.
INFO: [HLS 200-112] Total CPU user time: 13.59 seconds. Total CPU system time: 3.4 seconds. Total elapsed time: 31.65 seconds; peak allocated memory: 698.609 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 34s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt

## 
