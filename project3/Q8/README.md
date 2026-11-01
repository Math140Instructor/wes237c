LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.001853297697380 0.001314980210736
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 14:14:34 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.04 seconds. Elapsed time: 2.74 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 3.84 seconds. CPU system time: 0.91 seconds. Elapsed time: 4.9 seconds; current allocated memory: 660.578 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 82 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 107 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 75 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 73 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 73 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 73 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 73 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 97 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-188] Unrolling loop 'VITIS_LOOP_11_2' (dft.cpp:11:22) in function 'dft' partially with a factor of 2 (dft.cpp:5:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_11_2> at dft.cpp:11:22 
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_25_3> at dft.cpp:25:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.53 seconds. CPU system time: 0.93 seconds. Elapsed time: 8.98 seconds; current allocated memory: 670.164 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.164 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 670.328 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.344 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.473 MB.
INFO: [HLS 200-2061] Successfully converted nested loops 'VITIS_LOOP_7_1'(dft.cpp:7:19) and 'VITIS_LOOP_11_2'(dft.cpp:11:22) in function 'dft' into perfectly nested loops.
INFO: [XFORM 203-541] Flattening a loop nest 'VITIS_LOOP_7_1' (dft.cpp:7:19) in function 'dft'.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 701.305 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'.
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 7, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 9, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' (loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'): Unable to enforce a carried dependence constraint (II = 10, distance = 1, offset = 0) between 'store' operation 0 bit ('add4_write_ln19', dft.cpp:19) of variable 'add_1', dft.cpp:19 on local variable 'add4' and 'load' operation 32 bit ('add4_load', dft.cpp:7) on local variable 'add4'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 11, Depth = 27, loop 'VITIS_LOOP_7_1_VITIS_LOOP_11_2'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.15 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.32 seconds; current allocated memory: 702.398 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 702.398 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_25_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_25_3'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'VITIS_LOOP_25_3'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 702.398 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 702.398 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 702.398 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 702.398 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2' pipeline 'VITIS_LOOP_7_1_VITIS_LOOP_11_2' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'faddfsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_10s_10s_10_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2_cos_coefficients_table_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2_sin_coefficients_table_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.22 seconds; current allocated memory: 702.578 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_25_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_25_3' pipeline 'VITIS_LOOP_25_3' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_25_3'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.13 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.23 seconds; current allocated memory: 703.801 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_op' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_op' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.23 seconds; current allocated memory: 704.652 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.33 seconds. CPU system time: 0.13 seconds. Elapsed time: 1.81 seconds; current allocated memory: 707.656 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.53 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.88 seconds; current allocated memory: 710.469 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 67.328 MB.
INFO: [HLS 200-112] Total CPU user time: 16.3 seconds. Total CPU system time: 4.23 seconds. Total elapsed time: 36.58 seconds; peak allocated memory: 710.551 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 38s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q8


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 14:15:10 2026

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
    |  5768214|  5768214|  57.682 ms|  57.682 ms|  5768215|  5768215|       no|
    +---------+---------+-----------+-----------+---------+---------+---------+

    + Detail: 
        * Instance: 
        +-------------------------------------------------------+---------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+
        |                                                       |                                             |  Latency (cycles) |   Latency (absolute)  |      Interval     |                    Pipeline                    |
        |                        Instance                       |                    Module                   |   min   |   max   |    min    |    max    |   min   |   max   |                      Type                      |
        +-------------------------------------------------------+---------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2_fu_32  |dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2  |  5767185|  5767185|  57.672 ms|  57.672 ms|  5767179|  5767179|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |grp_dft_Pipeline_VITIS_LOOP_25_3_fu_48                 |dft_Pipeline_VITIS_LOOP_25_3                 |     1026|     1026|  10.260 us|  10.260 us|     1025|     1025|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-------------------------------------------------------+---------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+

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
|Expression       |        -|    -|       -|      -|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        4|    5|    1426|   1449|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    191|    -|
|Register         |        -|    -|       6|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        4|    5|    1432|   1640|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        1|    2|       1|      3|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------------------------------+---------------------------------------------+---------+----+------+------+-----+
    |                        Instance                       |                    Module                   | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +-------------------------------------------------------+---------------------------------------------+---------+----+------+------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_25_3_fu_48                 |dft_Pipeline_VITIS_LOOP_25_3                 |        0|   0|    25|    62|    0|
    |grp_dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2_fu_32  |dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2  |        4|   5|  1401|  1387|    0|
    +-------------------------------------------------------+---------------------------------------------+---------+----+------+------+-----+
    |Total                                                  |                                             |        4|   5|  1426|  1449|    0|
    +-------------------------------------------------------+---------------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +----------------------+----+-----------+-----+-----------+
    |         Name         | LUT| Input Size| Bits| Total Bits|
    +----------------------+----+-----------+-----+-----------+
    |ap_NS_fsm             |  25|          5|    1|          5|
    |imag_op_address0      |  14|          3|   10|         30|
    |imag_op_ce0           |  14|          3|    1|          3|
    |imag_op_we0           |   9|          2|    1|          2|
    |imag_sample_address0  |  14|          3|   10|         30|
    |imag_sample_ce0       |  14|          3|    1|          3|
    |imag_sample_ce1       |   9|          2|    1|          2|
    |imag_sample_we0       |   9|          2|    1|          2|
    |real_op_address0      |  14|          3|   10|         30|
    |real_op_ce0           |  14|          3|    1|          3|
    |real_op_we0           |   9|          2|    1|          2|
    |real_sample_address0  |  14|          3|   10|         30|
    |real_sample_ce0       |  14|          3|    1|          3|
    |real_sample_ce1       |   9|          2|    1|          2|
    |real_sample_we0       |   9|          2|    1|          2|
    +----------------------+----+-----------+-----+-----------+
    |Total                 | 191|         41|   51|        149|
    +----------------------+----+-----------+-----+-----------+

    * Register: 
    +--------------------------------------------------------------------+---+----+-----+-----------+
    |                                Name                                | FF| LUT| Bits| Const Bits|
    +--------------------------------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                                           |  4|   0|    4|          0|
    |grp_dft_Pipeline_VITIS_LOOP_25_3_fu_48_ap_start_reg                 |  1|   0|    1|          0|
    |grp_dft_Pipeline_VITIS_LOOP_7_1_VITIS_LOOP_11_2_fu_32_ap_start_reg  |  1|   0|    1|          0|
    +--------------------------------------------------------------------+---+----+-----+-----------+
    |Total                                                               |  6|   0|    6|          0|
    +--------------------------------------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+----------------------+-----+-----+------------+--------------+--------------+
|       RTL Ports      | Dir | Bits|  Protocol  | Source Object|    C Type    |
+----------------------+-----+-----+------------+--------------+--------------+
|ap_clk                |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_rst                |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_start              |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_done               |  out|    1|  ap_ctrl_hs|           dft|  return value|
|ap_idle               |  out|    1|  ap_ctrl_hs|           dft|  return value|
|ap_ready              |  out|    1|  ap_ctrl_hs|           dft|  return value|
|real_sample_address0  |  out|   10|   ap_memory|   real_sample|         array|
|real_sample_ce0       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_we0       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_d0        |  out|   32|   ap_memory|   real_sample|         array|
|real_sample_q0        |   in|   32|   ap_memory|   real_sample|         array|
|real_sample_address1  |  out|   10|   ap_memory|   real_sample|         array|
|real_sample_ce1       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_q1        |   in|   32|   ap_memory|   real_sample|         array|
|imag_sample_address0  |  out|   10|   ap_memory|   imag_sample|         array|
|imag_sample_ce0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_we0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_d0        |  out|   32|   ap_memory|   imag_sample|         array|
|imag_sample_q0        |   in|   32|   ap_memory|   imag_sample|         array|
|imag_sample_address1  |  out|   10|   ap_memory|   imag_sample|         array|
|imag_sample_ce1       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_q1        |   in|   32|   ap_memory|   imag_sample|         array|
|real_op_address0      |  out|   10|   ap_memory|       real_op|         array|
|real_op_ce0           |  out|    1|   ap_memory|       real_op|         array|
|real_op_we0           |  out|    1|   ap_memory|       real_op|         array|
|real_op_d0            |  out|   32|   ap_memory|       real_op|         array|
|real_op_q0            |   in|   32|   ap_memory|       real_op|         array|
|imag_op_address0      |  out|   10|   ap_memory|       imag_op|         array|
|imag_op_ce0           |  out|    1|   ap_memory|       imag_op|         array|
|imag_op_we0           |  out|    1|   ap_memory|       imag_op|         array|
|imag_op_d0            |  out|   32|   ap_memory|       imag_op|         array|
|imag_op_q0            |   in|   32|   ap_memory|       imag_op|         array|
+----------------------+-----+-----+------------+--------------+--------------+

rm dft_test.bin
