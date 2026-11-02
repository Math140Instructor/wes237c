LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.001853297655050 0.001314980303271
----------------------------------------------
PASS: The output matches the golden output!
INFO [HLS SIM]: The maximum depth reached by any hls::stream() instance in the design is 1024
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 20:54:20 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files dft.cpp 
INFO: [HLS 200-10] Adding design file 'dft.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb dft_test.cpp out.gold.dat 
INFO: [HLS 200-10] Adding test bench file 'dft_test.cpp' to the project
INFO: [HLS 200-10] Adding test bench file 'out.gold.dat' to the project
INFO: [HLS 200-1510] Running: set_top dft 
Running: set_top dft
INFO: [HLS 200-1510] Running: set_part xc7z020clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.76 seconds; current allocated memory: 659.234 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 4.91 seconds. CPU system time: 1.06 seconds. Elapsed time: 6.3 seconds; current allocated memory: 660.633 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 133 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 98 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 75 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 76 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 76 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 74 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 82 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 102 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-188] Unrolling loop 'VITIS_LOOP_27_3' (dft.cpp:27:22) in function 'dft' partially with a factor of 2 (dft.cpp:5:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_17_1> at dft.cpp:17:20 
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_27_3> at dft.cpp:27:22 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.26 seconds. CPU system time: 1.02 seconds. Elapsed time: 9.96 seconds; current allocated memory: 670.227 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 670.227 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.441 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.520 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.980 MB.
INFO: [HLS 200-2061] Successfully converted nested loops 'VITIS_LOOP_23_2'(dft.cpp:23:20) and 'VITIS_LOOP_27_3'(dft.cpp:27:22) in function 'dft' into perfectly nested loops.
INFO: [XFORM 203-541] Flattening a loop nest 'VITIS_LOOP_23_2' (dft.cpp:23:20) in function 'dft'.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 701.551 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_17_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_17_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'VITIS_LOOP_17_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.17 seconds; current allocated memory: 702.484 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 702.484 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'.
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 7, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 9, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' (loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'): Unable to enforce a carried dependence constraint (II = 10, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln24', dft.cpp:24) of variable 'real_sum', dft.cpp:35 on local variable 'real_sum', dft.cpp:24 and 'load' operation 32 bit ('real_sum_load', dft.cpp:23) on local variable 'real_sum', dft.cpp:24.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 11, Depth = 28, loop 'VITIS_LOOP_23_2_VITIS_LOOP_27_3'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.16 seconds. CPU system time: 0 seconds. Elapsed time: 0.28 seconds; current allocated memory: 702.555 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 702.555 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 702.555 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 702.555 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_17_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_17_1' pipeline 'VITIS_LOOP_17_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_17_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 702.555 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3' pipeline 'VITIS_LOOP_23_2_VITIS_LOOP_27_3' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'faddfsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_10s_10s_10_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_cos_coefficients_table_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_sin_coefficients_table_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.33 seconds; current allocated memory: 703.570 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_in' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_in' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [RTMG 210-278] Implementing memory 'dft_real_sample_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.18 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.39 seconds; current allocated memory: 704.898 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.39 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.97 seconds; current allocated memory: 707.934 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.49 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.85 seconds; current allocated memory: 710.551 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:27; Allocated memory: 67.410 MB.
INFO: [HLS 200-112] Total CPU user time: 18.78 seconds. Total CPU system time: 4.18 seconds. Total elapsed time: 44.43 seconds; peak allocated memory: 710.645 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 46s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 20:55:04 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        dft.comp
* Solution:       hls (Vivado IP Flow Target)
* Product family: zynq
* Target device:  xc7z020-clg400-1


================================================================
== Performance Estimates
================================================================
+ Timing: 
    * Summary: 
    +--------+----------+----------+------------+
    |  Clock |  Target  | Estimated| Uncertainty|
    +--------+----------+----------+------------+
    |ap_clk  |  10.00 ns|  7.256 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+-----------+-----------+---------+---------+---------+
    |  Latency (cycles) |   Latency (absolute)  |      Interval     | Pipeline|
    |   min   |   max   |    min    |    max    |   min   |   max   |   Type  |
    +---------+---------+-----------+-----------+---------+---------+---------+
    |  5768216|  5768216|  57.682 ms|  57.682 ms|  5768217|  5768217|       no|
    +---------+---------+-----------+-----------+---------+---------+---------+

    + Detail: 
        * Instance: 
        +--------------------------------------------------------+----------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+
        |                                                        |                                              |  Latency (cycles) |   Latency (absolute)  |      Interval     |                    Pipeline                    |
        |                        Instance                        |                    Module                    |   min   |   max   |    min    |    max    |   min   |   max   |                      Type                      |
        +--------------------------------------------------------+----------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_17_1_fu_48                  |dft_Pipeline_VITIS_LOOP_17_1                  |     1026|     1026|  10.260 us|  10.260 us|     1025|     1025|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |grp_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_fu_58  |dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3  |  5767185|  5767185|  57.672 ms|  57.672 ms|  5767179|  5767179|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +--------------------------------------------------------+----------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+

        * Loop: 
        N/A



================================================================
== Utilization Estimates
================================================================
* Summary: 
+-----------------+---------+-----+--------+-------+-----+
|       Name      | BRAM_18K| DSP |   FF   |  LUT  | URAM|
+-----------------+---------+-----+--------+-------+-----+
|DSP              |        -|    -|       -|      -|    -|
|Expression       |        -|    -|       0|      6|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        4|    5|    1216|   1426|    -|
|Memory           |        4|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|      72|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        8|    5|    1288|   1597|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        2|    2|       1|      3|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +--------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+
    |                        Instance                        |                    Module                    | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +--------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_17_1_fu_48                  |dft_Pipeline_VITIS_LOOP_17_1                  |        0|   0|    25|    84|    0|
    |grp_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_fu_58  |dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3  |        4|   5|  1191|  1342|    0|
    +--------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+
    |Total                                                   |                                              |        4|   5|  1216|  1426|    0|
    +--------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+
    |     Memory    |           Module          | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+
    |real_sample_U  |real_sample_RAM_AUTO_1R1W  |        2|  0|   0|    0|  1024|   32|     1|        32768|
    |imag_sample_U  |real_sample_RAM_AUTO_1R1W  |        2|  0|   0|    0|  1024|   32|     1|        32768|
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total          |                           |        4|  0|   0|    0|  2048|   64|     2|        65536|
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------------------------------------------------+----------+----+---+----+------------+------------+
    |                              Variable Name                             | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------------------------------------------------+----------+----+---+----+------------+------------+
    |grp_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_fu_58_imag_out_TREADY  |       and|   0|  0|   2|           1|           1|
    |grp_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_fu_58_real_out_TREADY  |       and|   0|  0|   2|           1|           1|
    |ap_block_state6                                                         |        or|   0|  0|   2|           1|           1|
    +------------------------------------------------------------------------+----------+----+---+----+------------+------------+
    |Total                                                                   |          |   0|  0|   6|           3|           3|
    +------------------------------------------------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-----------------------------+----+-----------+-----+-----------+
    |             Name            | LUT| Input Size| Bits| Total Bits|
    +-----------------------------+----+-----------+-----+-----------+
    |ap_NS_fsm                    |  37|          7|    1|          7|
    |imag_in_TREADY_int_regslice  |   9|          2|    1|          2|
    |imag_out_TDATA_int_regslice  |   9|          2|   32|         64|
    |imag_sample_address0         |  14|          3|   10|         30|
    |imag_sample_ce0              |  14|          3|    1|          3|
    |imag_sample_ce1              |   9|          2|    1|          2|
    |imag_sample_we0              |   9|          2|    1|          2|
    |real_in_TREADY_int_regslice  |   9|          2|    1|          2|
    |real_out_TDATA_int_regslice  |   9|          2|   32|         64|
    |real_sample_address0         |  14|          3|   10|         30|
    |real_sample_ce0              |  14|          3|    1|          3|
    |real_sample_ce1              |   9|          2|    1|          2|
    |real_sample_we0              |   9|          2|    1|          2|
    +-----------------------------+----+-----------+-----+-----------+
    |Total                        | 165|         35|   93|        213|
    +-----------------------------+----+-----------+-----+-----------+

    * Register: 
    +---------------------------------------------------------------------+----+----+-----+-----------+
    |                                 Name                                | FF | LUT| Bits| Const Bits|
    +---------------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                            |   6|   0|    6|          0|
    |grp_dft_Pipeline_VITIS_LOOP_17_1_fu_48_ap_start_reg                  |   1|   0|    1|          0|
    |grp_dft_Pipeline_VITIS_LOOP_23_2_VITIS_LOOP_27_3_fu_58_ap_start_reg  |   1|   0|    1|          0|
    |imag_out_TDATA_reg                                                   |  32|   0|   32|          0|
    |real_out_TDATA_reg                                                   |  32|   0|   32|          0|
    +---------------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                                |  72|   0|   72|          0|
    +---------------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+-----------------+-----+-----+------------+--------------+--------------+
|    RTL Ports    | Dir | Bits|  Protocol  | Source Object|    C Type    |
+-----------------+-----+-----+------------+--------------+--------------+
|ap_clk           |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_rst_n         |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_start         |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_done          |  out|    1|  ap_ctrl_hs|           dft|  return value|
|ap_idle          |  out|    1|  ap_ctrl_hs|           dft|  return value|
|ap_ready         |  out|    1|  ap_ctrl_hs|           dft|  return value|
|real_in_TDATA    |   in|   32|        axis|       real_in|       pointer|
|real_in_TVALID   |   in|    1|        axis|       real_in|       pointer|
|real_in_TREADY   |  out|    1|        axis|       real_in|       pointer|
|imag_in_TDATA    |   in|   32|        axis|       imag_in|       pointer|
|imag_in_TVALID   |   in|    1|        axis|       imag_in|       pointer|
|imag_in_TREADY   |  out|    1|        axis|       imag_in|       pointer|
|real_out_TDATA   |  out|   32|        axis|      real_out|       pointer|
|real_out_TVALID  |  out|    1|        axis|      real_out|       pointer|
|real_out_TREADY  |   in|    1|        axis|      real_out|       pointer|
|imag_out_TDATA   |  out|   32|        axis|      imag_out|       pointer|
|imag_out_TVALID  |  out|    1|        axis|      imag_out|       pointer|
|imag_out_TREADY  |   in|    1|        axis|      imag_out|       pointer|
+-----------------+-----+-----+------------+--------------+--------------+

rm dft_test.bin
