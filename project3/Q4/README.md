## N=1
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 00:00:36 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp'.
INFO: [HLS 200-10] Opening and resetting solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.16 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.016 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.67 seconds. CPU system time: 0.89 seconds. Elapsed time: 1.68 seconds; current allocated memory: 660.594 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 63 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 521 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,570 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 586 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 660 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 665 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_22_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:22:26)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_22_2' (dft.cpp:22:26) in function 'dft' completely with a factor of 32 (dft.cpp:7:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (dft.cpp:17:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (dft.cpp:17:9)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.1 seconds. CPU system time: 0.98 seconds. Elapsed time: 9.32 seconds; current allocated memory: 670.211 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.211 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 671.008 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 671.008 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.13 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.16 seconds; current allocated memory: 694.141 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 694.566 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_16_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_16_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 172, loop 'VITIS_LOOP_16_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.52 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.67 seconds; current allocated memory: 698.285 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.18 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.25 seconds; current allocated memory: 699.977 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.18 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.28 seconds; current allocated memory: 702.371 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 702.371 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_16_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_16_1' pipeline 'VITIS_LOOP_16_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_16_1' is 21161 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_16_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.31 seconds. CPU system time: 0.12 seconds. Elapsed time: 2.03 seconds; current allocated memory: 727.301 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.81 seconds. CPU system time: 0.06 seconds. Elapsed time: 1.07 seconds; current allocated memory: 738.766 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.64 seconds. CPU system time: 0.51 seconds. Elapsed time: 3.52 seconds; current allocated memory: 742.031 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.84 seconds. CPU system time: 0.09 seconds. Elapsed time: 1.15 seconds; current allocated memory: 750.137 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:28; Allocated memory: 107.121 MB.
INFO: [HLS 200-112] Total CPU user time: 16.57 seconds. Total CPU system time: 4.1 seconds. Total elapsed time: 36.94 seconds; peak allocated memory: 750.137 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 39s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 00:01:10 2026

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
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |      221|      221|  2.210 us|  2.210 us|  222|  222|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                         |                              |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                |            Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_16_1_fu_812  |dft_Pipeline_VITIS_LOOP_16_1  |      204|      204|  2.040 us|  2.040 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Instance         |       64|  640|   55202|  91104|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    417|    -|
|Register         |        -|    -|    3987|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|  640|   59189|  91521|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|  290|      55|    172|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |                 Instance                |            Module            | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_16_1_fu_812  |dft_Pipeline_VITIS_LOOP_16_1  |       64|  640|  55202|  91104|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |Total                                    |                              |       64|  640|  55202|  91104|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +----------------------------+----+-----------+-----+-----------+
    |            Name            | LUT| Input Size| Bits| Total Bits|
    +----------------------------+----+-----------+-----+-----------+
    |ap_NS_fsm                   |  93|         19|    1|         19|
    |imag_sample_address0_local  |  81|         17|    5|         85|
    |imag_sample_address1_local  |  81|         17|    5|         85|
    |real_sample_address0_local  |  81|         17|    5|         85|
    |real_sample_address1_local  |  81|         17|    5|         85|
    +----------------------------+----+-----------+-----+-----------+
    |Total                       | 417|         87|   21|        359|
    +----------------------------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------+----+----+-----+-----------+
    |                         Name                         | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                             |  18|   0|   18|          0|
    |empty_100_reg_2057                                    |  32|   0|   32|          0|
    |empty_101_reg_2062                                    |  32|   0|   32|          0|
    |empty_102_reg_2067                                    |  32|   0|   32|          0|
    |empty_103_reg_2072                                    |  32|   0|   32|          0|
    |empty_104_reg_2077                                    |  32|   0|   32|          0|
    |empty_105_reg_2082                                    |  32|   0|   32|          0|
    |empty_106_reg_2087                                    |  32|   0|   32|          0|
    |empty_107_reg_2092                                    |  32|   0|   32|          0|
    |empty_108_reg_2097                                    |  32|   0|   32|          0|
    |empty_109_reg_2102                                    |  32|   0|   32|          0|
    |empty_110_reg_2107                                    |  32|   0|   32|          0|
    |empty_111_reg_2112                                    |  32|   0|   32|          0|
    |empty_112_reg_2117                                    |  32|   0|   32|          0|
    |empty_113_reg_2122                                    |  32|   0|   32|          0|
    |empty_114_reg_2127                                    |  32|   0|   32|          0|
    |empty_115_reg_2132                                    |  32|   0|   32|          0|
    |empty_116_reg_2137                                    |  32|   0|   32|          0|
    |empty_117_reg_2142                                    |  32|   0|   32|          0|
    |empty_118_reg_2147                                    |  32|   0|   32|          0|
    |empty_119_reg_2152                                    |  32|   0|   32|          0|
    |empty_120_reg_2157                                    |  32|   0|   32|          0|
    |empty_121_reg_2162                                    |  32|   0|   32|          0|
    |empty_122_reg_2167                                    |  32|   0|   32|          0|
    |empty_123_reg_2172                                    |  32|   0|   32|          0|
    |empty_124_reg_2177                                    |  32|   0|   32|          0|
    |empty_125_reg_2182                                    |  32|   0|   32|          0|
    |empty_126_reg_2187                                    |  32|   0|   32|          0|
    |empty_127_reg_2192                                    |  32|   0|   32|          0|
    |empty_128_reg_2197                                    |  32|   0|   32|          0|
    |empty_129_reg_2202                                    |  32|   0|   32|          0|
    |empty_130_reg_2207                                    |  32|   0|   32|          0|
    |empty_68_reg_1897                                     |  32|   0|   32|          0|
    |empty_69_reg_1902                                     |  32|   0|   32|          0|
    |empty_70_reg_1907                                     |  32|   0|   32|          0|
    |empty_71_reg_1912                                     |  32|   0|   32|          0|
    |empty_72_reg_1917                                     |  32|   0|   32|          0|
    |empty_73_reg_1922                                     |  32|   0|   32|          0|
    |empty_74_reg_1927                                     |  32|   0|   32|          0|
    |empty_75_reg_1932                                     |  32|   0|   32|          0|
    |empty_76_reg_1937                                     |  32|   0|   32|          0|
    |empty_77_reg_1942                                     |  32|   0|   32|          0|
    |empty_78_reg_1947                                     |  32|   0|   32|          0|
    |empty_79_reg_1952                                     |  32|   0|   32|          0|
    |empty_80_reg_1957                                     |  32|   0|   32|          0|
    |empty_81_reg_1962                                     |  32|   0|   32|          0|
    |empty_82_reg_1967                                     |  32|   0|   32|          0|
    |empty_83_reg_1972                                     |  32|   0|   32|          0|
    |empty_84_reg_1977                                     |  32|   0|   32|          0|
    |empty_85_reg_1982                                     |  32|   0|   32|          0|
    |empty_86_reg_1987                                     |  32|   0|   32|          0|
    |empty_87_reg_1992                                     |  32|   0|   32|          0|
    |empty_88_reg_1997                                     |  32|   0|   32|          0|
    |empty_89_reg_2002                                     |  32|   0|   32|          0|
    |empty_90_reg_2007                                     |  32|   0|   32|          0|
    |empty_91_reg_2012                                     |  32|   0|   32|          0|
    |empty_92_reg_2017                                     |  32|   0|   32|          0|
    |empty_93_reg_2022                                     |  32|   0|   32|          0|
    |empty_94_reg_2027                                     |  32|   0|   32|          0|
    |empty_95_reg_2032                                     |  32|   0|   32|          0|
    |empty_96_reg_2037                                     |  32|   0|   32|          0|
    |empty_97_reg_2042                                     |  32|   0|   32|          0|
    |empty_98_reg_2047                                     |  32|   0|   32|          0|
    |empty_99_reg_2052                                     |  32|   0|   32|          0|
    |empty_reg_1892                                        |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_16_1_fu_812_ap_start_reg  |   1|   0|    1|          0|
    |imag_sample_load_10_reg_1497                          |  32|   0|   32|          0|
    |imag_sample_load_11_reg_1507                          |  32|   0|   32|          0|
    |imag_sample_load_12_reg_1537                          |  32|   0|   32|          0|
    |imag_sample_load_13_reg_1547                          |  32|   0|   32|          0|
    |imag_sample_load_14_reg_1577                          |  32|   0|   32|          0|
    |imag_sample_load_15_reg_1587                          |  32|   0|   32|          0|
    |imag_sample_load_16_reg_1617                          |  32|   0|   32|          0|
    |imag_sample_load_17_reg_1627                          |  32|   0|   32|          0|
    |imag_sample_load_18_reg_1657                          |  32|   0|   32|          0|
    |imag_sample_load_19_reg_1667                          |  32|   0|   32|          0|
    |imag_sample_load_1_reg_1307                           |  32|   0|   32|          0|
    |imag_sample_load_20_reg_1697                          |  32|   0|   32|          0|
    |imag_sample_load_21_reg_1707                          |  32|   0|   32|          0|
    |imag_sample_load_22_reg_1737                          |  32|   0|   32|          0|
    |imag_sample_load_23_reg_1747                          |  32|   0|   32|          0|
    |imag_sample_load_24_reg_1777                          |  32|   0|   32|          0|
    |imag_sample_load_25_reg_1787                          |  32|   0|   32|          0|
    |imag_sample_load_26_reg_1817                          |  32|   0|   32|          0|
    |imag_sample_load_27_reg_1827                          |  32|   0|   32|          0|
    |imag_sample_load_28_reg_1857                          |  32|   0|   32|          0|
    |imag_sample_load_29_reg_1867                          |  32|   0|   32|          0|
    |imag_sample_load_2_reg_1337                           |  32|   0|   32|          0|
    |imag_sample_load_3_reg_1347                           |  32|   0|   32|          0|
    |imag_sample_load_4_reg_1377                           |  32|   0|   32|          0|
    |imag_sample_load_5_reg_1387                           |  32|   0|   32|          0|
    |imag_sample_load_6_reg_1417                           |  32|   0|   32|          0|
    |imag_sample_load_7_reg_1427                           |  32|   0|   32|          0|
    |imag_sample_load_8_reg_1457                           |  32|   0|   32|          0|
    |imag_sample_load_9_reg_1467                           |  32|   0|   32|          0|
    |imag_sample_load_reg_1297                             |  32|   0|   32|          0|
    |real_sample_load_10_reg_1492                          |  32|   0|   32|          0|
    |real_sample_load_11_reg_1502                          |  32|   0|   32|          0|
    |real_sample_load_12_reg_1532                          |  32|   0|   32|          0|
    |real_sample_load_13_reg_1542                          |  32|   0|   32|          0|
    |real_sample_load_14_reg_1572                          |  32|   0|   32|          0|
    |real_sample_load_15_reg_1582                          |  32|   0|   32|          0|
    |real_sample_load_16_reg_1612                          |  32|   0|   32|          0|
    |real_sample_load_17_reg_1622                          |  32|   0|   32|          0|
    |real_sample_load_18_reg_1652                          |  32|   0|   32|          0|
    |real_sample_load_19_reg_1662                          |  32|   0|   32|          0|
    |real_sample_load_1_reg_1302                           |  32|   0|   32|          0|
    |real_sample_load_20_reg_1692                          |  32|   0|   32|          0|
    |real_sample_load_21_reg_1702                          |  32|   0|   32|          0|
    |real_sample_load_22_reg_1732                          |  32|   0|   32|          0|
    |real_sample_load_23_reg_1742                          |  32|   0|   32|          0|
    |real_sample_load_24_reg_1772                          |  32|   0|   32|          0|
    |real_sample_load_25_reg_1782                          |  32|   0|   32|          0|
    |real_sample_load_26_reg_1812                          |  32|   0|   32|          0|
    |real_sample_load_27_reg_1822                          |  32|   0|   32|          0|
    |real_sample_load_28_reg_1852                          |  32|   0|   32|          0|
    |real_sample_load_29_reg_1862                          |  32|   0|   32|          0|
    |real_sample_load_2_reg_1332                           |  32|   0|   32|          0|
    |real_sample_load_3_reg_1342                           |  32|   0|   32|          0|
    |real_sample_load_4_reg_1372                           |  32|   0|   32|          0|
    |real_sample_load_5_reg_1382                           |  32|   0|   32|          0|
    |real_sample_load_6_reg_1412                           |  32|   0|   32|          0|
    |real_sample_load_7_reg_1422                           |  32|   0|   32|          0|
    |real_sample_load_8_reg_1452                           |  32|   0|   32|          0|
    |real_sample_load_9_reg_1462                           |  32|   0|   32|          0|
    |real_sample_load_reg_1292                             |  32|   0|   32|          0|
    +------------------------------------------------------+----+----+-----+-----------+
    |Total                                                 |3987|   0| 3987|          0|
    +------------------------------------------------------+----+----+-----+-----------+



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
|real_sample_address0  |  out|    5|   ap_memory|   real_sample|         array|
|real_sample_ce0       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_q0        |   in|   32|   ap_memory|   real_sample|         array|
|real_sample_address1  |  out|    5|   ap_memory|   real_sample|         array|
|real_sample_ce1       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_q1        |   in|   32|   ap_memory|   real_sample|         array|
|imag_sample_address0  |  out|    5|   ap_memory|   imag_sample|         array|
|imag_sample_ce0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_q0        |   in|   32|   ap_memory|   imag_sample|         array|
|imag_sample_address1  |  out|    5|   ap_memory|   imag_sample|         array|
|imag_sample_ce1       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_q1        |   in|   32|   ap_memory|   imag_sample|         array|
|real_out_address0     |  out|    5|   ap_memory|      real_out|         array|
|real_out_ce0          |  out|    1|   ap_memory|      real_out|         array|
|real_out_we0          |  out|    1|   ap_memory|      real_out|         array|
|real_out_d0           |  out|   32|   ap_memory|      real_out|         array|
|imag_out_address0     |  out|    5|   ap_memory|      imag_out|         array|
|imag_out_ce0          |  out|    1|   ap_memory|      imag_out|         array|
|imag_out_we0          |  out|    1|   ap_memory|      imag_out|         array|
|imag_out_d0           |  out|   32|   ap_memory|      imag_out|         array|
+----------------------+-----+-----+------------+--------------+--------------+

## N=2
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 00:08:19 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.04 seconds. Elapsed time: 2.73 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.62 seconds. CPU system time: 0.77 seconds. Elapsed time: 1.52 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 67 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 521 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 608 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 539 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 539 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 539 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 539 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 539 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 539 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,587 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 603 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 689 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 694 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_22_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:22:26)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_22_2' (dft.cpp:22:26) in function 'dft' completely with a factor of 32 (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_sample': Block partitioning with factor 2 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_sample': Block partitioning with factor 2 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_out': Block partitioning with factor 2 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_out': Block partitioning with factor 2 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (dft.cpp:17:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (dft.cpp:17:9)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.05 seconds. CPU system time: 0.97 seconds. Elapsed time: 9.34 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 671.152 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 671.152 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 694.293 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.14 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 694.656 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_16_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_16_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 172, loop 'VITIS_LOOP_16_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.4 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.51 seconds; current allocated memory: 698.688 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.17 seconds. CPU system time: 0 seconds. Elapsed time: 0.21 seconds; current allocated memory: 700.305 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.2 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.3 seconds; current allocated memory: 702.691 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 702.691 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_16_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_16_1' pipeline 'VITIS_LOOP_16_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_16_1' is 20982 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_16_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_16_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.12 seconds. CPU system time: 0.11 seconds. Elapsed time: 1.97 seconds; current allocated memory: 728.250 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.64 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.88 seconds; current allocated memory: 739.715 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.61 seconds. CPU system time: 0.48 seconds. Elapsed time: 3.71 seconds; current allocated memory: 742.859 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.86 seconds. CPU system time: 0.08 seconds. Elapsed time: 1.14 seconds; current allocated memory: 751.680 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 108.457 MB.
INFO: [HLS 200-112] Total CPU user time: 16.19 seconds. Total CPU system time: 4.15 seconds. Total elapsed time: 35.67 seconds; peak allocated memory: 751.680 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 37s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 00:08:52 2026

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
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |      213|      213|  2.130 us|  2.130 us|  214|  214|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                         |                              |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                |            Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_16_1_fu_806  |dft_Pipeline_VITIS_LOOP_16_1  |      204|      204|  2.040 us|  2.040 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Instance         |       64|  640|   55463|  91232|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    443|    -|
|Register         |        -|    -|    3851|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|  640|   59314|  91675|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|  290|      55|    172|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |                 Instance                |            Module            | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_16_1_fu_806  |dft_Pipeline_VITIS_LOOP_16_1  |       64|  640|  55463|  91232|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |Total                                    |                              |       64|  640|  55463|  91232|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +------------------------------+----+-----------+-----+-----------+
    |             Name             | LUT| Input Size| Bits| Total Bits|
    +------------------------------+----+-----------+-----+-----------+
    |ap_NS_fsm                     |  59|         11|    1|         11|
    |imag_sample_0_address0_local  |  48|          9|    4|         36|
    |imag_sample_0_address1_local  |  48|          9|    4|         36|
    |imag_sample_1_address0_local  |  48|          9|    4|         36|
    |imag_sample_1_address1_local  |  48|          9|    4|         36|
    |real_sample_0_address0_local  |  48|          9|    4|         36|
    |real_sample_0_address1_local  |  48|          9|    4|         36|
    |real_sample_1_address0_local  |  48|          9|    4|         36|
    |real_sample_1_address1_local  |  48|          9|    4|         36|
    +------------------------------+----+-----------+-----+-----------+
    |Total                         | 443|         83|   33|        299|
    +------------------------------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------+----+----+-----+-----------+
    |                         Name                         | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                             |  10|   0|   10|          0|
    |empty_100_reg_2039                                    |  32|   0|   32|          0|
    |empty_101_reg_2044                                    |  32|   0|   32|          0|
    |empty_102_reg_2049                                    |  32|   0|   32|          0|
    |empty_103_reg_2054                                    |  32|   0|   32|          0|
    |empty_104_reg_2059                                    |  32|   0|   32|          0|
    |empty_105_reg_2064                                    |  32|   0|   32|          0|
    |empty_106_reg_2069                                    |  32|   0|   32|          0|
    |empty_107_reg_2074                                    |  32|   0|   32|          0|
    |empty_108_reg_2079                                    |  32|   0|   32|          0|
    |empty_109_reg_2084                                    |  32|   0|   32|          0|
    |empty_110_reg_2089                                    |  32|   0|   32|          0|
    |empty_111_reg_2094                                    |  32|   0|   32|          0|
    |empty_112_reg_2099                                    |  32|   0|   32|          0|
    |empty_113_reg_2104                                    |  32|   0|   32|          0|
    |empty_114_reg_2109                                    |  32|   0|   32|          0|
    |empty_115_reg_2114                                    |  32|   0|   32|          0|
    |empty_116_reg_2119                                    |  32|   0|   32|          0|
    |empty_117_reg_2124                                    |  32|   0|   32|          0|
    |empty_118_reg_2129                                    |  32|   0|   32|          0|
    |empty_119_reg_2134                                    |  32|   0|   32|          0|
    |empty_120_reg_2139                                    |  32|   0|   32|          0|
    |empty_121_reg_2144                                    |  32|   0|   32|          0|
    |empty_122_reg_2149                                    |  32|   0|   32|          0|
    |empty_123_reg_2154                                    |  32|   0|   32|          0|
    |empty_124_reg_2159                                    |  32|   0|   32|          0|
    |empty_125_reg_2164                                    |  32|   0|   32|          0|
    |empty_126_reg_2169                                    |  32|   0|   32|          0|
    |empty_127_reg_2174                                    |  32|   0|   32|          0|
    |empty_128_reg_2179                                    |  32|   0|   32|          0|
    |empty_129_reg_2184                                    |  32|   0|   32|          0|
    |empty_130_reg_2189                                    |  32|   0|   32|          0|
    |empty_68_reg_1879                                     |  32|   0|   32|          0|
    |empty_69_reg_1884                                     |  32|   0|   32|          0|
    |empty_70_reg_1889                                     |  32|   0|   32|          0|
    |empty_71_reg_1894                                     |  32|   0|   32|          0|
    |empty_72_reg_1899                                     |  32|   0|   32|          0|
    |empty_73_reg_1904                                     |  32|   0|   32|          0|
    |empty_74_reg_1909                                     |  32|   0|   32|          0|
    |empty_75_reg_1914                                     |  32|   0|   32|          0|
    |empty_76_reg_1919                                     |  32|   0|   32|          0|
    |empty_77_reg_1924                                     |  32|   0|   32|          0|
    |empty_78_reg_1929                                     |  32|   0|   32|          0|
    |empty_79_reg_1934                                     |  32|   0|   32|          0|
    |empty_80_reg_1939                                     |  32|   0|   32|          0|
    |empty_81_reg_1944                                     |  32|   0|   32|          0|
    |empty_82_reg_1949                                     |  32|   0|   32|          0|
    |empty_83_reg_1954                                     |  32|   0|   32|          0|
    |empty_84_reg_1959                                     |  32|   0|   32|          0|
    |empty_85_reg_1964                                     |  32|   0|   32|          0|
    |empty_86_reg_1969                                     |  32|   0|   32|          0|
    |empty_87_reg_1974                                     |  32|   0|   32|          0|
    |empty_88_reg_1979                                     |  32|   0|   32|          0|
    |empty_89_reg_1984                                     |  32|   0|   32|          0|
    |empty_90_reg_1989                                     |  32|   0|   32|          0|
    |empty_91_reg_1994                                     |  32|   0|   32|          0|
    |empty_92_reg_1999                                     |  32|   0|   32|          0|
    |empty_93_reg_2004                                     |  32|   0|   32|          0|
    |empty_94_reg_2009                                     |  32|   0|   32|          0|
    |empty_95_reg_2014                                     |  32|   0|   32|          0|
    |empty_96_reg_2019                                     |  32|   0|   32|          0|
    |empty_97_reg_2024                                     |  32|   0|   32|          0|
    |empty_98_reg_2029                                     |  32|   0|   32|          0|
    |empty_99_reg_2034                                     |  32|   0|   32|          0|
    |empty_reg_1874                                        |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_16_1_fu_806_ap_start_reg  |   1|   0|    1|          0|
    |imag_sample_0_load_10_reg_1719                        |  32|   0|   32|          0|
    |imag_sample_0_load_11_reg_1729                        |  32|   0|   32|          0|
    |imag_sample_0_load_12_reg_1799                        |  32|   0|   32|          0|
    |imag_sample_0_load_13_reg_1809                        |  32|   0|   32|          0|
    |imag_sample_0_load_1_reg_1329                         |  32|   0|   32|          0|
    |imag_sample_0_load_2_reg_1399                         |  32|   0|   32|          0|
    |imag_sample_0_load_3_reg_1409                         |  32|   0|   32|          0|
    |imag_sample_0_load_4_reg_1479                         |  32|   0|   32|          0|
    |imag_sample_0_load_5_reg_1489                         |  32|   0|   32|          0|
    |imag_sample_0_load_6_reg_1559                         |  32|   0|   32|          0|
    |imag_sample_0_load_7_reg_1569                         |  32|   0|   32|          0|
    |imag_sample_0_load_8_reg_1639                         |  32|   0|   32|          0|
    |imag_sample_0_load_9_reg_1649                         |  32|   0|   32|          0|
    |imag_sample_0_load_reg_1319                           |  32|   0|   32|          0|
    |imag_sample_1_load_10_reg_1759                        |  32|   0|   32|          0|
    |imag_sample_1_load_11_reg_1769                        |  32|   0|   32|          0|
    |imag_sample_1_load_12_reg_1839                        |  32|   0|   32|          0|
    |imag_sample_1_load_13_reg_1849                        |  32|   0|   32|          0|
    |imag_sample_1_load_1_reg_1369                         |  32|   0|   32|          0|
    |imag_sample_1_load_2_reg_1439                         |  32|   0|   32|          0|
    |imag_sample_1_load_3_reg_1449                         |  32|   0|   32|          0|
    |imag_sample_1_load_4_reg_1519                         |  32|   0|   32|          0|
    |imag_sample_1_load_5_reg_1529                         |  32|   0|   32|          0|
    |imag_sample_1_load_6_reg_1599                         |  32|   0|   32|          0|
    |imag_sample_1_load_7_reg_1609                         |  32|   0|   32|          0|
    |imag_sample_1_load_8_reg_1679                         |  32|   0|   32|          0|
    |imag_sample_1_load_9_reg_1689                         |  32|   0|   32|          0|
    |imag_sample_1_load_reg_1359                           |  32|   0|   32|          0|
    |real_sample_0_load_10_reg_1714                        |  32|   0|   32|          0|
    |real_sample_0_load_11_reg_1724                        |  32|   0|   32|          0|
    |real_sample_0_load_12_reg_1794                        |  32|   0|   32|          0|
    |real_sample_0_load_13_reg_1804                        |  32|   0|   32|          0|
    |real_sample_0_load_1_reg_1324                         |  32|   0|   32|          0|
    |real_sample_0_load_2_reg_1394                         |  32|   0|   32|          0|
    |real_sample_0_load_3_reg_1404                         |  32|   0|   32|          0|
    |real_sample_0_load_4_reg_1474                         |  32|   0|   32|          0|
    |real_sample_0_load_5_reg_1484                         |  32|   0|   32|          0|
    |real_sample_0_load_6_reg_1554                         |  32|   0|   32|          0|
    |real_sample_0_load_7_reg_1564                         |  32|   0|   32|          0|
    |real_sample_0_load_8_reg_1634                         |  32|   0|   32|          0|
    |real_sample_0_load_9_reg_1644                         |  32|   0|   32|          0|
    |real_sample_0_load_reg_1314                           |  32|   0|   32|          0|
    |real_sample_1_load_10_reg_1754                        |  32|   0|   32|          0|
    |real_sample_1_load_11_reg_1764                        |  32|   0|   32|          0|
    |real_sample_1_load_12_reg_1834                        |  32|   0|   32|          0|
    |real_sample_1_load_13_reg_1844                        |  32|   0|   32|          0|
    |real_sample_1_load_1_reg_1364                         |  32|   0|   32|          0|
    |real_sample_1_load_2_reg_1434                         |  32|   0|   32|          0|
    |real_sample_1_load_3_reg_1444                         |  32|   0|   32|          0|
    |real_sample_1_load_4_reg_1514                         |  32|   0|   32|          0|
    |real_sample_1_load_5_reg_1524                         |  32|   0|   32|          0|
    |real_sample_1_load_6_reg_1594                         |  32|   0|   32|          0|
    |real_sample_1_load_7_reg_1604                         |  32|   0|   32|          0|
    |real_sample_1_load_8_reg_1674                         |  32|   0|   32|          0|
    |real_sample_1_load_9_reg_1684                         |  32|   0|   32|          0|
    |real_sample_1_load_reg_1354                           |  32|   0|   32|          0|
    +------------------------------------------------------+----+----+-----+-----------+
    |Total                                                 |3851|   0| 3851|          0|
    +------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+------------------------+-----+-----+------------+---------------+--------------+
|        RTL Ports       | Dir | Bits|  Protocol  | Source Object |    C Type    |
+------------------------+-----+-----+------------+---------------+--------------+
|ap_clk                  |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_rst                  |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_start                |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_done                 |  out|    1|  ap_ctrl_hs|            dft|  return value|
|ap_idle                 |  out|    1|  ap_ctrl_hs|            dft|  return value|
|ap_ready                |  out|    1|  ap_ctrl_hs|            dft|  return value|
|real_sample_0_address0  |  out|    4|   ap_memory|  real_sample_0|         array|
|real_sample_0_ce0       |  out|    1|   ap_memory|  real_sample_0|         array|
|real_sample_0_q0        |   in|   32|   ap_memory|  real_sample_0|         array|
|real_sample_0_address1  |  out|    4|   ap_memory|  real_sample_0|         array|
|real_sample_0_ce1       |  out|    1|   ap_memory|  real_sample_0|         array|
|real_sample_0_q1        |   in|   32|   ap_memory|  real_sample_0|         array|
|real_sample_1_address0  |  out|    4|   ap_memory|  real_sample_1|         array|
|real_sample_1_ce0       |  out|    1|   ap_memory|  real_sample_1|         array|
|real_sample_1_q0        |   in|   32|   ap_memory|  real_sample_1|         array|
|real_sample_1_address1  |  out|    4|   ap_memory|  real_sample_1|         array|
|real_sample_1_ce1       |  out|    1|   ap_memory|  real_sample_1|         array|
|real_sample_1_q1        |   in|   32|   ap_memory|  real_sample_1|         array|
|imag_sample_0_address0  |  out|    4|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_ce0       |  out|    1|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_q0        |   in|   32|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_address1  |  out|    4|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_ce1       |  out|    1|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_q1        |   in|   32|   ap_memory|  imag_sample_0|         array|
|imag_sample_1_address0  |  out|    4|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_ce0       |  out|    1|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_q0        |   in|   32|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_address1  |  out|    4|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_ce1       |  out|    1|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_q1        |   in|   32|   ap_memory|  imag_sample_1|         array|
|real_out_0_address0     |  out|    4|   ap_memory|     real_out_0|         array|
|real_out_0_ce0          |  out|    1|   ap_memory|     real_out_0|         array|
|real_out_0_we0          |  out|    1|   ap_memory|     real_out_0|         array|
|real_out_0_d0           |  out|   32|   ap_memory|     real_out_0|         array|
|real_out_1_address0     |  out|    4|   ap_memory|     real_out_1|         array|
|real_out_1_ce0          |  out|    1|   ap_memory|     real_out_1|         array|
|real_out_1_we0          |  out|    1|   ap_memory|     real_out_1|         array|
|real_out_1_d0           |  out|   32|   ap_memory|     real_out_1|         array|
|imag_out_0_address0     |  out|    4|   ap_memory|     imag_out_0|         array|
|imag_out_0_ce0          |  out|    1|   ap_memory|     imag_out_0|         array|
|imag_out_0_we0          |  out|    1|   ap_memory|     imag_out_0|         array|
|imag_out_0_d0           |  out|   32|   ap_memory|     imag_out_0|         array|
|imag_out_1_address0     |  out|    4|   ap_memory|     imag_out_1|         array|
|imag_out_1_ce0          |  out|    1|   ap_memory|     imag_out_1|         array|
|imag_out_1_we0          |  out|    1|   ap_memory|     imag_out_1|         array|
|imag_out_1_d0           |  out|   32|   ap_memory|     imag_out_1|         array|
+------------------------+-----+-----+------------+---------------+--------------+

rm dft_test.bin
## N=4
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 00:16:48 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.04 seconds. Elapsed time: 2.72 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.56 seconds. CPU system time: 0.74 seconds. Elapsed time: 1.43 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 67 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 521 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 752 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 560 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 560 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 560 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 560 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 560 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 560 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,608 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 624 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 730 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 735 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_28_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:28:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_28_2' (dft.cpp:28:22) in function 'dft' completely with a factor of 32 (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_sample': Block partitioning with factor 4 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_sample': Block partitioning with factor 4 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_out': Block partitioning with factor 4 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_out': Block partitioning with factor 4 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.99 seconds. CPU system time: 0.96 seconds. Elapsed time: 9.18 seconds; current allocated memory: 670.301 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.301 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 671.168 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 671.203 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.2 seconds; current allocated memory: 694.723 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.12 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 695.426 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 172, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.42 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.53 seconds; current allocated memory: 699.406 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.19 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 701.105 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.18 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.27 seconds; current allocated memory: 703.453 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 703.488 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_22_1' is 20982 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.23 seconds. CPU system time: 0.12 seconds. Elapsed time: 1.91 seconds; current allocated memory: 729.234 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.75 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.1 seconds; current allocated memory: 740.906 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.71 seconds. CPU system time: 0.47 seconds. Elapsed time: 3.51 seconds; current allocated memory: 744.348 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 1.28 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.59 seconds; current allocated memory: 753.934 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:23; Allocated memory: 110.711 MB.
INFO: [HLS 200-112] Total CPU user time: 16.78 seconds. Total CPU system time: 4.26 seconds. Total elapsed time: 36.09 seconds; peak allocated memory: 753.934 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 38s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 00:17:20 2026

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
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |      209|      209|  2.090 us|  2.090 us|  210|  210|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                         |                              |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                |            Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_842  |dft_Pipeline_VITIS_LOOP_22_1  |      204|      204|  2.040 us|  2.040 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Instance         |       64|  640|   55463|  91232|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    437|    -|
|Register         |        -|    -|    3591|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|  640|   59054|  91669|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|  290|      55|    172|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |                 Instance                |            Module            | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_842  |dft_Pipeline_VITIS_LOOP_22_1  |       64|  640|  55463|  91232|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |Total                                    |                              |       64|  640|  55463|  91232|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +------------------------------+----+-----------+-----+-----------+
    |             Name             | LUT| Input Size| Bits| Total Bits|
    +------------------------------+----+-----------+-----+-----------+
    |ap_NS_fsm                     |  37|          7|    1|          7|
    |imag_sample_0_address0_local  |  25|          5|    3|         15|
    |imag_sample_0_address1_local  |  25|          5|    3|         15|
    |imag_sample_1_address0_local  |  25|          5|    3|         15|
    |imag_sample_1_address1_local  |  25|          5|    3|         15|
    |imag_sample_2_address0_local  |  25|          5|    3|         15|
    |imag_sample_2_address1_local  |  25|          5|    3|         15|
    |imag_sample_3_address0_local  |  25|          5|    3|         15|
    |imag_sample_3_address1_local  |  25|          5|    3|         15|
    |real_sample_0_address0_local  |  25|          5|    3|         15|
    |real_sample_0_address1_local  |  25|          5|    3|         15|
    |real_sample_1_address0_local  |  25|          5|    3|         15|
    |real_sample_1_address1_local  |  25|          5|    3|         15|
    |real_sample_2_address0_local  |  25|          5|    3|         15|
    |real_sample_2_address1_local  |  25|          5|    3|         15|
    |real_sample_3_address0_local  |  25|          5|    3|         15|
    |real_sample_3_address1_local  |  25|          5|    3|         15|
    +------------------------------+----+-----------+-----+-----------+
    |Total                         | 437|         87|   49|        247|
    +------------------------------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------+----+----+-----+-----------+
    |                         Name                         | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                             |   6|   0|    6|          0|
    |empty_100_reg_2041                                    |  32|   0|   32|          0|
    |empty_101_reg_2046                                    |  32|   0|   32|          0|
    |empty_102_reg_2051                                    |  32|   0|   32|          0|
    |empty_103_reg_2056                                    |  32|   0|   32|          0|
    |empty_104_reg_2061                                    |  32|   0|   32|          0|
    |empty_105_reg_2066                                    |  32|   0|   32|          0|
    |empty_106_reg_2071                                    |  32|   0|   32|          0|
    |empty_107_reg_2076                                    |  32|   0|   32|          0|
    |empty_108_reg_2081                                    |  32|   0|   32|          0|
    |empty_109_reg_2086                                    |  32|   0|   32|          0|
    |empty_110_reg_2091                                    |  32|   0|   32|          0|
    |empty_111_reg_2096                                    |  32|   0|   32|          0|
    |empty_112_reg_2101                                    |  32|   0|   32|          0|
    |empty_113_reg_2106                                    |  32|   0|   32|          0|
    |empty_114_reg_2111                                    |  32|   0|   32|          0|
    |empty_115_reg_2116                                    |  32|   0|   32|          0|
    |empty_116_reg_2121                                    |  32|   0|   32|          0|
    |empty_117_reg_2126                                    |  32|   0|   32|          0|
    |empty_118_reg_2131                                    |  32|   0|   32|          0|
    |empty_119_reg_2136                                    |  32|   0|   32|          0|
    |empty_120_reg_2141                                    |  32|   0|   32|          0|
    |empty_121_reg_2146                                    |  32|   0|   32|          0|
    |empty_122_reg_2151                                    |  32|   0|   32|          0|
    |empty_123_reg_2156                                    |  32|   0|   32|          0|
    |empty_124_reg_2161                                    |  32|   0|   32|          0|
    |empty_125_reg_2166                                    |  32|   0|   32|          0|
    |empty_126_reg_2171                                    |  32|   0|   32|          0|
    |empty_127_reg_2176                                    |  32|   0|   32|          0|
    |empty_128_reg_2181                                    |  32|   0|   32|          0|
    |empty_129_reg_2186                                    |  32|   0|   32|          0|
    |empty_130_reg_2191                                    |  32|   0|   32|          0|
    |empty_131_reg_2196                                    |  32|   0|   32|          0|
    |empty_132_reg_2201                                    |  32|   0|   32|          0|
    |empty_70_reg_1891                                     |  32|   0|   32|          0|
    |empty_71_reg_1896                                     |  32|   0|   32|          0|
    |empty_72_reg_1901                                     |  32|   0|   32|          0|
    |empty_73_reg_1906                                     |  32|   0|   32|          0|
    |empty_74_reg_1911                                     |  32|   0|   32|          0|
    |empty_75_reg_1916                                     |  32|   0|   32|          0|
    |empty_76_reg_1921                                     |  32|   0|   32|          0|
    |empty_77_reg_1926                                     |  32|   0|   32|          0|
    |empty_78_reg_1931                                     |  32|   0|   32|          0|
    |empty_79_reg_1936                                     |  32|   0|   32|          0|
    |empty_80_reg_1941                                     |  32|   0|   32|          0|
    |empty_81_reg_1946                                     |  32|   0|   32|          0|
    |empty_82_reg_1951                                     |  32|   0|   32|          0|
    |empty_83_reg_1956                                     |  32|   0|   32|          0|
    |empty_84_reg_1961                                     |  32|   0|   32|          0|
    |empty_85_reg_1966                                     |  32|   0|   32|          0|
    |empty_86_reg_1971                                     |  32|   0|   32|          0|
    |empty_87_reg_1976                                     |  32|   0|   32|          0|
    |empty_88_reg_1981                                     |  32|   0|   32|          0|
    |empty_89_reg_1986                                     |  32|   0|   32|          0|
    |empty_90_reg_1991                                     |  32|   0|   32|          0|
    |empty_91_reg_1996                                     |  32|   0|   32|          0|
    |empty_92_reg_2001                                     |  32|   0|   32|          0|
    |empty_93_reg_2006                                     |  32|   0|   32|          0|
    |empty_94_reg_2011                                     |  32|   0|   32|          0|
    |empty_95_reg_2016                                     |  32|   0|   32|          0|
    |empty_96_reg_2021                                     |  32|   0|   32|          0|
    |empty_97_reg_2026                                     |  32|   0|   32|          0|
    |empty_98_reg_2031                                     |  32|   0|   32|          0|
    |empty_99_reg_2036                                     |  32|   0|   32|          0|
    |empty_reg_1886                                        |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_842_ap_start_reg  |   1|   0|    1|          0|
    |imag_sample_0_load_1_reg_1421                         |  32|   0|   32|          0|
    |imag_sample_0_load_2_reg_1571                         |  32|   0|   32|          0|
    |imag_sample_0_load_3_reg_1581                         |  32|   0|   32|          0|
    |imag_sample_0_load_4_reg_1731                         |  32|   0|   32|          0|
    |imag_sample_0_load_5_reg_1741                         |  32|   0|   32|          0|
    |imag_sample_0_load_reg_1411                           |  32|   0|   32|          0|
    |imag_sample_1_load_1_reg_1461                         |  32|   0|   32|          0|
    |imag_sample_1_load_2_reg_1611                         |  32|   0|   32|          0|
    |imag_sample_1_load_3_reg_1621                         |  32|   0|   32|          0|
    |imag_sample_1_load_4_reg_1771                         |  32|   0|   32|          0|
    |imag_sample_1_load_5_reg_1781                         |  32|   0|   32|          0|
    |imag_sample_1_load_reg_1451                           |  32|   0|   32|          0|
    |imag_sample_2_load_1_reg_1501                         |  32|   0|   32|          0|
    |imag_sample_2_load_2_reg_1651                         |  32|   0|   32|          0|
    |imag_sample_2_load_3_reg_1661                         |  32|   0|   32|          0|
    |imag_sample_2_load_4_reg_1811                         |  32|   0|   32|          0|
    |imag_sample_2_load_5_reg_1821                         |  32|   0|   32|          0|
    |imag_sample_2_load_reg_1491                           |  32|   0|   32|          0|
    |imag_sample_3_load_1_reg_1541                         |  32|   0|   32|          0|
    |imag_sample_3_load_2_reg_1691                         |  32|   0|   32|          0|
    |imag_sample_3_load_3_reg_1701                         |  32|   0|   32|          0|
    |imag_sample_3_load_4_reg_1851                         |  32|   0|   32|          0|
    |imag_sample_3_load_5_reg_1861                         |  32|   0|   32|          0|
    |imag_sample_3_load_reg_1531                           |  32|   0|   32|          0|
    |real_sample_0_load_1_reg_1416                         |  32|   0|   32|          0|
    |real_sample_0_load_2_reg_1566                         |  32|   0|   32|          0|
    |real_sample_0_load_3_reg_1576                         |  32|   0|   32|          0|
    |real_sample_0_load_4_reg_1726                         |  32|   0|   32|          0|
    |real_sample_0_load_5_reg_1736                         |  32|   0|   32|          0|
    |real_sample_0_load_reg_1406                           |  32|   0|   32|          0|
    |real_sample_1_load_1_reg_1456                         |  32|   0|   32|          0|
    |real_sample_1_load_2_reg_1606                         |  32|   0|   32|          0|
    |real_sample_1_load_3_reg_1616                         |  32|   0|   32|          0|
    |real_sample_1_load_4_reg_1766                         |  32|   0|   32|          0|
    |real_sample_1_load_5_reg_1776                         |  32|   0|   32|          0|
    |real_sample_1_load_reg_1446                           |  32|   0|   32|          0|
    |real_sample_2_load_1_reg_1496                         |  32|   0|   32|          0|
    |real_sample_2_load_2_reg_1646                         |  32|   0|   32|          0|
    |real_sample_2_load_3_reg_1656                         |  32|   0|   32|          0|
    |real_sample_2_load_4_reg_1806                         |  32|   0|   32|          0|
    |real_sample_2_load_5_reg_1816                         |  32|   0|   32|          0|
    |real_sample_2_load_reg_1486                           |  32|   0|   32|          0|
    |real_sample_3_load_1_reg_1536                         |  32|   0|   32|          0|
    |real_sample_3_load_2_reg_1686                         |  32|   0|   32|          0|
    |real_sample_3_load_3_reg_1696                         |  32|   0|   32|          0|
    |real_sample_3_load_4_reg_1846                         |  32|   0|   32|          0|
    |real_sample_3_load_5_reg_1856                         |  32|   0|   32|          0|
    |real_sample_3_load_reg_1526                           |  32|   0|   32|          0|
    +------------------------------------------------------+----+----+-----+-----------+
    |Total                                                 |3591|   0| 3591|          0|
    +------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+------------------------+-----+-----+------------+---------------+--------------+
|        RTL Ports       | Dir | Bits|  Protocol  | Source Object |    C Type    |
+------------------------+-----+-----+------------+---------------+--------------+
|ap_clk                  |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_rst                  |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_start                |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_done                 |  out|    1|  ap_ctrl_hs|            dft|  return value|
|ap_idle                 |  out|    1|  ap_ctrl_hs|            dft|  return value|
|ap_ready                |  out|    1|  ap_ctrl_hs|            dft|  return value|
|real_sample_0_address0  |  out|    3|   ap_memory|  real_sample_0|         array|
|real_sample_0_ce0       |  out|    1|   ap_memory|  real_sample_0|         array|
|real_sample_0_q0        |   in|   32|   ap_memory|  real_sample_0|         array|
|real_sample_0_address1  |  out|    3|   ap_memory|  real_sample_0|         array|
|real_sample_0_ce1       |  out|    1|   ap_memory|  real_sample_0|         array|
|real_sample_0_q1        |   in|   32|   ap_memory|  real_sample_0|         array|
|real_sample_1_address0  |  out|    3|   ap_memory|  real_sample_1|         array|
|real_sample_1_ce0       |  out|    1|   ap_memory|  real_sample_1|         array|
|real_sample_1_q0        |   in|   32|   ap_memory|  real_sample_1|         array|
|real_sample_1_address1  |  out|    3|   ap_memory|  real_sample_1|         array|
|real_sample_1_ce1       |  out|    1|   ap_memory|  real_sample_1|         array|
|real_sample_1_q1        |   in|   32|   ap_memory|  real_sample_1|         array|
|real_sample_2_address0  |  out|    3|   ap_memory|  real_sample_2|         array|
|real_sample_2_ce0       |  out|    1|   ap_memory|  real_sample_2|         array|
|real_sample_2_q0        |   in|   32|   ap_memory|  real_sample_2|         array|
|real_sample_2_address1  |  out|    3|   ap_memory|  real_sample_2|         array|
|real_sample_2_ce1       |  out|    1|   ap_memory|  real_sample_2|         array|
|real_sample_2_q1        |   in|   32|   ap_memory|  real_sample_2|         array|
|real_sample_3_address0  |  out|    3|   ap_memory|  real_sample_3|         array|
|real_sample_3_ce0       |  out|    1|   ap_memory|  real_sample_3|         array|
|real_sample_3_q0        |   in|   32|   ap_memory|  real_sample_3|         array|
|real_sample_3_address1  |  out|    3|   ap_memory|  real_sample_3|         array|
|real_sample_3_ce1       |  out|    1|   ap_memory|  real_sample_3|         array|
|real_sample_3_q1        |   in|   32|   ap_memory|  real_sample_3|         array|
|imag_sample_0_address0  |  out|    3|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_ce0       |  out|    1|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_q0        |   in|   32|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_address1  |  out|    3|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_ce1       |  out|    1|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_q1        |   in|   32|   ap_memory|  imag_sample_0|         array|
|imag_sample_1_address0  |  out|    3|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_ce0       |  out|    1|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_q0        |   in|   32|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_address1  |  out|    3|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_ce1       |  out|    1|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_q1        |   in|   32|   ap_memory|  imag_sample_1|         array|
|imag_sample_2_address0  |  out|    3|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_ce0       |  out|    1|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_q0        |   in|   32|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_address1  |  out|    3|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_ce1       |  out|    1|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_q1        |   in|   32|   ap_memory|  imag_sample_2|         array|
|imag_sample_3_address0  |  out|    3|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_ce0       |  out|    1|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_q0        |   in|   32|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_address1  |  out|    3|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_ce1       |  out|    1|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_q1        |   in|   32|   ap_memory|  imag_sample_3|         array|
|real_out_0_address0     |  out|    3|   ap_memory|     real_out_0|         array|
|real_out_0_ce0          |  out|    1|   ap_memory|     real_out_0|         array|
|real_out_0_we0          |  out|    1|   ap_memory|     real_out_0|         array|
|real_out_0_d0           |  out|   32|   ap_memory|     real_out_0|         array|
|real_out_1_address0     |  out|    3|   ap_memory|     real_out_1|         array|
|real_out_1_ce0          |  out|    1|   ap_memory|     real_out_1|         array|
|real_out_1_we0          |  out|    1|   ap_memory|     real_out_1|         array|
|real_out_1_d0           |  out|   32|   ap_memory|     real_out_1|         array|
|real_out_2_address0     |  out|    3|   ap_memory|     real_out_2|         array|
|real_out_2_ce0          |  out|    1|   ap_memory|     real_out_2|         array|
|real_out_2_we0          |  out|    1|   ap_memory|     real_out_2|         array|
|real_out_2_d0           |  out|   32|   ap_memory|     real_out_2|         array|
|real_out_3_address0     |  out|    3|   ap_memory|     real_out_3|         array|
|real_out_3_ce0          |  out|    1|   ap_memory|     real_out_3|         array|
|real_out_3_we0          |  out|    1|   ap_memory|     real_out_3|         array|
|real_out_3_d0           |  out|   32|   ap_memory|     real_out_3|         array|
|imag_out_0_address0     |  out|    3|   ap_memory|     imag_out_0|         array|
|imag_out_0_ce0          |  out|    1|   ap_memory|     imag_out_0|         array|
|imag_out_0_we0          |  out|    1|   ap_memory|     imag_out_0|         array|
|imag_out_0_d0           |  out|   32|   ap_memory|     imag_out_0|         array|
|imag_out_1_address0     |  out|    3|   ap_memory|     imag_out_1|         array|
|imag_out_1_ce0          |  out|    1|   ap_memory|     imag_out_1|         array|
|imag_out_1_we0          |  out|    1|   ap_memory|     imag_out_1|         array|
|imag_out_1_d0           |  out|   32|   ap_memory|     imag_out_1|         array|
|imag_out_2_address0     |  out|    3|   ap_memory|     imag_out_2|         array|
|imag_out_2_ce0          |  out|    1|   ap_memory|     imag_out_2|         array|
|imag_out_2_we0          |  out|    1|   ap_memory|     imag_out_2|         array|
|imag_out_2_d0           |  out|   32|   ap_memory|     imag_out_2|         array|
|imag_out_3_address0     |  out|    3|   ap_memory|     imag_out_3|         array|
|imag_out_3_ce0          |  out|    1|   ap_memory|     imag_out_3|         array|
|imag_out_3_we0          |  out|    1|   ap_memory|     imag_out_3|         array|
|imag_out_3_d0           |  out|   32|   ap_memory|     imag_out_3|         array|
+------------------------+-----+-----+------------+---------------+--------------+

rm dft_test.bin
## N=8
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 00:18:20 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.16 seconds. CPU system time: 0.04 seconds. Elapsed time: 2.77 seconds; current allocated memory: 659.238 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.65 seconds. CPU system time: 0.73 seconds. Elapsed time: 1.48 seconds; current allocated memory: 660.531 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 67 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 521 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,040 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 592 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 592 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 592 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 592 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 592 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 592 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,640 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 802 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 807 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_28_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:28:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_28_2' (dft.cpp:28:22) in function 'dft' completely with a factor of 32 (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_sample': Block partitioning with factor 8 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_sample': Block partitioning with factor 8 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_out': Block partitioning with factor 8 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_out': Block partitioning with factor 8 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.17 seconds. CPU system time: 0.92 seconds. Elapsed time: 9.37 seconds; current allocated memory: 670.270 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.270 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 671.215 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 671.277 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.16 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.19 seconds; current allocated memory: 694.680 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.15 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 695.828 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 172, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.43 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.53 seconds; current allocated memory: 700.320 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.2 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 702.492 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.19 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.32 seconds; current allocated memory: 704.141 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 705.059 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_22_1' is 20982 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.23 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.88 seconds; current allocated memory: 731.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.89 seconds. CPU system time: 0.08 seconds. Elapsed time: 1.32 seconds; current allocated memory: 743.113 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.69 seconds. CPU system time: 0.4 seconds. Elapsed time: 3.24 seconds; current allocated memory: 747.320 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 2.22 seconds. CPU system time: 0.09 seconds. Elapsed time: 2.54 seconds; current allocated memory: 759.309 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:24; Allocated memory: 116.070 MB.
INFO: [HLS 200-112] Total CPU user time: 18.27 seconds. Total CPU system time: 3.92 seconds. Total elapsed time: 36.41 seconds; peak allocated memory: 759.309 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 38s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 00:18:52 2026

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
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |      207|      207|  2.070 us|  2.070 us|  208|  208|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                         |                              |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                |            Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_938  |dft_Pipeline_VITIS_LOOP_22_1  |      204|      204|  2.040 us|  2.040 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-----------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Instance         |       64|  640|   55463|  91232|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    473|    -|
|Register         |        -|    -|    3077|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|  640|   58540|  91705|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|  290|      55|    172|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |                 Instance                |            Module            | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_938  |dft_Pipeline_VITIS_LOOP_22_1  |       64|  640|  55463|  91232|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |Total                                    |                              |       64|  640|  55463|  91232|    0|
    +-----------------------------------------+------------------------------+---------+-----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +------------------------------+----+-----------+-----+-----------+
    |             Name             | LUT| Input Size| Bits| Total Bits|
    +------------------------------+----+-----------+-----+-----------+
    |ap_NS_fsm                     |  25|          5|    1|          5|
    |imag_sample_0_address0_local  |  14|          3|    2|          6|
    |imag_sample_0_address1_local  |  14|          3|    2|          6|
    |imag_sample_1_address0_local  |  14|          3|    2|          6|
    |imag_sample_1_address1_local  |  14|          3|    2|          6|
    |imag_sample_2_address0_local  |  14|          3|    2|          6|
    |imag_sample_2_address1_local  |  14|          3|    2|          6|
    |imag_sample_3_address0_local  |  14|          3|    2|          6|
    |imag_sample_3_address1_local  |  14|          3|    2|          6|
    |imag_sample_4_address0_local  |  14|          3|    2|          6|
    |imag_sample_4_address1_local  |  14|          3|    2|          6|
    |imag_sample_5_address0_local  |  14|          3|    2|          6|
    |imag_sample_5_address1_local  |  14|          3|    2|          6|
    |imag_sample_6_address0_local  |  14|          3|    2|          6|
    |imag_sample_6_address1_local  |  14|          3|    2|          6|
    |imag_sample_7_address0_local  |  14|          3|    2|          6|
    |imag_sample_7_address1_local  |  14|          3|    2|          6|
    |real_sample_0_address0_local  |  14|          3|    2|          6|
    |real_sample_0_address1_local  |  14|          3|    2|          6|
    |real_sample_1_address0_local  |  14|          3|    2|          6|
    |real_sample_1_address1_local  |  14|          3|    2|          6|
    |real_sample_2_address0_local  |  14|          3|    2|          6|
    |real_sample_2_address1_local  |  14|          3|    2|          6|
    |real_sample_3_address0_local  |  14|          3|    2|          6|
    |real_sample_3_address1_local  |  14|          3|    2|          6|
    |real_sample_4_address0_local  |  14|          3|    2|          6|
    |real_sample_4_address1_local  |  14|          3|    2|          6|
    |real_sample_5_address0_local  |  14|          3|    2|          6|
    |real_sample_5_address1_local  |  14|          3|    2|          6|
    |real_sample_6_address0_local  |  14|          3|    2|          6|
    |real_sample_6_address1_local  |  14|          3|    2|          6|
    |real_sample_7_address0_local  |  14|          3|    2|          6|
    |real_sample_7_address1_local  |  14|          3|    2|          6|
    +------------------------------+----+-----------+-----+-----------+
    |Total                         | 473|        101|   65|        197|
    +------------------------------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------+----+----+-----+-----------+
    |                         Name                         | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                             |   4|   0|    4|          0|
    |empty_100_reg_2089                                    |  32|   0|   32|          0|
    |empty_101_reg_2094                                    |  32|   0|   32|          0|
    |empty_102_reg_2099                                    |  32|   0|   32|          0|
    |empty_103_reg_2104                                    |  32|   0|   32|          0|
    |empty_104_reg_2109                                    |  32|   0|   32|          0|
    |empty_105_reg_2114                                    |  32|   0|   32|          0|
    |empty_106_reg_2119                                    |  32|   0|   32|          0|
    |empty_107_reg_2124                                    |  32|   0|   32|          0|
    |empty_108_reg_2129                                    |  32|   0|   32|          0|
    |empty_109_reg_2134                                    |  32|   0|   32|          0|
    |empty_110_reg_2139                                    |  32|   0|   32|          0|
    |empty_111_reg_2144                                    |  32|   0|   32|          0|
    |empty_112_reg_2149                                    |  32|   0|   32|          0|
    |empty_113_reg_2154                                    |  32|   0|   32|          0|
    |empty_114_reg_2159                                    |  32|   0|   32|          0|
    |empty_115_reg_2164                                    |  32|   0|   32|          0|
    |empty_116_reg_2169                                    |  32|   0|   32|          0|
    |empty_117_reg_2174                                    |  32|   0|   32|          0|
    |empty_118_reg_2179                                    |  32|   0|   32|          0|
    |empty_119_reg_2184                                    |  32|   0|   32|          0|
    |empty_120_reg_2189                                    |  32|   0|   32|          0|
    |empty_121_reg_2194                                    |  32|   0|   32|          0|
    |empty_122_reg_2199                                    |  32|   0|   32|          0|
    |empty_123_reg_2204                                    |  32|   0|   32|          0|
    |empty_124_reg_2209                                    |  32|   0|   32|          0|
    |empty_125_reg_2214                                    |  32|   0|   32|          0|
    |empty_126_reg_2219                                    |  32|   0|   32|          0|
    |empty_127_reg_2224                                    |  32|   0|   32|          0|
    |empty_128_reg_2229                                    |  32|   0|   32|          0|
    |empty_129_reg_2234                                    |  32|   0|   32|          0|
    |empty_130_reg_2239                                    |  32|   0|   32|          0|
    |empty_131_reg_2244                                    |  32|   0|   32|          0|
    |empty_132_reg_2249                                    |  32|   0|   32|          0|
    |empty_70_reg_1939                                     |  32|   0|   32|          0|
    |empty_71_reg_1944                                     |  32|   0|   32|          0|
    |empty_72_reg_1949                                     |  32|   0|   32|          0|
    |empty_73_reg_1954                                     |  32|   0|   32|          0|
    |empty_74_reg_1959                                     |  32|   0|   32|          0|
    |empty_75_reg_1964                                     |  32|   0|   32|          0|
    |empty_76_reg_1969                                     |  32|   0|   32|          0|
    |empty_77_reg_1974                                     |  32|   0|   32|          0|
    |empty_78_reg_1979                                     |  32|   0|   32|          0|
    |empty_79_reg_1984                                     |  32|   0|   32|          0|
    |empty_80_reg_1989                                     |  32|   0|   32|          0|
    |empty_81_reg_1994                                     |  32|   0|   32|          0|
    |empty_82_reg_1999                                     |  32|   0|   32|          0|
    |empty_83_reg_2004                                     |  32|   0|   32|          0|
    |empty_84_reg_2009                                     |  32|   0|   32|          0|
    |empty_85_reg_2014                                     |  32|   0|   32|          0|
    |empty_86_reg_2019                                     |  32|   0|   32|          0|
    |empty_87_reg_2024                                     |  32|   0|   32|          0|
    |empty_88_reg_2029                                     |  32|   0|   32|          0|
    |empty_89_reg_2034                                     |  32|   0|   32|          0|
    |empty_90_reg_2039                                     |  32|   0|   32|          0|
    |empty_91_reg_2044                                     |  32|   0|   32|          0|
    |empty_92_reg_2049                                     |  32|   0|   32|          0|
    |empty_93_reg_2054                                     |  32|   0|   32|          0|
    |empty_94_reg_2059                                     |  32|   0|   32|          0|
    |empty_95_reg_2064                                     |  32|   0|   32|          0|
    |empty_96_reg_2069                                     |  32|   0|   32|          0|
    |empty_97_reg_2074                                     |  32|   0|   32|          0|
    |empty_98_reg_2079                                     |  32|   0|   32|          0|
    |empty_99_reg_2084                                     |  32|   0|   32|          0|
    |empty_reg_1934                                        |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_938_ap_start_reg  |   1|   0|    1|          0|
    |imag_sample_0_load_1_reg_1629                         |  32|   0|   32|          0|
    |imag_sample_0_load_reg_1619                           |  32|   0|   32|          0|
    |imag_sample_1_load_1_reg_1669                         |  32|   0|   32|          0|
    |imag_sample_1_load_reg_1659                           |  32|   0|   32|          0|
    |imag_sample_2_load_1_reg_1709                         |  32|   0|   32|          0|
    |imag_sample_2_load_reg_1699                           |  32|   0|   32|          0|
    |imag_sample_3_load_1_reg_1749                         |  32|   0|   32|          0|
    |imag_sample_3_load_reg_1739                           |  32|   0|   32|          0|
    |imag_sample_4_load_1_reg_1789                         |  32|   0|   32|          0|
    |imag_sample_4_load_reg_1779                           |  32|   0|   32|          0|
    |imag_sample_5_load_1_reg_1829                         |  32|   0|   32|          0|
    |imag_sample_5_load_reg_1819                           |  32|   0|   32|          0|
    |imag_sample_6_load_1_reg_1869                         |  32|   0|   32|          0|
    |imag_sample_6_load_reg_1859                           |  32|   0|   32|          0|
    |imag_sample_7_load_1_reg_1909                         |  32|   0|   32|          0|
    |imag_sample_7_load_reg_1899                           |  32|   0|   32|          0|
    |real_sample_0_load_1_reg_1624                         |  32|   0|   32|          0|
    |real_sample_0_load_reg_1614                           |  32|   0|   32|          0|
    |real_sample_1_load_1_reg_1664                         |  32|   0|   32|          0|
    |real_sample_1_load_reg_1654                           |  32|   0|   32|          0|
    |real_sample_2_load_1_reg_1704                         |  32|   0|   32|          0|
    |real_sample_2_load_reg_1694                           |  32|   0|   32|          0|
    |real_sample_3_load_1_reg_1744                         |  32|   0|   32|          0|
    |real_sample_3_load_reg_1734                           |  32|   0|   32|          0|
    |real_sample_4_load_1_reg_1784                         |  32|   0|   32|          0|
    |real_sample_4_load_reg_1774                           |  32|   0|   32|          0|
    |real_sample_5_load_1_reg_1824                         |  32|   0|   32|          0|
    |real_sample_5_load_reg_1814                           |  32|   0|   32|          0|
    |real_sample_6_load_1_reg_1864                         |  32|   0|   32|          0|
    |real_sample_6_load_reg_1854                           |  32|   0|   32|          0|
    |real_sample_7_load_1_reg_1904                         |  32|   0|   32|          0|
    |real_sample_7_load_reg_1894                           |  32|   0|   32|          0|
    +------------------------------------------------------+----+----+-----+-----------+
    |Total                                                 |3077|   0| 3077|          0|
    +------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+------------------------+-----+-----+------------+---------------+--------------+
|        RTL Ports       | Dir | Bits|  Protocol  | Source Object |    C Type    |
+------------------------+-----+-----+------------+---------------+--------------+
|ap_clk                  |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_rst                  |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_start                |   in|    1|  ap_ctrl_hs|            dft|  return value|
|ap_done                 |  out|    1|  ap_ctrl_hs|            dft|  return value|
|ap_idle                 |  out|    1|  ap_ctrl_hs|            dft|  return value|
|ap_ready                |  out|    1|  ap_ctrl_hs|            dft|  return value|
|real_sample_0_address0  |  out|    2|   ap_memory|  real_sample_0|         array|
|real_sample_0_ce0       |  out|    1|   ap_memory|  real_sample_0|         array|
|real_sample_0_q0        |   in|   32|   ap_memory|  real_sample_0|         array|
|real_sample_0_address1  |  out|    2|   ap_memory|  real_sample_0|         array|
|real_sample_0_ce1       |  out|    1|   ap_memory|  real_sample_0|         array|
|real_sample_0_q1        |   in|   32|   ap_memory|  real_sample_0|         array|
|real_sample_1_address0  |  out|    2|   ap_memory|  real_sample_1|         array|
|real_sample_1_ce0       |  out|    1|   ap_memory|  real_sample_1|         array|
|real_sample_1_q0        |   in|   32|   ap_memory|  real_sample_1|         array|
|real_sample_1_address1  |  out|    2|   ap_memory|  real_sample_1|         array|
|real_sample_1_ce1       |  out|    1|   ap_memory|  real_sample_1|         array|
|real_sample_1_q1        |   in|   32|   ap_memory|  real_sample_1|         array|
|real_sample_2_address0  |  out|    2|   ap_memory|  real_sample_2|         array|
|real_sample_2_ce0       |  out|    1|   ap_memory|  real_sample_2|         array|
|real_sample_2_q0        |   in|   32|   ap_memory|  real_sample_2|         array|
|real_sample_2_address1  |  out|    2|   ap_memory|  real_sample_2|         array|
|real_sample_2_ce1       |  out|    1|   ap_memory|  real_sample_2|         array|
|real_sample_2_q1        |   in|   32|   ap_memory|  real_sample_2|         array|
|real_sample_3_address0  |  out|    2|   ap_memory|  real_sample_3|         array|
|real_sample_3_ce0       |  out|    1|   ap_memory|  real_sample_3|         array|
|real_sample_3_q0        |   in|   32|   ap_memory|  real_sample_3|         array|
|real_sample_3_address1  |  out|    2|   ap_memory|  real_sample_3|         array|
|real_sample_3_ce1       |  out|    1|   ap_memory|  real_sample_3|         array|
|real_sample_3_q1        |   in|   32|   ap_memory|  real_sample_3|         array|
|real_sample_4_address0  |  out|    2|   ap_memory|  real_sample_4|         array|
|real_sample_4_ce0       |  out|    1|   ap_memory|  real_sample_4|         array|
|real_sample_4_q0        |   in|   32|   ap_memory|  real_sample_4|         array|
|real_sample_4_address1  |  out|    2|   ap_memory|  real_sample_4|         array|
|real_sample_4_ce1       |  out|    1|   ap_memory|  real_sample_4|         array|
|real_sample_4_q1        |   in|   32|   ap_memory|  real_sample_4|         array|
|real_sample_5_address0  |  out|    2|   ap_memory|  real_sample_5|         array|
|real_sample_5_ce0       |  out|    1|   ap_memory|  real_sample_5|         array|
|real_sample_5_q0        |   in|   32|   ap_memory|  real_sample_5|         array|
|real_sample_5_address1  |  out|    2|   ap_memory|  real_sample_5|         array|
|real_sample_5_ce1       |  out|    1|   ap_memory|  real_sample_5|         array|
|real_sample_5_q1        |   in|   32|   ap_memory|  real_sample_5|         array|
|real_sample_6_address0  |  out|    2|   ap_memory|  real_sample_6|         array|
|real_sample_6_ce0       |  out|    1|   ap_memory|  real_sample_6|         array|
|real_sample_6_q0        |   in|   32|   ap_memory|  real_sample_6|         array|
|real_sample_6_address1  |  out|    2|   ap_memory|  real_sample_6|         array|
|real_sample_6_ce1       |  out|    1|   ap_memory|  real_sample_6|         array|
|real_sample_6_q1        |   in|   32|   ap_memory|  real_sample_6|         array|
|real_sample_7_address0  |  out|    2|   ap_memory|  real_sample_7|         array|
|real_sample_7_ce0       |  out|    1|   ap_memory|  real_sample_7|         array|
|real_sample_7_q0        |   in|   32|   ap_memory|  real_sample_7|         array|
|real_sample_7_address1  |  out|    2|   ap_memory|  real_sample_7|         array|
|real_sample_7_ce1       |  out|    1|   ap_memory|  real_sample_7|         array|
|real_sample_7_q1        |   in|   32|   ap_memory|  real_sample_7|         array|
|imag_sample_0_address0  |  out|    2|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_ce0       |  out|    1|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_q0        |   in|   32|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_address1  |  out|    2|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_ce1       |  out|    1|   ap_memory|  imag_sample_0|         array|
|imag_sample_0_q1        |   in|   32|   ap_memory|  imag_sample_0|         array|
|imag_sample_1_address0  |  out|    2|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_ce0       |  out|    1|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_q0        |   in|   32|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_address1  |  out|    2|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_ce1       |  out|    1|   ap_memory|  imag_sample_1|         array|
|imag_sample_1_q1        |   in|   32|   ap_memory|  imag_sample_1|         array|
|imag_sample_2_address0  |  out|    2|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_ce0       |  out|    1|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_q0        |   in|   32|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_address1  |  out|    2|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_ce1       |  out|    1|   ap_memory|  imag_sample_2|         array|
|imag_sample_2_q1        |   in|   32|   ap_memory|  imag_sample_2|         array|
|imag_sample_3_address0  |  out|    2|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_ce0       |  out|    1|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_q0        |   in|   32|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_address1  |  out|    2|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_ce1       |  out|    1|   ap_memory|  imag_sample_3|         array|
|imag_sample_3_q1        |   in|   32|   ap_memory|  imag_sample_3|         array|
|imag_sample_4_address0  |  out|    2|   ap_memory|  imag_sample_4|         array|
|imag_sample_4_ce0       |  out|    1|   ap_memory|  imag_sample_4|         array|
|imag_sample_4_q0        |   in|   32|   ap_memory|  imag_sample_4|         array|
|imag_sample_4_address1  |  out|    2|   ap_memory|  imag_sample_4|         array|
|imag_sample_4_ce1       |  out|    1|   ap_memory|  imag_sample_4|         array|
|imag_sample_4_q1        |   in|   32|   ap_memory|  imag_sample_4|         array|
|imag_sample_5_address0  |  out|    2|   ap_memory|  imag_sample_5|         array|
|imag_sample_5_ce0       |  out|    1|   ap_memory|  imag_sample_5|         array|
|imag_sample_5_q0        |   in|   32|   ap_memory|  imag_sample_5|         array|
|imag_sample_5_address1  |  out|    2|   ap_memory|  imag_sample_5|         array|
|imag_sample_5_ce1       |  out|    1|   ap_memory|  imag_sample_5|         array|
|imag_sample_5_q1        |   in|   32|   ap_memory|  imag_sample_5|         array|
|imag_sample_6_address0  |  out|    2|   ap_memory|  imag_sample_6|         array|
|imag_sample_6_ce0       |  out|    1|   ap_memory|  imag_sample_6|         array|
|imag_sample_6_q0        |   in|   32|   ap_memory|  imag_sample_6|         array|
|imag_sample_6_address1  |  out|    2|   ap_memory|  imag_sample_6|         array|
|imag_sample_6_ce1       |  out|    1|   ap_memory|  imag_sample_6|         array|
|imag_sample_6_q1        |   in|   32|   ap_memory|  imag_sample_6|         array|
|imag_sample_7_address0  |  out|    2|   ap_memory|  imag_sample_7|         array|
|imag_sample_7_ce0       |  out|    1|   ap_memory|  imag_sample_7|         array|
|imag_sample_7_q0        |   in|   32|   ap_memory|  imag_sample_7|         array|
|imag_sample_7_address1  |  out|    2|   ap_memory|  imag_sample_7|         array|
|imag_sample_7_ce1       |  out|    1|   ap_memory|  imag_sample_7|         array|
|imag_sample_7_q1        |   in|   32|   ap_memory|  imag_sample_7|         array|
|real_out_0_address0     |  out|    2|   ap_memory|     real_out_0|         array|
|real_out_0_ce0          |  out|    1|   ap_memory|     real_out_0|         array|
|real_out_0_we0          |  out|    1|   ap_memory|     real_out_0|         array|
|real_out_0_d0           |  out|   32|   ap_memory|     real_out_0|         array|
|real_out_1_address0     |  out|    2|   ap_memory|     real_out_1|         array|
|real_out_1_ce0          |  out|    1|   ap_memory|     real_out_1|         array|
|real_out_1_we0          |  out|    1|   ap_memory|     real_out_1|         array|
|real_out_1_d0           |  out|   32|   ap_memory|     real_out_1|         array|
|real_out_2_address0     |  out|    2|   ap_memory|     real_out_2|         array|
|real_out_2_ce0          |  out|    1|   ap_memory|     real_out_2|         array|
|real_out_2_we0          |  out|    1|   ap_memory|     real_out_2|         array|
|real_out_2_d0           |  out|   32|   ap_memory|     real_out_2|         array|
|real_out_3_address0     |  out|    2|   ap_memory|     real_out_3|         array|
|real_out_3_ce0          |  out|    1|   ap_memory|     real_out_3|         array|
|real_out_3_we0          |  out|    1|   ap_memory|     real_out_3|         array|
|real_out_3_d0           |  out|   32|   ap_memory|     real_out_3|         array|
|real_out_4_address0     |  out|    2|   ap_memory|     real_out_4|         array|
|real_out_4_ce0          |  out|    1|   ap_memory|     real_out_4|         array|
|real_out_4_we0          |  out|    1|   ap_memory|     real_out_4|         array|
|real_out_4_d0           |  out|   32|   ap_memory|     real_out_4|         array|
|real_out_5_address0     |  out|    2|   ap_memory|     real_out_5|         array|
|real_out_5_ce0          |  out|    1|   ap_memory|     real_out_5|         array|
|real_out_5_we0          |  out|    1|   ap_memory|     real_out_5|         array|
|real_out_5_d0           |  out|   32|   ap_memory|     real_out_5|         array|
|real_out_6_address0     |  out|    2|   ap_memory|     real_out_6|         array|
|real_out_6_ce0          |  out|    1|   ap_memory|     real_out_6|         array|
|real_out_6_we0          |  out|    1|   ap_memory|     real_out_6|         array|
|real_out_6_d0           |  out|   32|   ap_memory|     real_out_6|         array|
|real_out_7_address0     |  out|    2|   ap_memory|     real_out_7|         array|
|real_out_7_ce0          |  out|    1|   ap_memory|     real_out_7|         array|
|real_out_7_we0          |  out|    1|   ap_memory|     real_out_7|         array|
|real_out_7_d0           |  out|   32|   ap_memory|     real_out_7|         array|
|imag_out_0_address0     |  out|    2|   ap_memory|     imag_out_0|         array|
|imag_out_0_ce0          |  out|    1|   ap_memory|     imag_out_0|         array|
|imag_out_0_we0          |  out|    1|   ap_memory|     imag_out_0|         array|
|imag_out_0_d0           |  out|   32|   ap_memory|     imag_out_0|         array|
|imag_out_1_address0     |  out|    2|   ap_memory|     imag_out_1|         array|
|imag_out_1_ce0          |  out|    1|   ap_memory|     imag_out_1|         array|
|imag_out_1_we0          |  out|    1|   ap_memory|     imag_out_1|         array|
|imag_out_1_d0           |  out|   32|   ap_memory|     imag_out_1|         array|
|imag_out_2_address0     |  out|    2|   ap_memory|     imag_out_2|         array|
|imag_out_2_ce0          |  out|    1|   ap_memory|     imag_out_2|         array|
|imag_out_2_we0          |  out|    1|   ap_memory|     imag_out_2|         array|
|imag_out_2_d0           |  out|   32|   ap_memory|     imag_out_2|         array|
|imag_out_3_address0     |  out|    2|   ap_memory|     imag_out_3|         array|
|imag_out_3_ce0          |  out|    1|   ap_memory|     imag_out_3|         array|
|imag_out_3_we0          |  out|    1|   ap_memory|     imag_out_3|         array|
|imag_out_3_d0           |  out|   32|   ap_memory|     imag_out_3|         array|
|imag_out_4_address0     |  out|    2|   ap_memory|     imag_out_4|         array|
|imag_out_4_ce0          |  out|    1|   ap_memory|     imag_out_4|         array|
|imag_out_4_we0          |  out|    1|   ap_memory|     imag_out_4|         array|
|imag_out_4_d0           |  out|   32|   ap_memory|     imag_out_4|         array|
|imag_out_5_address0     |  out|    2|   ap_memory|     imag_out_5|         array|
|imag_out_5_ce0          |  out|    1|   ap_memory|     imag_out_5|         array|
|imag_out_5_we0          |  out|    1|   ap_memory|     imag_out_5|         array|
|imag_out_5_d0           |  out|   32|   ap_memory|     imag_out_5|         array|
|imag_out_6_address0     |  out|    2|   ap_memory|     imag_out_6|         array|
|imag_out_6_ce0          |  out|    1|   ap_memory|     imag_out_6|         array|
|imag_out_6_we0          |  out|    1|   ap_memory|     imag_out_6|         array|
|imag_out_6_d0           |  out|   32|   ap_memory|     imag_out_6|         array|
|imag_out_7_address0     |  out|    2|   ap_memory|     imag_out_7|         array|
|imag_out_7_ce0          |  out|    1|   ap_memory|     imag_out_7|         array|
|imag_out_7_we0          |  out|    1|   ap_memory|     imag_out_7|         array|
|imag_out_7_d0           |  out|   32|   ap_memory|     imag_out_7|         array|
+------------------------+-----+-----+------------+---------------+--------------+

rm dft_test.bin
## N=16
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 00:19:53 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.04 seconds. Elapsed time: 2.75 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.62 seconds. CPU system time: 0.75 seconds. Elapsed time: 1.47 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 67 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 521 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,616 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 656 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,704 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 720 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 946 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 951 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_28_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:28:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_28_2' (dft.cpp:28:22) in function 'dft' completely with a factor of 32 (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_sample': Block partitioning with factor 16 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_sample': Block partitioning with factor 16 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_out': Block partitioning with factor 16 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_out': Block partitioning with factor 16 on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.13 seconds. CPU system time: 0.93 seconds. Elapsed time: 9.54 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.21 seconds; current allocated memory: 671.328 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 671.613 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.24 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.35 seconds; current allocated memory: 695.418 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.22 seconds. CPU system time: 0 seconds. Elapsed time: 0.28 seconds; current allocated memory: 696.074 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 172, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.55 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.69 seconds; current allocated memory: 703.254 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.21 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.32 seconds; current allocated memory: 704.941 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.22 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.35 seconds; current allocated memory: 706.871 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.45 seconds; current allocated memory: 707.934 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_22_1' is 20982 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_22_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.18 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.86 seconds; current allocated memory: 734.410 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_8' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_9' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_10' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_11' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_12' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_13' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_14' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_15' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_8' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_9' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_10' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_11' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_12' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_13' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_14' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_15' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_8' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_9' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_10' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_11' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_12' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_13' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_14' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_15' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_0' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_1' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_2' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_3' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_4' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_5' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_6' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_7' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_8' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_9' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_10' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_11' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_12' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_13' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_14' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_15' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.89 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.62 seconds; current allocated memory: 747.383 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.6 seconds. CPU system time: 0.5 seconds. Elapsed time: 3.64 seconds; current allocated memory: 752.598 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 5.17 seconds. CPU system time: 0.08 seconds. Elapsed time: 5.48 seconds; current allocated memory: 769.113 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:29; Allocated memory: 125.891 MB.
INFO: [HLS 200-112] Total CPU user time: 21.38 seconds. Total CPU system time: 4.23 seconds. Total elapsed time: 41.81 seconds; peak allocated memory: 769.113 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 43s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 00:20:27 2026

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
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |      206|      206|  2.060 us|  2.060 us|  207|  207|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +------------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                          |                              |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                 |            Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +------------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_1142  |dft_Pipeline_VITIS_LOOP_22_1  |      204|      204|  2.040 us|  2.040 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +------------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Instance         |       64|  640|   55463|  91232|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     20|    -|
|Register         |        -|    -|    2052|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|  640|   57515|  91252|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|  290|      54|    171|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |                 Instance                 |            Module            | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_1142  |dft_Pipeline_VITIS_LOOP_22_1  |       64|  640|  55463|  91232|    0|
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |Total                                     |                              |       64|  640|  55463|  91232|    0|
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  20|          4|    1|          4|
    +-----------+----+-----------+-----+-----------+
    |Total      |  20|          4|    1|          4|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-------------------------------------------------------+----+----+-----+-----------+
    |                          Name                         | FF | LUT| Bits| Const Bits|
    +-------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                              |   3|   0|    3|          0|
    |empty_100_reg_2197                                     |  32|   0|   32|          0|
    |empty_101_reg_2202                                     |  32|   0|   32|          0|
    |empty_102_reg_2207                                     |  32|   0|   32|          0|
    |empty_103_reg_2212                                     |  32|   0|   32|          0|
    |empty_104_reg_2217                                     |  32|   0|   32|          0|
    |empty_105_reg_2222                                     |  32|   0|   32|          0|
    |empty_106_reg_2227                                     |  32|   0|   32|          0|
    |empty_107_reg_2232                                     |  32|   0|   32|          0|
    |empty_108_reg_2237                                     |  32|   0|   32|          0|
    |empty_109_reg_2242                                     |  32|   0|   32|          0|
    |empty_110_reg_2247                                     |  32|   0|   32|          0|
    |empty_111_reg_2252                                     |  32|   0|   32|          0|
    |empty_112_reg_2257                                     |  32|   0|   32|          0|
    |empty_113_reg_2262                                     |  32|   0|   32|          0|
    |empty_114_reg_2267                                     |  32|   0|   32|          0|
    |empty_115_reg_2272                                     |  32|   0|   32|          0|
    |empty_116_reg_2277                                     |  32|   0|   32|          0|
    |empty_117_reg_2282                                     |  32|   0|   32|          0|
    |empty_118_reg_2287                                     |  32|   0|   32|          0|
    |empty_119_reg_2292                                     |  32|   0|   32|          0|
    |empty_120_reg_2297                                     |  32|   0|   32|          0|
    |empty_121_reg_2302                                     |  32|   0|   32|          0|
    |empty_122_reg_2307                                     |  32|   0|   32|          0|
    |empty_123_reg_2312                                     |  32|   0|   32|          0|
    |empty_124_reg_2317                                     |  32|   0|   32|          0|
    |empty_125_reg_2322                                     |  32|   0|   32|          0|
    |empty_126_reg_2327                                     |  32|   0|   32|          0|
    |empty_127_reg_2332                                     |  32|   0|   32|          0|
    |empty_128_reg_2337                                     |  32|   0|   32|          0|
    |empty_129_reg_2342                                     |  32|   0|   32|          0|
    |empty_130_reg_2347                                     |  32|   0|   32|          0|
    |empty_131_reg_2352                                     |  32|   0|   32|          0|
    |empty_132_reg_2357                                     |  32|   0|   32|          0|
    |empty_70_reg_2047                                      |  32|   0|   32|          0|
    |empty_71_reg_2052                                      |  32|   0|   32|          0|
    |empty_72_reg_2057                                      |  32|   0|   32|          0|
    |empty_73_reg_2062                                      |  32|   0|   32|          0|
    |empty_74_reg_2067                                      |  32|   0|   32|          0|
    |empty_75_reg_2072                                      |  32|   0|   32|          0|
    |empty_76_reg_2077                                      |  32|   0|   32|          0|
    |empty_77_reg_2082                                      |  32|   0|   32|          0|
    |empty_78_reg_2087                                      |  32|   0|   32|          0|
    |empty_79_reg_2092                                      |  32|   0|   32|          0|
    |empty_80_reg_2097                                      |  32|   0|   32|          0|
    |empty_81_reg_2102                                      |  32|   0|   32|          0|
    |empty_82_reg_2107                                      |  32|   0|   32|          0|
    |empty_83_reg_2112                                      |  32|   0|   32|          0|
    |empty_84_reg_2117                                      |  32|   0|   32|          0|
    |empty_85_reg_2122                                      |  32|   0|   32|          0|
    |empty_86_reg_2127                                      |  32|   0|   32|          0|
    |empty_87_reg_2132                                      |  32|   0|   32|          0|
    |empty_88_reg_2137                                      |  32|   0|   32|          0|
    |empty_89_reg_2142                                      |  32|   0|   32|          0|
    |empty_90_reg_2147                                      |  32|   0|   32|          0|
    |empty_91_reg_2152                                      |  32|   0|   32|          0|
    |empty_92_reg_2157                                      |  32|   0|   32|          0|
    |empty_93_reg_2162                                      |  32|   0|   32|          0|
    |empty_94_reg_2167                                      |  32|   0|   32|          0|
    |empty_95_reg_2172                                      |  32|   0|   32|          0|
    |empty_96_reg_2177                                      |  32|   0|   32|          0|
    |empty_97_reg_2182                                      |  32|   0|   32|          0|
    |empty_98_reg_2187                                      |  32|   0|   32|          0|
    |empty_99_reg_2192                                      |  32|   0|   32|          0|
    |empty_reg_2042                                         |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_22_1_fu_1142_ap_start_reg  |   1|   0|    1|          0|
    +-------------------------------------------------------+----+----+-----+-----------+
    |Total                                                  |2052|   0| 2052|          0|
    +-------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+-------------------------+-----+-----+------------+----------------+--------------+
|        RTL Ports        | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+-------------------------+-----+-----+------------+----------------+--------------+
|ap_clk                   |   in|    1|  ap_ctrl_hs|             dft|  return value|
|ap_rst                   |   in|    1|  ap_ctrl_hs|             dft|  return value|
|ap_start                 |   in|    1|  ap_ctrl_hs|             dft|  return value|
|ap_done                  |  out|    1|  ap_ctrl_hs|             dft|  return value|
|ap_idle                  |  out|    1|  ap_ctrl_hs|             dft|  return value|
|ap_ready                 |  out|    1|  ap_ctrl_hs|             dft|  return value|
|real_sample_0_address0   |  out|    1|   ap_memory|   real_sample_0|         array|
|real_sample_0_ce0        |  out|    1|   ap_memory|   real_sample_0|         array|
|real_sample_0_q0         |   in|   32|   ap_memory|   real_sample_0|         array|
|real_sample_0_address1   |  out|    1|   ap_memory|   real_sample_0|         array|
|real_sample_0_ce1        |  out|    1|   ap_memory|   real_sample_0|         array|
|real_sample_0_q1         |   in|   32|   ap_memory|   real_sample_0|         array|
|real_sample_1_address0   |  out|    1|   ap_memory|   real_sample_1|         array|
|real_sample_1_ce0        |  out|    1|   ap_memory|   real_sample_1|         array|
|real_sample_1_q0         |   in|   32|   ap_memory|   real_sample_1|         array|
|real_sample_1_address1   |  out|    1|   ap_memory|   real_sample_1|         array|
|real_sample_1_ce1        |  out|    1|   ap_memory|   real_sample_1|         array|
|real_sample_1_q1         |   in|   32|   ap_memory|   real_sample_1|         array|
|real_sample_2_address0   |  out|    1|   ap_memory|   real_sample_2|         array|
|real_sample_2_ce0        |  out|    1|   ap_memory|   real_sample_2|         array|
|real_sample_2_q0         |   in|   32|   ap_memory|   real_sample_2|         array|
|real_sample_2_address1   |  out|    1|   ap_memory|   real_sample_2|         array|
|real_sample_2_ce1        |  out|    1|   ap_memory|   real_sample_2|         array|
|real_sample_2_q1         |   in|   32|   ap_memory|   real_sample_2|         array|
|real_sample_3_address0   |  out|    1|   ap_memory|   real_sample_3|         array|
|real_sample_3_ce0        |  out|    1|   ap_memory|   real_sample_3|         array|
|real_sample_3_q0         |   in|   32|   ap_memory|   real_sample_3|         array|
|real_sample_3_address1   |  out|    1|   ap_memory|   real_sample_3|         array|
|real_sample_3_ce1        |  out|    1|   ap_memory|   real_sample_3|         array|
|real_sample_3_q1         |   in|   32|   ap_memory|   real_sample_3|         array|
|real_sample_4_address0   |  out|    1|   ap_memory|   real_sample_4|         array|
|real_sample_4_ce0        |  out|    1|   ap_memory|   real_sample_4|         array|
|real_sample_4_q0         |   in|   32|   ap_memory|   real_sample_4|         array|
|real_sample_4_address1   |  out|    1|   ap_memory|   real_sample_4|         array|
|real_sample_4_ce1        |  out|    1|   ap_memory|   real_sample_4|         array|
|real_sample_4_q1         |   in|   32|   ap_memory|   real_sample_4|         array|
|real_sample_5_address0   |  out|    1|   ap_memory|   real_sample_5|         array|
|real_sample_5_ce0        |  out|    1|   ap_memory|   real_sample_5|         array|
|real_sample_5_q0         |   in|   32|   ap_memory|   real_sample_5|         array|
|real_sample_5_address1   |  out|    1|   ap_memory|   real_sample_5|         array|
|real_sample_5_ce1        |  out|    1|   ap_memory|   real_sample_5|         array|
|real_sample_5_q1         |   in|   32|   ap_memory|   real_sample_5|         array|
|real_sample_6_address0   |  out|    1|   ap_memory|   real_sample_6|         array|
|real_sample_6_ce0        |  out|    1|   ap_memory|   real_sample_6|         array|
|real_sample_6_q0         |   in|   32|   ap_memory|   real_sample_6|         array|
|real_sample_6_address1   |  out|    1|   ap_memory|   real_sample_6|         array|
|real_sample_6_ce1        |  out|    1|   ap_memory|   real_sample_6|         array|
|real_sample_6_q1         |   in|   32|   ap_memory|   real_sample_6|         array|
|real_sample_7_address0   |  out|    1|   ap_memory|   real_sample_7|         array|
|real_sample_7_ce0        |  out|    1|   ap_memory|   real_sample_7|         array|
|real_sample_7_q0         |   in|   32|   ap_memory|   real_sample_7|         array|
|real_sample_7_address1   |  out|    1|   ap_memory|   real_sample_7|         array|
|real_sample_7_ce1        |  out|    1|   ap_memory|   real_sample_7|         array|
|real_sample_7_q1         |   in|   32|   ap_memory|   real_sample_7|         array|
|real_sample_8_address0   |  out|    1|   ap_memory|   real_sample_8|         array|
|real_sample_8_ce0        |  out|    1|   ap_memory|   real_sample_8|         array|
|real_sample_8_q0         |   in|   32|   ap_memory|   real_sample_8|         array|
|real_sample_8_address1   |  out|    1|   ap_memory|   real_sample_8|         array|
|real_sample_8_ce1        |  out|    1|   ap_memory|   real_sample_8|         array|
|real_sample_8_q1         |   in|   32|   ap_memory|   real_sample_8|         array|
|real_sample_9_address0   |  out|    1|   ap_memory|   real_sample_9|         array|
|real_sample_9_ce0        |  out|    1|   ap_memory|   real_sample_9|         array|
|real_sample_9_q0         |   in|   32|   ap_memory|   real_sample_9|         array|
|real_sample_9_address1   |  out|    1|   ap_memory|   real_sample_9|         array|
|real_sample_9_ce1        |  out|    1|   ap_memory|   real_sample_9|         array|
|real_sample_9_q1         |   in|   32|   ap_memory|   real_sample_9|         array|
|real_sample_10_address0  |  out|    1|   ap_memory|  real_sample_10|         array|
|real_sample_10_ce0       |  out|    1|   ap_memory|  real_sample_10|         array|
|real_sample_10_q0        |   in|   32|   ap_memory|  real_sample_10|         array|
|real_sample_10_address1  |  out|    1|   ap_memory|  real_sample_10|         array|
|real_sample_10_ce1       |  out|    1|   ap_memory|  real_sample_10|         array|
|real_sample_10_q1        |   in|   32|   ap_memory|  real_sample_10|         array|
|real_sample_11_address0  |  out|    1|   ap_memory|  real_sample_11|         array|
|real_sample_11_ce0       |  out|    1|   ap_memory|  real_sample_11|         array|
|real_sample_11_q0        |   in|   32|   ap_memory|  real_sample_11|         array|
|real_sample_11_address1  |  out|    1|   ap_memory|  real_sample_11|         array|
|real_sample_11_ce1       |  out|    1|   ap_memory|  real_sample_11|         array|
|real_sample_11_q1        |   in|   32|   ap_memory|  real_sample_11|         array|
|real_sample_12_address0  |  out|    1|   ap_memory|  real_sample_12|         array|
|real_sample_12_ce0       |  out|    1|   ap_memory|  real_sample_12|         array|
|real_sample_12_q0        |   in|   32|   ap_memory|  real_sample_12|         array|
|real_sample_12_address1  |  out|    1|   ap_memory|  real_sample_12|         array|
|real_sample_12_ce1       |  out|    1|   ap_memory|  real_sample_12|         array|
|real_sample_12_q1        |   in|   32|   ap_memory|  real_sample_12|         array|
|real_sample_13_address0  |  out|    1|   ap_memory|  real_sample_13|         array|
|real_sample_13_ce0       |  out|    1|   ap_memory|  real_sample_13|         array|
|real_sample_13_q0        |   in|   32|   ap_memory|  real_sample_13|         array|
|real_sample_13_address1  |  out|    1|   ap_memory|  real_sample_13|         array|
|real_sample_13_ce1       |  out|    1|   ap_memory|  real_sample_13|         array|
|real_sample_13_q1        |   in|   32|   ap_memory|  real_sample_13|         array|
|real_sample_14_address0  |  out|    1|   ap_memory|  real_sample_14|         array|
|real_sample_14_ce0       |  out|    1|   ap_memory|  real_sample_14|         array|
|real_sample_14_q0        |   in|   32|   ap_memory|  real_sample_14|         array|
|real_sample_14_address1  |  out|    1|   ap_memory|  real_sample_14|         array|
|real_sample_14_ce1       |  out|    1|   ap_memory|  real_sample_14|         array|
|real_sample_14_q1        |   in|   32|   ap_memory|  real_sample_14|         array|
|real_sample_15_address0  |  out|    1|   ap_memory|  real_sample_15|         array|
|real_sample_15_ce0       |  out|    1|   ap_memory|  real_sample_15|         array|
|real_sample_15_q0        |   in|   32|   ap_memory|  real_sample_15|         array|
|real_sample_15_address1  |  out|    1|   ap_memory|  real_sample_15|         array|
|real_sample_15_ce1       |  out|    1|   ap_memory|  real_sample_15|         array|
|real_sample_15_q1        |   in|   32|   ap_memory|  real_sample_15|         array|
|imag_sample_0_address0   |  out|    1|   ap_memory|   imag_sample_0|         array|
|imag_sample_0_ce0        |  out|    1|   ap_memory|   imag_sample_0|         array|
|imag_sample_0_q0         |   in|   32|   ap_memory|   imag_sample_0|         array|
|imag_sample_0_address1   |  out|    1|   ap_memory|   imag_sample_0|         array|
|imag_sample_0_ce1        |  out|    1|   ap_memory|   imag_sample_0|         array|
|imag_sample_0_q1         |   in|   32|   ap_memory|   imag_sample_0|         array|
|imag_sample_1_address0   |  out|    1|   ap_memory|   imag_sample_1|         array|
|imag_sample_1_ce0        |  out|    1|   ap_memory|   imag_sample_1|         array|
|imag_sample_1_q0         |   in|   32|   ap_memory|   imag_sample_1|         array|
|imag_sample_1_address1   |  out|    1|   ap_memory|   imag_sample_1|         array|
|imag_sample_1_ce1        |  out|    1|   ap_memory|   imag_sample_1|         array|
|imag_sample_1_q1         |   in|   32|   ap_memory|   imag_sample_1|         array|
|imag_sample_2_address0   |  out|    1|   ap_memory|   imag_sample_2|         array|
|imag_sample_2_ce0        |  out|    1|   ap_memory|   imag_sample_2|         array|
|imag_sample_2_q0         |   in|   32|   ap_memory|   imag_sample_2|         array|
|imag_sample_2_address1   |  out|    1|   ap_memory|   imag_sample_2|         array|
|imag_sample_2_ce1        |  out|    1|   ap_memory|   imag_sample_2|         array|
|imag_sample_2_q1         |   in|   32|   ap_memory|   imag_sample_2|         array|
|imag_sample_3_address0   |  out|    1|   ap_memory|   imag_sample_3|         array|
|imag_sample_3_ce0        |  out|    1|   ap_memory|   imag_sample_3|         array|
|imag_sample_3_q0         |   in|   32|   ap_memory|   imag_sample_3|         array|
|imag_sample_3_address1   |  out|    1|   ap_memory|   imag_sample_3|         array|
|imag_sample_3_ce1        |  out|    1|   ap_memory|   imag_sample_3|         array|
|imag_sample_3_q1         |   in|   32|   ap_memory|   imag_sample_3|         array|
|imag_sample_4_address0   |  out|    1|   ap_memory|   imag_sample_4|         array|
|imag_sample_4_ce0        |  out|    1|   ap_memory|   imag_sample_4|         array|
|imag_sample_4_q0         |   in|   32|   ap_memory|   imag_sample_4|         array|
|imag_sample_4_address1   |  out|    1|   ap_memory|   imag_sample_4|         array|
|imag_sample_4_ce1        |  out|    1|   ap_memory|   imag_sample_4|         array|
|imag_sample_4_q1         |   in|   32|   ap_memory|   imag_sample_4|         array|
|imag_sample_5_address0   |  out|    1|   ap_memory|   imag_sample_5|         array|
|imag_sample_5_ce0        |  out|    1|   ap_memory|   imag_sample_5|         array|
|imag_sample_5_q0         |   in|   32|   ap_memory|   imag_sample_5|         array|
|imag_sample_5_address1   |  out|    1|   ap_memory|   imag_sample_5|         array|
|imag_sample_5_ce1        |  out|    1|   ap_memory|   imag_sample_5|         array|
|imag_sample_5_q1         |   in|   32|   ap_memory|   imag_sample_5|         array|
|imag_sample_6_address0   |  out|    1|   ap_memory|   imag_sample_6|         array|
|imag_sample_6_ce0        |  out|    1|   ap_memory|   imag_sample_6|         array|
|imag_sample_6_q0         |   in|   32|   ap_memory|   imag_sample_6|         array|
|imag_sample_6_address1   |  out|    1|   ap_memory|   imag_sample_6|         array|
|imag_sample_6_ce1        |  out|    1|   ap_memory|   imag_sample_6|         array|
|imag_sample_6_q1         |   in|   32|   ap_memory|   imag_sample_6|         array|
|imag_sample_7_address0   |  out|    1|   ap_memory|   imag_sample_7|         array|
|imag_sample_7_ce0        |  out|    1|   ap_memory|   imag_sample_7|         array|
|imag_sample_7_q0         |   in|   32|   ap_memory|   imag_sample_7|         array|
|imag_sample_7_address1   |  out|    1|   ap_memory|   imag_sample_7|         array|
|imag_sample_7_ce1        |  out|    1|   ap_memory|   imag_sample_7|         array|
|imag_sample_7_q1         |   in|   32|   ap_memory|   imag_sample_7|         array|
|imag_sample_8_address0   |  out|    1|   ap_memory|   imag_sample_8|         array|
|imag_sample_8_ce0        |  out|    1|   ap_memory|   imag_sample_8|         array|
|imag_sample_8_q0         |   in|   32|   ap_memory|   imag_sample_8|         array|
|imag_sample_8_address1   |  out|    1|   ap_memory|   imag_sample_8|         array|
|imag_sample_8_ce1        |  out|    1|   ap_memory|   imag_sample_8|         array|
|imag_sample_8_q1         |   in|   32|   ap_memory|   imag_sample_8|         array|
|imag_sample_9_address0   |  out|    1|   ap_memory|   imag_sample_9|         array|
|imag_sample_9_ce0        |  out|    1|   ap_memory|   imag_sample_9|         array|
|imag_sample_9_q0         |   in|   32|   ap_memory|   imag_sample_9|         array|
|imag_sample_9_address1   |  out|    1|   ap_memory|   imag_sample_9|         array|
|imag_sample_9_ce1        |  out|    1|   ap_memory|   imag_sample_9|         array|
|imag_sample_9_q1         |   in|   32|   ap_memory|   imag_sample_9|         array|
|imag_sample_10_address0  |  out|    1|   ap_memory|  imag_sample_10|         array|
|imag_sample_10_ce0       |  out|    1|   ap_memory|  imag_sample_10|         array|
|imag_sample_10_q0        |   in|   32|   ap_memory|  imag_sample_10|         array|
|imag_sample_10_address1  |  out|    1|   ap_memory|  imag_sample_10|         array|
|imag_sample_10_ce1       |  out|    1|   ap_memory|  imag_sample_10|         array|
|imag_sample_10_q1        |   in|   32|   ap_memory|  imag_sample_10|         array|
|imag_sample_11_address0  |  out|    1|   ap_memory|  imag_sample_11|         array|
|imag_sample_11_ce0       |  out|    1|   ap_memory|  imag_sample_11|         array|
|imag_sample_11_q0        |   in|   32|   ap_memory|  imag_sample_11|         array|
|imag_sample_11_address1  |  out|    1|   ap_memory|  imag_sample_11|         array|
|imag_sample_11_ce1       |  out|    1|   ap_memory|  imag_sample_11|         array|
|imag_sample_11_q1        |   in|   32|   ap_memory|  imag_sample_11|         array|
|imag_sample_12_address0  |  out|    1|   ap_memory|  imag_sample_12|         array|
|imag_sample_12_ce0       |  out|    1|   ap_memory|  imag_sample_12|         array|
|imag_sample_12_q0        |   in|   32|   ap_memory|  imag_sample_12|         array|
|imag_sample_12_address1  |  out|    1|   ap_memory|  imag_sample_12|         array|
|imag_sample_12_ce1       |  out|    1|   ap_memory|  imag_sample_12|         array|
|imag_sample_12_q1        |   in|   32|   ap_memory|  imag_sample_12|         array|
|imag_sample_13_address0  |  out|    1|   ap_memory|  imag_sample_13|         array|
|imag_sample_13_ce0       |  out|    1|   ap_memory|  imag_sample_13|         array|
|imag_sample_13_q0        |   in|   32|   ap_memory|  imag_sample_13|         array|
|imag_sample_13_address1  |  out|    1|   ap_memory|  imag_sample_13|         array|
|imag_sample_13_ce1       |  out|    1|   ap_memory|  imag_sample_13|         array|
|imag_sample_13_q1        |   in|   32|   ap_memory|  imag_sample_13|         array|
|imag_sample_14_address0  |  out|    1|   ap_memory|  imag_sample_14|         array|
|imag_sample_14_ce0       |  out|    1|   ap_memory|  imag_sample_14|         array|
|imag_sample_14_q0        |   in|   32|   ap_memory|  imag_sample_14|         array|
|imag_sample_14_address1  |  out|    1|   ap_memory|  imag_sample_14|         array|
|imag_sample_14_ce1       |  out|    1|   ap_memory|  imag_sample_14|         array|
|imag_sample_14_q1        |   in|   32|   ap_memory|  imag_sample_14|         array|
|imag_sample_15_address0  |  out|    1|   ap_memory|  imag_sample_15|         array|
|imag_sample_15_ce0       |  out|    1|   ap_memory|  imag_sample_15|         array|
|imag_sample_15_q0        |   in|   32|   ap_memory|  imag_sample_15|         array|
|imag_sample_15_address1  |  out|    1|   ap_memory|  imag_sample_15|         array|
|imag_sample_15_ce1       |  out|    1|   ap_memory|  imag_sample_15|         array|
|imag_sample_15_q1        |   in|   32|   ap_memory|  imag_sample_15|         array|
|real_out_0_address0      |  out|    1|   ap_memory|      real_out_0|         array|
|real_out_0_ce0           |  out|    1|   ap_memory|      real_out_0|         array|
|real_out_0_we0           |  out|    1|   ap_memory|      real_out_0|         array|
|real_out_0_d0            |  out|   32|   ap_memory|      real_out_0|         array|
|real_out_1_address0      |  out|    1|   ap_memory|      real_out_1|         array|
|real_out_1_ce0           |  out|    1|   ap_memory|      real_out_1|         array|
|real_out_1_we0           |  out|    1|   ap_memory|      real_out_1|         array|
|real_out_1_d0            |  out|   32|   ap_memory|      real_out_1|         array|
|real_out_2_address0      |  out|    1|   ap_memory|      real_out_2|         array|
|real_out_2_ce0           |  out|    1|   ap_memory|      real_out_2|         array|
|real_out_2_we0           |  out|    1|   ap_memory|      real_out_2|         array|
|real_out_2_d0            |  out|   32|   ap_memory|      real_out_2|         array|
|real_out_3_address0      |  out|    1|   ap_memory|      real_out_3|         array|
|real_out_3_ce0           |  out|    1|   ap_memory|      real_out_3|         array|
|real_out_3_we0           |  out|    1|   ap_memory|      real_out_3|         array|
|real_out_3_d0            |  out|   32|   ap_memory|      real_out_3|         array|
|real_out_4_address0      |  out|    1|   ap_memory|      real_out_4|         array|
|real_out_4_ce0           |  out|    1|   ap_memory|      real_out_4|         array|
|real_out_4_we0           |  out|    1|   ap_memory|      real_out_4|         array|
|real_out_4_d0            |  out|   32|   ap_memory|      real_out_4|         array|
|real_out_5_address0      |  out|    1|   ap_memory|      real_out_5|         array|
|real_out_5_ce0           |  out|    1|   ap_memory|      real_out_5|         array|
|real_out_5_we0           |  out|    1|   ap_memory|      real_out_5|         array|
|real_out_5_d0            |  out|   32|   ap_memory|      real_out_5|         array|
|real_out_6_address0      |  out|    1|   ap_memory|      real_out_6|         array|
|real_out_6_ce0           |  out|    1|   ap_memory|      real_out_6|         array|
|real_out_6_we0           |  out|    1|   ap_memory|      real_out_6|         array|
|real_out_6_d0            |  out|   32|   ap_memory|      real_out_6|         array|
|real_out_7_address0      |  out|    1|   ap_memory|      real_out_7|         array|
|real_out_7_ce0           |  out|    1|   ap_memory|      real_out_7|         array|
|real_out_7_we0           |  out|    1|   ap_memory|      real_out_7|         array|
|real_out_7_d0            |  out|   32|   ap_memory|      real_out_7|         array|
|real_out_8_address0      |  out|    1|   ap_memory|      real_out_8|         array|
|real_out_8_ce0           |  out|    1|   ap_memory|      real_out_8|         array|
|real_out_8_we0           |  out|    1|   ap_memory|      real_out_8|         array|
|real_out_8_d0            |  out|   32|   ap_memory|      real_out_8|         array|
|real_out_9_address0      |  out|    1|   ap_memory|      real_out_9|         array|
|real_out_9_ce0           |  out|    1|   ap_memory|      real_out_9|         array|
|real_out_9_we0           |  out|    1|   ap_memory|      real_out_9|         array|
|real_out_9_d0            |  out|   32|   ap_memory|      real_out_9|         array|
|real_out_10_address0     |  out|    1|   ap_memory|     real_out_10|         array|
|real_out_10_ce0          |  out|    1|   ap_memory|     real_out_10|         array|
|real_out_10_we0          |  out|    1|   ap_memory|     real_out_10|         array|
|real_out_10_d0           |  out|   32|   ap_memory|     real_out_10|         array|
|real_out_11_address0     |  out|    1|   ap_memory|     real_out_11|         array|
|real_out_11_ce0          |  out|    1|   ap_memory|     real_out_11|         array|
|real_out_11_we0          |  out|    1|   ap_memory|     real_out_11|         array|
|real_out_11_d0           |  out|   32|   ap_memory|     real_out_11|         array|
|real_out_12_address0     |  out|    1|   ap_memory|     real_out_12|         array|
|real_out_12_ce0          |  out|    1|   ap_memory|     real_out_12|         array|
|real_out_12_we0          |  out|    1|   ap_memory|     real_out_12|         array|
|real_out_12_d0           |  out|   32|   ap_memory|     real_out_12|         array|
|real_out_13_address0     |  out|    1|   ap_memory|     real_out_13|         array|
|real_out_13_ce0          |  out|    1|   ap_memory|     real_out_13|         array|
|real_out_13_we0          |  out|    1|   ap_memory|     real_out_13|         array|
|real_out_13_d0           |  out|   32|   ap_memory|     real_out_13|         array|
|real_out_14_address0     |  out|    1|   ap_memory|     real_out_14|         array|
|real_out_14_ce0          |  out|    1|   ap_memory|     real_out_14|         array|
|real_out_14_we0          |  out|    1|   ap_memory|     real_out_14|         array|
|real_out_14_d0           |  out|   32|   ap_memory|     real_out_14|         array|
|real_out_15_address0     |  out|    1|   ap_memory|     real_out_15|         array|
|real_out_15_ce0          |  out|    1|   ap_memory|     real_out_15|         array|
|real_out_15_we0          |  out|    1|   ap_memory|     real_out_15|         array|
|real_out_15_d0           |  out|   32|   ap_memory|     real_out_15|         array|
|imag_out_0_address0      |  out|    1|   ap_memory|      imag_out_0|         array|
|imag_out_0_ce0           |  out|    1|   ap_memory|      imag_out_0|         array|
|imag_out_0_we0           |  out|    1|   ap_memory|      imag_out_0|         array|
|imag_out_0_d0            |  out|   32|   ap_memory|      imag_out_0|         array|
|imag_out_1_address0      |  out|    1|   ap_memory|      imag_out_1|         array|
|imag_out_1_ce0           |  out|    1|   ap_memory|      imag_out_1|         array|
|imag_out_1_we0           |  out|    1|   ap_memory|      imag_out_1|         array|
|imag_out_1_d0            |  out|   32|   ap_memory|      imag_out_1|         array|
|imag_out_2_address0      |  out|    1|   ap_memory|      imag_out_2|         array|
|imag_out_2_ce0           |  out|    1|   ap_memory|      imag_out_2|         array|
|imag_out_2_we0           |  out|    1|   ap_memory|      imag_out_2|         array|
|imag_out_2_d0            |  out|   32|   ap_memory|      imag_out_2|         array|
|imag_out_3_address0      |  out|    1|   ap_memory|      imag_out_3|         array|
|imag_out_3_ce0           |  out|    1|   ap_memory|      imag_out_3|         array|
|imag_out_3_we0           |  out|    1|   ap_memory|      imag_out_3|         array|
|imag_out_3_d0            |  out|   32|   ap_memory|      imag_out_3|         array|
|imag_out_4_address0      |  out|    1|   ap_memory|      imag_out_4|         array|
|imag_out_4_ce0           |  out|    1|   ap_memory|      imag_out_4|         array|
|imag_out_4_we0           |  out|    1|   ap_memory|      imag_out_4|         array|
|imag_out_4_d0            |  out|   32|   ap_memory|      imag_out_4|         array|
|imag_out_5_address0      |  out|    1|   ap_memory|      imag_out_5|         array|
|imag_out_5_ce0           |  out|    1|   ap_memory|      imag_out_5|         array|
|imag_out_5_we0           |  out|    1|   ap_memory|      imag_out_5|         array|
|imag_out_5_d0            |  out|   32|   ap_memory|      imag_out_5|         array|
|imag_out_6_address0      |  out|    1|   ap_memory|      imag_out_6|         array|
|imag_out_6_ce0           |  out|    1|   ap_memory|      imag_out_6|         array|
|imag_out_6_we0           |  out|    1|   ap_memory|      imag_out_6|         array|
|imag_out_6_d0            |  out|   32|   ap_memory|      imag_out_6|         array|
|imag_out_7_address0      |  out|    1|   ap_memory|      imag_out_7|         array|
|imag_out_7_ce0           |  out|    1|   ap_memory|      imag_out_7|         array|
|imag_out_7_we0           |  out|    1|   ap_memory|      imag_out_7|         array|
|imag_out_7_d0            |  out|   32|   ap_memory|      imag_out_7|         array|
|imag_out_8_address0      |  out|    1|   ap_memory|      imag_out_8|         array|
|imag_out_8_ce0           |  out|    1|   ap_memory|      imag_out_8|         array|
|imag_out_8_we0           |  out|    1|   ap_memory|      imag_out_8|         array|
|imag_out_8_d0            |  out|   32|   ap_memory|      imag_out_8|         array|
|imag_out_9_address0      |  out|    1|   ap_memory|      imag_out_9|         array|
|imag_out_9_ce0           |  out|    1|   ap_memory|      imag_out_9|         array|
|imag_out_9_we0           |  out|    1|   ap_memory|      imag_out_9|         array|
|imag_out_9_d0            |  out|   32|   ap_memory|      imag_out_9|         array|
|imag_out_10_address0     |  out|    1|   ap_memory|     imag_out_10|         array|
|imag_out_10_ce0          |  out|    1|   ap_memory|     imag_out_10|         array|
|imag_out_10_we0          |  out|    1|   ap_memory|     imag_out_10|         array|
|imag_out_10_d0           |  out|   32|   ap_memory|     imag_out_10|         array|
|imag_out_11_address0     |  out|    1|   ap_memory|     imag_out_11|         array|
|imag_out_11_ce0          |  out|    1|   ap_memory|     imag_out_11|         array|
|imag_out_11_we0          |  out|    1|   ap_memory|     imag_out_11|         array|
|imag_out_11_d0           |  out|   32|   ap_memory|     imag_out_11|         array|
|imag_out_12_address0     |  out|    1|   ap_memory|     imag_out_12|         array|
|imag_out_12_ce0          |  out|    1|   ap_memory|     imag_out_12|         array|
|imag_out_12_we0          |  out|    1|   ap_memory|     imag_out_12|         array|
|imag_out_12_d0           |  out|   32|   ap_memory|     imag_out_12|         array|
|imag_out_13_address0     |  out|    1|   ap_memory|     imag_out_13|         array|
|imag_out_13_ce0          |  out|    1|   ap_memory|     imag_out_13|         array|
|imag_out_13_we0          |  out|    1|   ap_memory|     imag_out_13|         array|
|imag_out_13_d0           |  out|   32|   ap_memory|     imag_out_13|         array|
|imag_out_14_address0     |  out|    1|   ap_memory|     imag_out_14|         array|
|imag_out_14_ce0          |  out|    1|   ap_memory|     imag_out_14|         array|
|imag_out_14_we0          |  out|    1|   ap_memory|     imag_out_14|         array|
|imag_out_14_d0           |  out|   32|   ap_memory|     imag_out_14|         array|
|imag_out_15_address0     |  out|    1|   ap_memory|     imag_out_15|         array|
|imag_out_15_ce0          |  out|    1|   ap_memory|     imag_out_15|         array|
|imag_out_15_we0          |  out|    1|   ap_memory|     imag_out_15|         array|
|imag_out_15_d0           |  out|   32|   ap_memory|     imag_out_15|         array|
+-------------------------+-----+-----+------------+----------------+--------------+

rm dft_test.bin
## N=32
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 00:21:28 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.77 seconds; current allocated memory: 659.234 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.52 seconds. CPU system time: 0.69 seconds. Elapsed time: 1.33 seconds; current allocated memory: 660.527 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 67 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 521 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 520 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 652 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 617 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 617 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 617 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 617 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 617 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 617 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,665 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 681 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,003 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,008 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_28_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:28:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_28_2' (dft.cpp:28:22) in function 'dft' completely with a factor of 32 (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_sample': Complete partitioning on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_sample': Complete partitioning on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'real_out': Complete partitioning on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-248] Applying array_partition to 'imag_out': Complete partitioning on dimension 1. (dft.cpp:7:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (dft.cpp:23:9)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.04 seconds. CPU system time: 0.92 seconds. Elapsed time: 9.07 seconds; current allocated memory: 670.250 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.250 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 671.449 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 671.898 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.37 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.41 seconds; current allocated memory: 696.004 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.28 seconds. CPU system time: 0 seconds. Elapsed time: 0.29 seconds; current allocated memory: 696.004 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 171, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.84 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.96 seconds; current allocated memory: 698.863 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.31 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.41 seconds; current allocated memory: 698.863 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_0' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_1' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_2' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_3' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_4' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_5' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_6' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_7' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_8' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_9' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_10' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_11' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_12' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_13' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_14' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_15' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_16' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_17' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_18' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_19' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_20' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_21' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_22' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_23' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_24' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_25' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_26' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_27' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_28' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_29' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_30' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample_31' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_0' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_1' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_2' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_3' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_4' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_5' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_6' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_7' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_8' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_9' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_10' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_11' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_12' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_13' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_14' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_15' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_16' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_17' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_18' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_19' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_20' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_21' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_22' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_23' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_24' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_25' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_26' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_27' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_28' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_29' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_30' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample_31' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_0' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_1' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_2' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_3' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_4' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_5' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_6' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_7' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_8' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_9' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_10' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_11' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_12' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_13' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_14' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_15' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_16' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_17' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_18' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_19' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_20' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_21' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_22' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_23' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_24' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_25' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_26' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_27' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_28' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_29' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_30' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_31' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_0' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_1' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_2' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_3' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_4' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_5' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_6' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_7' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_8' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_9' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_10' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_11' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_12' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_13' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_14' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_15' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_16' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_17' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_18' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_19' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_20' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_21' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_22' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_23' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_24' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_25' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_26' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_27' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_28' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_29' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_30' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_31' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft' is 179339 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.75 seconds. CPU system time: 0.15 seconds. Elapsed time: 3.02 seconds; current allocated memory: 723.492 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 1.52 seconds. CPU system time: 0.52 seconds. Elapsed time: 4.45 seconds; current allocated memory: 738.379 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 2.86 seconds. CPU system time: 0.08 seconds. Elapsed time: 3.16 seconds; current allocated memory: 750.801 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:31; Allocated memory: 107.566 MB.
INFO: [HLS 200-112] Total CPU user time: 19.47 seconds. Total CPU system time: 4.07 seconds. Total elapsed time: 42.35 seconds; peak allocated memory: 750.801 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 44s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q4


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 00:22:05 2026

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
    +---------+---------+----------+----------+-----+-----+------------------------------------------------+
    |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
    |   min   |   max   |    min   |    max   | min | max |                      Type                      |
    +---------+---------+----------+----------+-----+-----+------------------------------------------------+
    |      203|      203|  2.030 us|  2.030 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
    +---------+---------+----------+----------+-----+-----+------------------------------------------------+

    + Detail: 
        * Instance: 
        N/A

        * Loop: 
        +-------------------+---------+---------+----------+-----------+-----------+------+----------+
        |                   |  Latency (cycles) | Iteration|  Initiation Interval  | Trip |          |
        |     Loop Name     |   min   |   max   |  Latency |  achieved |   target  | Count| Pipelined|
        +-------------------+---------+---------+----------+-----------+-----------+------+----------+
        |- VITIS_LOOP_22_1  |      201|      201|       171|          1|          1|    32|       yes|
        +-------------------+---------+---------+----------+-----------+-----------+------+----------+



================================================================
== Utilization Estimates
================================================================
* Summary: 
+-----------------+---------+-----+--------+-------+-----+
|       Name      | BRAM_18K| DSP |   FF   |  LUT  | URAM|
+-----------------+---------+-----+--------+-------+-----+
|DSP              |        -|    -|       -|      -|    -|
|Expression       |        -|    -|       0|     30|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        -|  640|   44544|  91008|    -|
|Memory           |       64|    -|       0|      0|    -|
|Multiplexer      |        -|    -|       0|     36|    -|
|Register         |        -|    -|   16965|   2176|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|  640|   61509|  93250|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|  290|      57|    175|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------------+--------------------------------+---------+----+-----+-----+-----+
    |               Instance              |             Module             | BRAM_18K| DSP|  FF | LUT | URAM|
    +-------------------------------------+--------------------------------+---------+----+-----+-----+-----+
    |fadd_32ns_32ns_32_5_full_dsp_1_U2    |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U3    |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U4    |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U6    |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U7    |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U8    |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U10   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U11   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U12   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U14   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U15   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U16   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U18   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U19   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U20   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U22   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U23   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U24   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U26   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U27   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U28   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U30   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U31   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U32   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U34   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U35   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U36   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U38   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U39   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U40   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U42   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U43   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U44   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U46   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U47   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U48   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U50   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U51   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U52   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U54   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U55   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U56   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U58   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U59   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U60   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U62   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U63   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U64   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U66   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U67   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U68   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U70   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U71   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U72   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U74   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U75   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U76   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U78   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U79   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U80   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U82   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U83   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U84   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U86   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U87   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U88   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U90   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U91   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U92   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U94   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U95   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U96   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U98   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U99   |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U100  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U102  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U103  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U104  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U106  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U107  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U108  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U110  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U111  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U112  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U114  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U115  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U116  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U118  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U119  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U120  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U122  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U124  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U125  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U126  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U127  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fadd_32ns_32ns_32_5_full_dsp_1_U128  |fadd_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U129   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U130   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U131   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U132   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U133   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U134   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U135   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U136   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U137   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U138   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U139   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U140   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U141   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U142   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U143   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U144   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U145   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U146   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U147   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U148   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U149   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U150   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U151   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U152   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U153   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U154   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U155   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U156   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U157   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U158   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U159   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U160   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U161   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U162   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U163   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U164   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U165   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U166   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U167   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U168   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U169   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U170   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U171   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U172   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U173   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U174   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U175   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U176   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U177   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U178   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U179   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U180   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U181   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U182   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U183   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U184   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U185   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U186   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U187   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U188   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U189   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U190   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U191   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U192   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U193   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U194   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U195   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U196   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U197   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U198   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U199   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U200   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U201   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U202   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U203   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U204   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U205   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U206   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U207   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U208   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U209   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U210   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U211   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U212   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U213   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U214   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U215   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U216   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U217   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U218   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U219   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U220   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U221   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U222   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U223   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U224   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U225   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U226   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U227   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U228   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U229   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U230   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U231   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U232   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U233   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U234   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U235   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U236   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U237   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U238   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U239   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U240   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U241   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U242   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U243   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U244   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U245   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U246   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U247   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U248   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U249   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U250   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U251   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U252   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U253   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U254   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U255   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U256   |fmul_32ns_32ns_32_4_max_dsp_1   |        0|   3|  143|  321|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U1    |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U5    |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U9    |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U13   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U17   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U21   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U25   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U29   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U33   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U37   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U41   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U45   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U49   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U53   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U57   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U61   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U65   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U69   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U73   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U77   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U81   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U85   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U89   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U93   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U97   |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U101  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U105  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U109  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U113  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U117  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U121  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    |fsub_32ns_32ns_32_5_full_dsp_1_U123  |fsub_32ns_32ns_32_5_full_dsp_1  |        0|   2|  205|  390|    0|
    +-------------------------------------+--------------------------------+---------+----+-----+-----+-----+
    |Total                                |                                |        0| 640|44544|91008|    0|
    +-------------------------------------+--------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    +----------------------------+--------------------------------------+---------+---+----+-----+------+-----+------+-------------+
    |           Memory           |                Module                | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +----------------------------+--------------------------------------+---------+---+----+-----+------+-----+------+-------------+
    |p_ZL15cos_coeff_table_0_U   |p_ZL15cos_coeff_table_0_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_10_U  |p_ZL15cos_coeff_table_10_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_11_U  |p_ZL15cos_coeff_table_11_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_21_U  |p_ZL15cos_coeff_table_11_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_12_U  |p_ZL15cos_coeff_table_12_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_13_U  |p_ZL15cos_coeff_table_13_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_14_U  |p_ZL15cos_coeff_table_14_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_15_U  |p_ZL15cos_coeff_table_15_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_16_U  |p_ZL15cos_coeff_table_16_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_17_U  |p_ZL15cos_coeff_table_17_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_18_U  |p_ZL15cos_coeff_table_18_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_19_U  |p_ZL15cos_coeff_table_19_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_1_U   |p_ZL15cos_coeff_table_1_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_20_U  |p_ZL15cos_coeff_table_20_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_22_U  |p_ZL15cos_coeff_table_22_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_23_U  |p_ZL15cos_coeff_table_23_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_24_U  |p_ZL15cos_coeff_table_24_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_26_U  |p_ZL15cos_coeff_table_26_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_27_U  |p_ZL15cos_coeff_table_27_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_28_U  |p_ZL15cos_coeff_table_28_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_29_U  |p_ZL15cos_coeff_table_29_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_2_U   |p_ZL15cos_coeff_table_2_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_30_U  |p_ZL15cos_coeff_table_30_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_31_U  |p_ZL15cos_coeff_table_31_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_3_U   |p_ZL15cos_coeff_table_3_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_4_U   |p_ZL15cos_coeff_table_4_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_5_U   |p_ZL15cos_coeff_table_5_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_6_U   |p_ZL15cos_coeff_table_6_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_7_U   |p_ZL15cos_coeff_table_7_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_25_U  |p_ZL15cos_coeff_table_7_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_8_U   |p_ZL15cos_coeff_table_8_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15cos_coeff_table_9_U   |p_ZL15cos_coeff_table_9_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_0_U   |p_ZL15sin_coeff_table_0_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_10_U  |p_ZL15sin_coeff_table_10_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_11_U  |p_ZL15sin_coeff_table_11_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_12_U  |p_ZL15sin_coeff_table_12_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_13_U  |p_ZL15sin_coeff_table_13_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_14_U  |p_ZL15sin_coeff_table_14_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_15_U  |p_ZL15sin_coeff_table_15_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_16_U  |p_ZL15sin_coeff_table_16_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_17_U  |p_ZL15sin_coeff_table_17_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_18_U  |p_ZL15sin_coeff_table_18_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_19_U  |p_ZL15sin_coeff_table_19_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_1_U   |p_ZL15sin_coeff_table_1_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_20_U  |p_ZL15sin_coeff_table_20_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_21_U  |p_ZL15sin_coeff_table_21_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_22_U  |p_ZL15sin_coeff_table_22_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_23_U  |p_ZL15sin_coeff_table_23_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_24_U  |p_ZL15sin_coeff_table_24_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_25_U  |p_ZL15sin_coeff_table_25_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_26_U  |p_ZL15sin_coeff_table_26_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_27_U  |p_ZL15sin_coeff_table_27_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_28_U  |p_ZL15sin_coeff_table_28_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_29_U  |p_ZL15sin_coeff_table_29_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_2_U   |p_ZL15sin_coeff_table_2_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_30_U  |p_ZL15sin_coeff_table_30_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_31_U  |p_ZL15sin_coeff_table_31_ROM_AUTO_1R  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_3_U   |p_ZL15sin_coeff_table_3_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_4_U   |p_ZL15sin_coeff_table_4_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_5_U   |p_ZL15sin_coeff_table_5_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_6_U   |p_ZL15sin_coeff_table_6_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_7_U   |p_ZL15sin_coeff_table_7_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_8_U   |p_ZL15sin_coeff_table_8_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    |p_ZL15sin_coeff_table_9_U   |p_ZL15sin_coeff_table_9_ROM_AUTO_1R   |        1|  0|   0|    0|    32|   32|     1|         1024|
    +----------------------------+--------------------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total                       |                                      |       64|  0|   0|    0|  2048| 2048|    64|        65536|
    +----------------------------+--------------------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +----------------------+----------+----+---+----+------------+------------+
    |     Variable Name    | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +----------------------+----------+----+---+----+------------+------------+
    |k_fu_3448_p2          |         +|   0|  0|  13|           5|           1|
    |ap_condition_9457     |       and|   0|  0|   2|           1|           1|
    |icmp_ln22_fu_3454_p2  |      icmp|   0|  0|  13|           5|           2|
    |ap_enable_pp0         |       xor|   0|  0|   2|           1|           2|
    +----------------------+----------+----+---+----+------------+------------+
    |Total                 |          |   0|  0|  30|          12|           6|
    +----------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +------------------------------------+----+-----------+-----+-----------+
    |                Name                | LUT| Input Size| Bits| Total Bits|
    +------------------------------------+----+-----------+-----+-----------+
    |ap_done_int                         |   9|          2|    1|          2|
    |ap_loop_exit_ready_pp0_iter170_reg  |   9|          2|    1|          2|
    |ap_sig_allocacmp_k1_load            |   9|          2|    5|         10|
    |k1_fu_484                           |   9|          2|    5|         10|
    +------------------------------------+----+-----------+-----+-----------+
    |Total                               |  36|          8|   12|         24|
    +------------------------------------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------+-----+----+-----+-----------+
    |                Name                |  FF | LUT| Bits| Const Bits|
    +------------------------------------+-----+----+-----+-----------+
    |add1_reg_4071                       |   32|   0|   32|          0|
    |add28_10_reg_4753                   |   32|   0|   32|          0|
    |add28_11_reg_4815                   |   32|   0|   32|          0|
    |add28_12_reg_4877                   |   32|   0|   32|          0|
    |add28_13_reg_4939                   |   32|   0|   32|          0|
    |add28_14_reg_5001                   |   32|   0|   32|          0|
    |add28_15_reg_5063                   |   32|   0|   32|          0|
    |add28_16_reg_5125                   |   32|   0|   32|          0|
    |add28_17_reg_5187                   |   32|   0|   32|          0|
    |add28_18_reg_5249                   |   32|   0|   32|          0|
    |add28_19_reg_5311                   |   32|   0|   32|          0|
    |add28_1_reg_4133                    |   32|   0|   32|          0|
    |add28_20_reg_5373                   |   32|   0|   32|          0|
    |add28_21_reg_5435                   |   32|   0|   32|          0|
    |add28_22_reg_5497                   |   32|   0|   32|          0|
    |add28_23_reg_5559                   |   32|   0|   32|          0|
    |add28_24_reg_5621                   |   32|   0|   32|          0|
    |add28_25_reg_5683                   |   32|   0|   32|          0|
    |add28_26_reg_5745                   |   32|   0|   32|          0|
    |add28_27_reg_5807                   |   32|   0|   32|          0|
    |add28_28_reg_5891                   |   32|   0|   32|          0|
    |add28_29_reg_5951                   |   32|   0|   32|          0|
    |add28_2_reg_4195                    |   32|   0|   32|          0|
    |add28_30_reg_5961                   |   32|   0|   32|          0|
    |add28_3_reg_4257                    |   32|   0|   32|          0|
    |add28_4_reg_4319                    |   32|   0|   32|          0|
    |add28_5_reg_4381                    |   32|   0|   32|          0|
    |add28_6_reg_4443                    |   32|   0|   32|          0|
    |add28_7_reg_4505                    |   32|   0|   32|          0|
    |add28_8_reg_4567                    |   32|   0|   32|          0|
    |add28_9_reg_4629                    |   32|   0|   32|          0|
    |add28_s_reg_4691                    |   32|   0|   32|          0|
    |add2_reg_4123                       |   32|   0|   32|          0|
    |add31_10_reg_4805                   |   32|   0|   32|          0|
    |add31_11_reg_4867                   |   32|   0|   32|          0|
    |add31_12_reg_4929                   |   32|   0|   32|          0|
    |add31_13_reg_4991                   |   32|   0|   32|          0|
    |add31_14_reg_5053                   |   32|   0|   32|          0|
    |add31_15_reg_5115                   |   32|   0|   32|          0|
    |add31_16_reg_5177                   |   32|   0|   32|          0|
    |add31_17_reg_5239                   |   32|   0|   32|          0|
    |add31_18_reg_5301                   |   32|   0|   32|          0|
    |add31_19_reg_5363                   |   32|   0|   32|          0|
    |add31_1_reg_4185                    |   32|   0|   32|          0|
    |add31_20_reg_5425                   |   32|   0|   32|          0|
    |add31_21_reg_5487                   |   32|   0|   32|          0|
    |add31_22_reg_5549                   |   32|   0|   32|          0|
    |add31_23_reg_5611                   |   32|   0|   32|          0|
    |add31_24_reg_5673                   |   32|   0|   32|          0|
    |add31_25_reg_5735                   |   32|   0|   32|          0|
    |add31_26_reg_5797                   |   32|   0|   32|          0|
    |add31_27_reg_5881                   |   32|   0|   32|          0|
    |add31_28_reg_5941                   |   32|   0|   32|          0|
    |add31_29_reg_5971                   |   32|   0|   32|          0|
    |add31_2_reg_4247                    |   32|   0|   32|          0|
    |add31_3_reg_4309                    |   32|   0|   32|          0|
    |add31_4_reg_4371                    |   32|   0|   32|          0|
    |add31_5_reg_4433                    |   32|   0|   32|          0|
    |add31_6_reg_4495                    |   32|   0|   32|          0|
    |add31_7_reg_4557                    |   32|   0|   32|          0|
    |add31_8_reg_4619                    |   32|   0|   32|          0|
    |add31_9_reg_4681                    |   32|   0|   32|          0|
    |add31_s_reg_4743                    |   32|   0|   32|          0|
    |add_10_reg_4800                     |   32|   0|   32|          0|
    |add_11_reg_4862                     |   32|   0|   32|          0|
    |add_12_reg_4924                     |   32|   0|   32|          0|
    |add_13_reg_4986                     |   32|   0|   32|          0|
    |add_14_reg_5048                     |   32|   0|   32|          0|
    |add_15_reg_5110                     |   32|   0|   32|          0|
    |add_16_reg_5172                     |   32|   0|   32|          0|
    |add_17_reg_5234                     |   32|   0|   32|          0|
    |add_18_reg_5296                     |   32|   0|   32|          0|
    |add_19_reg_5358                     |   32|   0|   32|          0|
    |add_1_reg_4180                      |   32|   0|   32|          0|
    |add_20_reg_5420                     |   32|   0|   32|          0|
    |add_21_reg_5482                     |   32|   0|   32|          0|
    |add_22_reg_5544                     |   32|   0|   32|          0|
    |add_23_reg_5606                     |   32|   0|   32|          0|
    |add_24_reg_5668                     |   32|   0|   32|          0|
    |add_25_reg_5730                     |   32|   0|   32|          0|
    |add_26_reg_5792                     |   32|   0|   32|          0|
    |add_27_reg_5876                     |   32|   0|   32|          0|
    |add_28_reg_5936                     |   32|   0|   32|          0|
    |add_29_reg_5966                     |   32|   0|   32|          0|
    |add_2_reg_4242                      |   32|   0|   32|          0|
    |add_3_reg_4304                      |   32|   0|   32|          0|
    |add_4_reg_4366                      |   32|   0|   32|          0|
    |add_5_reg_4428                      |   32|   0|   32|          0|
    |add_6_reg_4490                      |   32|   0|   32|          0|
    |add_7_reg_4552                      |   32|   0|   32|          0|
    |add_8_reg_4614                      |   32|   0|   32|          0|
    |add_9_reg_4676                      |   32|   0|   32|          0|
    |add_reg_4118                        |   32|   0|   32|          0|
    |add_s_reg_4738                      |   32|   0|   32|          0|
    |ap_CS_fsm                           |    1|   0|    1|          0|
    |ap_done_reg                         |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter1             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter10            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter100           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter101           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter102           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter103           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter104           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter105           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter106           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter107           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter108           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter109           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter11            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter110           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter111           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter112           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter113           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter114           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter115           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter116           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter117           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter118           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter119           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter12            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter120           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter121           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter122           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter123           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter124           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter125           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter126           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter127           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter128           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter129           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter13            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter130           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter131           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter132           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter133           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter134           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter135           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter136           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter137           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter138           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter139           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter14            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter140           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter141           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter142           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter143           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter144           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter145           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter146           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter147           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter148           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter149           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter15            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter150           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter151           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter152           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter153           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter154           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter155           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter156           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter157           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter158           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter159           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter16            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter160           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter161           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter162           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter163           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter164           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter165           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter166           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter167           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter168           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter169           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter17            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter170           |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter18            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter19            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter2             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter20            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter21            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter22            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter23            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter24            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter25            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter26            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter27            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter28            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter29            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter3             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter30            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter31            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter32            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter33            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter34            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter35            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter36            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter37            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter38            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter39            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter4             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter40            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter41            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter42            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter43            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter44            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter45            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter46            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter47            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter48            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter49            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter5             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter50            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter51            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter52            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter53            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter54            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter55            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter56            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter57            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter58            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter59            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter6             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter60            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter61            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter62            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter63            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter64            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter65            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter66            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter67            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter68            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter69            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter7             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter70            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter71            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter72            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter73            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter74            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter75            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter76            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter77            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter78            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter79            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter8             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter80            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter81            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter82            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter83            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter84            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter85            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter86            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter87            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter88            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter89            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter9             |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter90            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter91            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter92            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter93            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter94            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter95            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter96            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter97            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter98            |    1|   0|    1|          0|
    |ap_enable_reg_pp0_iter99            |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter100_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter101_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter102_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter103_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter104_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter105_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter106_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter107_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter108_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter109_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter10_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter110_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter111_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter112_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter113_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter114_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter115_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter116_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter117_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter118_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter119_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter11_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter120_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter121_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter122_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter123_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter124_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter125_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter126_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter127_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter128_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter129_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter12_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter130_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter131_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter132_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter133_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter134_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter135_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter136_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter137_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter138_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter139_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter13_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter140_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter141_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter142_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter143_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter144_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter145_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter146_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter147_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter148_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter149_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter14_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter150_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter151_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter152_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter153_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter154_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter155_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter156_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter157_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter158_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter159_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter15_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter160_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter161_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter162_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter163_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter164_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter165_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter166_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter167_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter168_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter169_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter16_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter170_reg  |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter17_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter18_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter19_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter1_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter20_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter21_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter22_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter23_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter24_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter25_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter26_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter27_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter28_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter29_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter2_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter30_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter31_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter32_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter33_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter34_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter35_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter36_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter37_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter38_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter39_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter3_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter40_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter41_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter42_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter43_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter44_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter45_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter46_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter47_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter48_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter49_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter4_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter50_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter51_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter52_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter53_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter54_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter55_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter56_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter57_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter58_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter59_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter5_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter60_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter61_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter62_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter63_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter64_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter65_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter66_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter67_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter68_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter69_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter6_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter70_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter71_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter72_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter73_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter74_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter75_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter76_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter77_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter78_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter79_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter7_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter80_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter81_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter82_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter83_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter84_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter85_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter86_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter87_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter88_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter89_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter8_reg    |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter90_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter91_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter92_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter93_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter94_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter95_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter96_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter97_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter98_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter99_reg   |    1|   0|    1|          0|
    |ap_loop_exit_ready_pp0_iter9_reg    |    1|   0|    1|          0|
    |ap_predicate_pred9532_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9540_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9546_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9552_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9558_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9564_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9570_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9576_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9582_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9588_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9594_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9600_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9606_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9612_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9618_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9624_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9630_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9636_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9642_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9648_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9654_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9660_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9666_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9672_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9678_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9684_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9690_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9696_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9702_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9708_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9713_state171      |    1|   0|    1|          0|
    |ap_predicate_pred9719_state171      |    1|   0|    1|          0|
    |c_10_reg_4602                       |   32|   0|   32|          0|
    |c_11_reg_4664                       |   32|   0|   32|          0|
    |c_12_reg_4726                       |   32|   0|   32|          0|
    |c_13_reg_4788                       |   32|   0|   32|          0|
    |c_14_reg_4850                       |   32|   0|   32|          0|
    |c_15_reg_4912                       |   32|   0|   32|          0|
    |c_16_reg_4974                       |   32|   0|   32|          0|
    |c_17_reg_5036                       |   32|   0|   32|          0|
    |c_18_reg_5098                       |   32|   0|   32|          0|
    |c_19_reg_5160                       |   32|   0|   32|          0|
    |c_1_reg_4054                        |   32|   0|   32|          0|
    |c_20_reg_5222                       |   32|   0|   32|          0|
    |c_21_reg_5284                       |   32|   0|   32|          0|
    |c_22_reg_5346                       |   32|   0|   32|          0|
    |c_23_reg_5408                       |   32|   0|   32|          0|
    |c_24_reg_5470                       |   32|   0|   32|          0|
    |c_25_reg_5532                       |   32|   0|   32|          0|
    |c_26_reg_5594                       |   32|   0|   32|          0|
    |c_27_reg_5656                       |   32|   0|   32|          0|
    |c_28_reg_5718                       |   32|   0|   32|          0|
    |c_29_reg_5780                       |   32|   0|   32|          0|
    |c_2_reg_4106                        |   32|   0|   32|          0|
    |c_30_reg_5852                       |   32|   0|   32|          0|
    |c_31_reg_5864                       |   32|   0|   32|          0|
    |c_3_reg_4168                        |   32|   0|   32|          0|
    |c_4_reg_4230                        |   32|   0|   32|          0|
    |c_5_reg_4292                        |   32|   0|   32|          0|
    |c_6_reg_4354                        |   32|   0|   32|          0|
    |c_7_reg_4416                        |   32|   0|   32|          0|
    |c_8_reg_4478                        |   32|   0|   32|          0|
    |c_9_reg_4540                        |   32|   0|   32|          0|
    |c_reg_4012                          |   32|   0|   32|          0|
    |empty_10_reg_3580                   |   32|   0|   32|          0|
    |empty_11_reg_3586                   |   32|   0|   32|          0|
    |empty_12_reg_3592                   |   32|   0|   32|          0|
    |empty_13_reg_3598                   |   32|   0|   32|          0|
    |empty_14_reg_3604                   |   32|   0|   32|          0|
    |empty_15_reg_3610                   |   32|   0|   32|          0|
    |empty_16_reg_3616                   |   32|   0|   32|          0|
    |empty_17_reg_3622                   |   32|   0|   32|          0|
    |empty_18_reg_3628                   |   32|   0|   32|          0|
    |empty_19_reg_3634                   |   32|   0|   32|          0|
    |empty_20_reg_3640                   |   32|   0|   32|          0|
    |empty_21_reg_3646                   |   32|   0|   32|          0|
    |empty_22_reg_3652                   |   32|   0|   32|          0|
    |empty_23_reg_3658                   |   32|   0|   32|          0|
    |empty_24_reg_3664                   |   32|   0|   32|          0|
    |empty_25_reg_3670                   |   32|   0|   32|          0|
    |empty_26_reg_3676                   |   32|   0|   32|          0|
    |empty_27_reg_3682                   |   32|   0|   32|          0|
    |empty_28_reg_3688                   |   32|   0|   32|          0|
    |empty_29_reg_3694                   |   32|   0|   32|          0|
    |empty_30_reg_3700                   |   32|   0|   32|          0|
    |empty_31_reg_3706                   |   32|   0|   32|          0|
    |empty_32_reg_3712                   |   32|   0|   32|          0|
    |empty_33_reg_3718                   |   32|   0|   32|          0|
    |empty_34_reg_3724                   |   32|   0|   32|          0|
    |empty_35_reg_3730                   |   32|   0|   32|          0|
    |empty_36_reg_3736                   |   32|   0|   32|          0|
    |empty_37_reg_3742                   |   32|   0|   32|          0|
    |empty_38_reg_3748                   |   32|   0|   32|          0|
    |empty_39_reg_3754                   |   32|   0|   32|          0|
    |empty_40_reg_3760                   |   32|   0|   32|          0|
    |empty_41_reg_3766                   |   32|   0|   32|          0|
    |empty_42_reg_3772                   |   32|   0|   32|          0|
    |empty_43_reg_3778                   |   32|   0|   32|          0|
    |empty_44_reg_3784                   |   32|   0|   32|          0|
    |empty_45_reg_3790                   |   32|   0|   32|          0|
    |empty_46_reg_3796                   |   32|   0|   32|          0|
    |empty_47_reg_3802                   |   32|   0|   32|          0|
    |empty_48_reg_3808                   |   32|   0|   32|          0|
    |empty_49_reg_3814                   |   32|   0|   32|          0|
    |empty_50_reg_3820                   |   32|   0|   32|          0|
    |empty_51_reg_3826                   |   32|   0|   32|          0|
    |empty_52_reg_3832                   |   32|   0|   32|          0|
    |empty_53_reg_3838                   |   32|   0|   32|          0|
    |empty_54_reg_3844                   |   32|   0|   32|          0|
    |empty_55_reg_3850                   |   32|   0|   32|          0|
    |empty_56_reg_3856                   |   32|   0|   32|          0|
    |empty_57_reg_3862                   |   32|   0|   32|          0|
    |empty_58_reg_3868                   |   32|   0|   32|          0|
    |empty_59_reg_3874                   |   32|   0|   32|          0|
    |empty_5_reg_3550                    |   32|   0|   32|          0|
    |empty_60_reg_3880                   |   32|   0|   32|          0|
    |empty_61_reg_3886                   |   32|   0|   32|          0|
    |empty_62_reg_3892                   |   32|   0|   32|          0|
    |empty_63_reg_3898                   |   32|   0|   32|          0|
    |empty_64_reg_3904                   |   32|   0|   32|          0|
    |empty_65_reg_3910                   |   32|   0|   32|          0|
    |empty_66_reg_3916                   |   32|   0|   32|          0|
    |empty_67_reg_3922                   |   32|   0|   32|          0|
    |empty_6_reg_3556                    |   32|   0|   32|          0|
    |empty_7_reg_3562                    |   32|   0|   32|          0|
    |empty_8_reg_3568                    |   32|   0|   32|          0|
    |empty_9_reg_3574                    |   32|   0|   32|          0|
    |empty_reg_3544                      |   32|   0|   32|          0|
    |k1_fu_484                           |    5|   0|    5|          0|
    |k1_load_reg_3928                    |    5|   0|    5|          0|
    |mul19_10_reg_4701                   |   32|   0|   32|          0|
    |mul19_11_reg_4763                   |   32|   0|   32|          0|
    |mul19_12_reg_4825                   |   32|   0|   32|          0|
    |mul19_13_reg_4887                   |   32|   0|   32|          0|
    |mul19_14_reg_4949                   |   32|   0|   32|          0|
    |mul19_15_reg_5011                   |   32|   0|   32|          0|
    |mul19_16_reg_5073                   |   32|   0|   32|          0|
    |mul19_17_reg_5135                   |   32|   0|   32|          0|
    |mul19_18_reg_5197                   |   32|   0|   32|          0|
    |mul19_19_reg_5259                   |   32|   0|   32|          0|
    |mul19_1_reg_4081                    |   32|   0|   32|          0|
    |mul19_20_reg_5321                   |   32|   0|   32|          0|
    |mul19_21_reg_5383                   |   32|   0|   32|          0|
    |mul19_22_reg_5445                   |   32|   0|   32|          0|
    |mul19_23_reg_5507                   |   32|   0|   32|          0|
    |mul19_24_reg_5569                   |   32|   0|   32|          0|
    |mul19_25_reg_5631                   |   32|   0|   32|          0|
    |mul19_26_reg_5693                   |   32|   0|   32|          0|
    |mul19_27_reg_5755                   |   32|   0|   32|          0|
    |mul19_28_reg_5817                   |   32|   0|   32|          0|
    |mul19_29_reg_5901                   |   32|   0|   32|          0|
    |mul19_2_reg_4143                    |   32|   0|   32|          0|
    |mul19_30_reg_5921                   |   32|   0|   32|          0|
    |mul19_3_reg_4205                    |   32|   0|   32|          0|
    |mul19_4_reg_4267                    |   32|   0|   32|          0|
    |mul19_5_reg_4329                    |   32|   0|   32|          0|
    |mul19_6_reg_4391                    |   32|   0|   32|          0|
    |mul19_7_reg_4453                    |   32|   0|   32|          0|
    |mul19_8_reg_4515                    |   32|   0|   32|          0|
    |mul19_9_reg_4577                    |   32|   0|   32|          0|
    |mul19_s_reg_4639                    |   32|   0|   32|          0|
    |mul1_reg_4029                       |   32|   0|   32|          0|
    |mul24_10_reg_4706                   |   32|   0|   32|          0|
    |mul24_11_reg_4768                   |   32|   0|   32|          0|
    |mul24_12_reg_4830                   |   32|   0|   32|          0|
    |mul24_13_reg_4892                   |   32|   0|   32|          0|
    |mul24_14_reg_4954                   |   32|   0|   32|          0|
    |mul24_15_reg_5016                   |   32|   0|   32|          0|
    |mul24_16_reg_5078                   |   32|   0|   32|          0|
    |mul24_17_reg_5140                   |   32|   0|   32|          0|
    |mul24_18_reg_5202                   |   32|   0|   32|          0|
    |mul24_19_reg_5264                   |   32|   0|   32|          0|
    |mul24_1_reg_4086                    |   32|   0|   32|          0|
    |mul24_20_reg_5326                   |   32|   0|   32|          0|
    |mul24_21_reg_5388                   |   32|   0|   32|          0|
    |mul24_22_reg_5450                   |   32|   0|   32|          0|
    |mul24_23_reg_5512                   |   32|   0|   32|          0|
    |mul24_24_reg_5574                   |   32|   0|   32|          0|
    |mul24_25_reg_5636                   |   32|   0|   32|          0|
    |mul24_26_reg_5698                   |   32|   0|   32|          0|
    |mul24_27_reg_5760                   |   32|   0|   32|          0|
    |mul24_28_reg_5822                   |   32|   0|   32|          0|
    |mul24_29_reg_5906                   |   32|   0|   32|          0|
    |mul24_2_reg_4148                    |   32|   0|   32|          0|
    |mul24_30_reg_5926                   |   32|   0|   32|          0|
    |mul24_3_reg_4210                    |   32|   0|   32|          0|
    |mul24_4_reg_4272                    |   32|   0|   32|          0|
    |mul24_5_reg_4334                    |   32|   0|   32|          0|
    |mul24_6_reg_4396                    |   32|   0|   32|          0|
    |mul24_7_reg_4458                    |   32|   0|   32|          0|
    |mul24_8_reg_4520                    |   32|   0|   32|          0|
    |mul24_9_reg_4582                    |   32|   0|   32|          0|
    |mul24_s_reg_4644                    |   32|   0|   32|          0|
    |mul27_10_reg_4711                   |   32|   0|   32|          0|
    |mul27_11_reg_4773                   |   32|   0|   32|          0|
    |mul27_12_reg_4835                   |   32|   0|   32|          0|
    |mul27_13_reg_4897                   |   32|   0|   32|          0|
    |mul27_14_reg_4959                   |   32|   0|   32|          0|
    |mul27_15_reg_5021                   |   32|   0|   32|          0|
    |mul27_16_reg_5083                   |   32|   0|   32|          0|
    |mul27_17_reg_5145                   |   32|   0|   32|          0|
    |mul27_18_reg_5207                   |   32|   0|   32|          0|
    |mul27_19_reg_5269                   |   32|   0|   32|          0|
    |mul27_1_reg_4091                    |   32|   0|   32|          0|
    |mul27_20_reg_5331                   |   32|   0|   32|          0|
    |mul27_21_reg_5393                   |   32|   0|   32|          0|
    |mul27_22_reg_5455                   |   32|   0|   32|          0|
    |mul27_23_reg_5517                   |   32|   0|   32|          0|
    |mul27_24_reg_5579                   |   32|   0|   32|          0|
    |mul27_25_reg_5641                   |   32|   0|   32|          0|
    |mul27_26_reg_5703                   |   32|   0|   32|          0|
    |mul27_27_reg_5765                   |   32|   0|   32|          0|
    |mul27_28_reg_5827                   |   32|   0|   32|          0|
    |mul27_29_reg_5911                   |   32|   0|   32|          0|
    |mul27_2_reg_4153                    |   32|   0|   32|          0|
    |mul27_30_reg_5931                   |   32|   0|   32|          0|
    |mul27_3_reg_4215                    |   32|   0|   32|          0|
    |mul27_4_reg_4277                    |   32|   0|   32|          0|
    |mul27_5_reg_4339                    |   32|   0|   32|          0|
    |mul27_6_reg_4401                    |   32|   0|   32|          0|
    |mul27_7_reg_4463                    |   32|   0|   32|          0|
    |mul27_8_reg_4525                    |   32|   0|   32|          0|
    |mul27_9_reg_4587                    |   32|   0|   32|          0|
    |mul27_s_reg_4649                    |   32|   0|   32|          0|
    |mul2_reg_4034                       |   32|   0|   32|          0|
    |mul3_reg_4039                       |   32|   0|   32|          0|
    |mul_10_reg_4696                     |   32|   0|   32|          0|
    |mul_11_reg_4758                     |   32|   0|   32|          0|
    |mul_12_reg_4820                     |   32|   0|   32|          0|
    |mul_13_reg_4882                     |   32|   0|   32|          0|
    |mul_14_reg_4944                     |   32|   0|   32|          0|
    |mul_15_reg_5006                     |   32|   0|   32|          0|
    |mul_16_reg_5068                     |   32|   0|   32|          0|
    |mul_17_reg_5130                     |   32|   0|   32|          0|
    |mul_18_reg_5192                     |   32|   0|   32|          0|
    |mul_19_reg_5254                     |   32|   0|   32|          0|
    |mul_1_reg_4076                      |   32|   0|   32|          0|
    |mul_20_reg_5316                     |   32|   0|   32|          0|
    |mul_21_reg_5378                     |   32|   0|   32|          0|
    |mul_22_reg_5440                     |   32|   0|   32|          0|
    |mul_23_reg_5502                     |   32|   0|   32|          0|
    |mul_24_reg_5564                     |   32|   0|   32|          0|
    |mul_25_reg_5626                     |   32|   0|   32|          0|
    |mul_26_reg_5688                     |   32|   0|   32|          0|
    |mul_27_reg_5750                     |   32|   0|   32|          0|
    |mul_28_reg_5812                     |   32|   0|   32|          0|
    |mul_29_reg_5896                     |   32|   0|   32|          0|
    |mul_2_reg_4138                      |   32|   0|   32|          0|
    |mul_30_reg_5916                     |   32|   0|   32|          0|
    |mul_3_reg_4200                      |   32|   0|   32|          0|
    |mul_4_reg_4262                      |   32|   0|   32|          0|
    |mul_5_reg_4324                      |   32|   0|   32|          0|
    |mul_6_reg_4386                      |   32|   0|   32|          0|
    |mul_7_reg_4448                      |   32|   0|   32|          0|
    |mul_8_reg_4510                      |   32|   0|   32|          0|
    |mul_9_reg_4572                      |   32|   0|   32|          0|
    |mul_reg_4024                        |   32|   0|   32|          0|
    |mul_s_reg_4634                      |   32|   0|   32|          0|
    |s_10_reg_4608                       |   32|   0|   32|          0|
    |s_11_reg_4670                       |   32|   0|   32|          0|
    |s_12_reg_4732                       |   32|   0|   32|          0|
    |s_13_reg_4794                       |   32|   0|   32|          0|
    |s_14_reg_4856                       |   32|   0|   32|          0|
    |s_15_reg_4918                       |   32|   0|   32|          0|
    |s_16_reg_4980                       |   32|   0|   32|          0|
    |s_17_reg_5042                       |   32|   0|   32|          0|
    |s_18_reg_5104                       |   32|   0|   32|          0|
    |s_19_reg_5166                       |   32|   0|   32|          0|
    |s_1_reg_4060                        |   32|   0|   32|          0|
    |s_20_reg_5228                       |   32|   0|   32|          0|
    |s_21_reg_5290                       |   32|   0|   32|          0|
    |s_22_reg_5352                       |   32|   0|   32|          0|
    |s_23_reg_5414                       |   32|   0|   32|          0|
    |s_24_reg_5476                       |   32|   0|   32|          0|
    |s_25_reg_5538                       |   32|   0|   32|          0|
    |s_26_reg_5600                       |   32|   0|   32|          0|
    |s_27_reg_5662                       |   32|   0|   32|          0|
    |s_28_reg_5724                       |   32|   0|   32|          0|
    |s_29_reg_5786                       |   32|   0|   32|          0|
    |s_2_reg_4112                        |   32|   0|   32|          0|
    |s_30_reg_5858                       |   32|   0|   32|          0|
    |s_31_reg_5870                       |   32|   0|   32|          0|
    |s_3_reg_4174                        |   32|   0|   32|          0|
    |s_4_reg_4236                        |   32|   0|   32|          0|
    |s_5_reg_4298                        |   32|   0|   32|          0|
    |s_6_reg_4360                        |   32|   0|   32|          0|
    |s_7_reg_4422                        |   32|   0|   32|          0|
    |s_8_reg_4484                        |   32|   0|   32|          0|
    |s_9_reg_4546                        |   32|   0|   32|          0|
    |s_reg_4018                          |   32|   0|   32|          0|
    |sub_10_reg_4748                     |   32|   0|   32|          0|
    |sub_11_reg_4810                     |   32|   0|   32|          0|
    |sub_12_reg_4872                     |   32|   0|   32|          0|
    |sub_13_reg_4934                     |   32|   0|   32|          0|
    |sub_14_reg_4996                     |   32|   0|   32|          0|
    |sub_15_reg_5058                     |   32|   0|   32|          0|
    |sub_16_reg_5120                     |   32|   0|   32|          0|
    |sub_17_reg_5182                     |   32|   0|   32|          0|
    |sub_18_reg_5244                     |   32|   0|   32|          0|
    |sub_19_reg_5306                     |   32|   0|   32|          0|
    |sub_1_reg_4128                      |   32|   0|   32|          0|
    |sub_20_reg_5368                     |   32|   0|   32|          0|
    |sub_21_reg_5430                     |   32|   0|   32|          0|
    |sub_22_reg_5492                     |   32|   0|   32|          0|
    |sub_23_reg_5554                     |   32|   0|   32|          0|
    |sub_24_reg_5616                     |   32|   0|   32|          0|
    |sub_25_reg_5678                     |   32|   0|   32|          0|
    |sub_26_reg_5740                     |   32|   0|   32|          0|
    |sub_27_reg_5802                     |   32|   0|   32|          0|
    |sub_28_reg_5886                     |   32|   0|   32|          0|
    |sub_29_reg_5946                     |   32|   0|   32|          0|
    |sub_2_reg_4190                      |   32|   0|   32|          0|
    |sub_30_reg_5956                     |   32|   0|   32|          0|
    |sub_3_reg_4252                      |   32|   0|   32|          0|
    |sub_4_reg_4314                      |   32|   0|   32|          0|
    |sub_5_reg_4376                      |   32|   0|   32|          0|
    |sub_6_reg_4438                      |   32|   0|   32|          0|
    |sub_7_reg_4500                      |   32|   0|   32|          0|
    |sub_8_reg_4562                      |   32|   0|   32|          0|
    |sub_9_reg_4624                      |   32|   0|   32|          0|
    |sub_reg_4066                        |   32|   0|   32|          0|
    |sub_s_reg_4686                      |   32|   0|   32|          0|
    |zext_ln22_reg_3932                  |    5|   0|   64|         59|
    |add28_30_reg_5961                   |   64|  32|   32|          0|
    |empty_10_reg_3580                   |   64|  32|   32|          0|
    |empty_11_reg_3586                   |   64|  32|   32|          0|
    |empty_12_reg_3592                   |   64|  32|   32|          0|
    |empty_13_reg_3598                   |   64|  32|   32|          0|
    |empty_14_reg_3604                   |   64|  32|   32|          0|
    |empty_15_reg_3610                   |   64|  32|   32|          0|
    |empty_16_reg_3616                   |   64|  32|   32|          0|
    |empty_17_reg_3622                   |   64|  32|   32|          0|
    |empty_18_reg_3628                   |   64|  32|   32|          0|
    |empty_19_reg_3634                   |   64|  32|   32|          0|
    |empty_20_reg_3640                   |   64|  32|   32|          0|
    |empty_21_reg_3646                   |   64|  32|   32|          0|
    |empty_22_reg_3652                   |   64|  32|   32|          0|
    |empty_23_reg_3658                   |   64|  32|   32|          0|
    |empty_24_reg_3664                   |   64|  32|   32|          0|
    |empty_25_reg_3670                   |   64|  32|   32|          0|
    |empty_26_reg_3676                   |   64|  32|   32|          0|
    |empty_27_reg_3682                   |   64|  32|   32|          0|
    |empty_28_reg_3688                   |   64|  32|   32|          0|
    |empty_29_reg_3694                   |   64|  32|   32|          0|
    |empty_30_reg_3700                   |   64|  32|   32|          0|
    |empty_31_reg_3706                   |   64|  32|   32|          0|
    |empty_32_reg_3712                   |   64|  32|   32|          0|
    |empty_33_reg_3718                   |   64|  32|   32|          0|
    |empty_34_reg_3724                   |   64|  32|   32|          0|
    |empty_35_reg_3730                   |   64|  32|   32|          0|
    |empty_36_reg_3736                   |   64|  32|   32|          0|
    |empty_37_reg_3742                   |   64|  32|   32|          0|
    |empty_38_reg_3748                   |   64|  32|   32|          0|
    |empty_39_reg_3754                   |   64|  32|   32|          0|
    |empty_40_reg_3760                   |   64|  32|   32|          0|
    |empty_41_reg_3766                   |   64|  32|   32|          0|
    |empty_42_reg_3772                   |   64|  32|   32|          0|
    |empty_43_reg_3778                   |   64|  32|   32|          0|
    |empty_44_reg_3784                   |   64|  32|   32|          0|
    |empty_45_reg_3790                   |   64|  32|   32|          0|
    |empty_46_reg_3796                   |   64|  32|   32|          0|
    |empty_47_reg_3802                   |   64|  32|   32|          0|
    |empty_48_reg_3808                   |   64|  32|   32|          0|
    |empty_49_reg_3814                   |   64|  32|   32|          0|
    |empty_50_reg_3820                   |   64|  32|   32|          0|
    |empty_51_reg_3826                   |   64|  32|   32|          0|
    |empty_52_reg_3832                   |   64|  32|   32|          0|
    |empty_53_reg_3838                   |   64|  32|   32|          0|
    |empty_54_reg_3844                   |   64|  32|   32|          0|
    |empty_55_reg_3850                   |   64|  32|   32|          0|
    |empty_56_reg_3856                   |   64|  32|   32|          0|
    |empty_57_reg_3862                   |   64|  32|   32|          0|
    |empty_58_reg_3868                   |   64|  32|   32|          0|
    |empty_59_reg_3874                   |   64|  32|   32|          0|
    |empty_5_reg_3550                    |   64|  32|   32|          0|
    |empty_60_reg_3880                   |   64|  32|   32|          0|
    |empty_61_reg_3886                   |   64|  32|   32|          0|
    |empty_62_reg_3892                   |   64|  32|   32|          0|
    |empty_63_reg_3898                   |   64|  32|   32|          0|
    |empty_64_reg_3904                   |   64|  32|   32|          0|
    |empty_65_reg_3910                   |   64|  32|   32|          0|
    |empty_66_reg_3916                   |   64|  32|   32|          0|
    |empty_67_reg_3922                   |   64|  32|   32|          0|
    |empty_6_reg_3556                    |   64|  32|   32|          0|
    |empty_7_reg_3562                    |   64|  32|   32|          0|
    |empty_8_reg_3568                    |   64|  32|   32|          0|
    |empty_9_reg_3574                    |   64|  32|   32|          0|
    |empty_reg_3544                      |   64|  32|   32|          0|
    |k1_load_reg_3928                    |   64|  32|    5|          0|
    |sub_30_reg_5956                     |   64|  32|   32|          0|
    |zext_ln22_reg_3932                  |   64|  32|   64|         59|
    +------------------------------------+-----+----+-----+-----------+
    |Total                               |16965|2176|14853|        118|
    +------------------------------------+-----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+----------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------------+-----+-----+------------+----------------+--------------+
|ap_clk              |   in|    1|  ap_ctrl_hs|             dft|  return value|
|ap_rst              |   in|    1|  ap_ctrl_hs|             dft|  return value|
|ap_start            |   in|    1|  ap_ctrl_hs|             dft|  return value|
|ap_done             |  out|    1|  ap_ctrl_hs|             dft|  return value|
|ap_idle             |  out|    1|  ap_ctrl_hs|             dft|  return value|
|ap_ready            |  out|    1|  ap_ctrl_hs|             dft|  return value|
|real_sample_0       |   in|   32|     ap_none|   real_sample_0|       pointer|
|real_sample_1       |   in|   32|     ap_none|   real_sample_1|       pointer|
|real_sample_2       |   in|   32|     ap_none|   real_sample_2|       pointer|
|real_sample_3       |   in|   32|     ap_none|   real_sample_3|       pointer|
|real_sample_4       |   in|   32|     ap_none|   real_sample_4|       pointer|
|real_sample_5       |   in|   32|     ap_none|   real_sample_5|       pointer|
|real_sample_6       |   in|   32|     ap_none|   real_sample_6|       pointer|
|real_sample_7       |   in|   32|     ap_none|   real_sample_7|       pointer|
|real_sample_8       |   in|   32|     ap_none|   real_sample_8|       pointer|
|real_sample_9       |   in|   32|     ap_none|   real_sample_9|       pointer|
|real_sample_10      |   in|   32|     ap_none|  real_sample_10|       pointer|
|real_sample_11      |   in|   32|     ap_none|  real_sample_11|       pointer|
|real_sample_12      |   in|   32|     ap_none|  real_sample_12|       pointer|
|real_sample_13      |   in|   32|     ap_none|  real_sample_13|       pointer|
|real_sample_14      |   in|   32|     ap_none|  real_sample_14|       pointer|
|real_sample_15      |   in|   32|     ap_none|  real_sample_15|       pointer|
|real_sample_16      |   in|   32|     ap_none|  real_sample_16|       pointer|
|real_sample_17      |   in|   32|     ap_none|  real_sample_17|       pointer|
|real_sample_18      |   in|   32|     ap_none|  real_sample_18|       pointer|
|real_sample_19      |   in|   32|     ap_none|  real_sample_19|       pointer|
|real_sample_20      |   in|   32|     ap_none|  real_sample_20|       pointer|
|real_sample_21      |   in|   32|     ap_none|  real_sample_21|       pointer|
|real_sample_22      |   in|   32|     ap_none|  real_sample_22|       pointer|
|real_sample_23      |   in|   32|     ap_none|  real_sample_23|       pointer|
|real_sample_24      |   in|   32|     ap_none|  real_sample_24|       pointer|
|real_sample_25      |   in|   32|     ap_none|  real_sample_25|       pointer|
|real_sample_26      |   in|   32|     ap_none|  real_sample_26|       pointer|
|real_sample_27      |   in|   32|     ap_none|  real_sample_27|       pointer|
|real_sample_28      |   in|   32|     ap_none|  real_sample_28|       pointer|
|real_sample_29      |   in|   32|     ap_none|  real_sample_29|       pointer|
|real_sample_30      |   in|   32|     ap_none|  real_sample_30|       pointer|
|real_sample_31      |   in|   32|     ap_none|  real_sample_31|       pointer|
|imag_sample_0       |   in|   32|     ap_none|   imag_sample_0|       pointer|
|imag_sample_1       |   in|   32|     ap_none|   imag_sample_1|       pointer|
|imag_sample_2       |   in|   32|     ap_none|   imag_sample_2|       pointer|
|imag_sample_3       |   in|   32|     ap_none|   imag_sample_3|       pointer|
|imag_sample_4       |   in|   32|     ap_none|   imag_sample_4|       pointer|
|imag_sample_5       |   in|   32|     ap_none|   imag_sample_5|       pointer|
|imag_sample_6       |   in|   32|     ap_none|   imag_sample_6|       pointer|
|imag_sample_7       |   in|   32|     ap_none|   imag_sample_7|       pointer|
|imag_sample_8       |   in|   32|     ap_none|   imag_sample_8|       pointer|
|imag_sample_9       |   in|   32|     ap_none|   imag_sample_9|       pointer|
|imag_sample_10      |   in|   32|     ap_none|  imag_sample_10|       pointer|
|imag_sample_11      |   in|   32|     ap_none|  imag_sample_11|       pointer|
|imag_sample_12      |   in|   32|     ap_none|  imag_sample_12|       pointer|
|imag_sample_13      |   in|   32|     ap_none|  imag_sample_13|       pointer|
|imag_sample_14      |   in|   32|     ap_none|  imag_sample_14|       pointer|
|imag_sample_15      |   in|   32|     ap_none|  imag_sample_15|       pointer|
|imag_sample_16      |   in|   32|     ap_none|  imag_sample_16|       pointer|
|imag_sample_17      |   in|   32|     ap_none|  imag_sample_17|       pointer|
|imag_sample_18      |   in|   32|     ap_none|  imag_sample_18|       pointer|
|imag_sample_19      |   in|   32|     ap_none|  imag_sample_19|       pointer|
|imag_sample_20      |   in|   32|     ap_none|  imag_sample_20|       pointer|
|imag_sample_21      |   in|   32|     ap_none|  imag_sample_21|       pointer|
|imag_sample_22      |   in|   32|     ap_none|  imag_sample_22|       pointer|
|imag_sample_23      |   in|   32|     ap_none|  imag_sample_23|       pointer|
|imag_sample_24      |   in|   32|     ap_none|  imag_sample_24|       pointer|
|imag_sample_25      |   in|   32|     ap_none|  imag_sample_25|       pointer|
|imag_sample_26      |   in|   32|     ap_none|  imag_sample_26|       pointer|
|imag_sample_27      |   in|   32|     ap_none|  imag_sample_27|       pointer|
|imag_sample_28      |   in|   32|     ap_none|  imag_sample_28|       pointer|
|imag_sample_29      |   in|   32|     ap_none|  imag_sample_29|       pointer|
|imag_sample_30      |   in|   32|     ap_none|  imag_sample_30|       pointer|
|imag_sample_31      |   in|   32|     ap_none|  imag_sample_31|       pointer|
|real_out_0          |  out|   32|      ap_vld|      real_out_0|       pointer|
|real_out_0_ap_vld   |  out|    1|      ap_vld|      real_out_0|       pointer|
|real_out_1          |  out|   32|      ap_vld|      real_out_1|       pointer|
|real_out_1_ap_vld   |  out|    1|      ap_vld|      real_out_1|       pointer|
|real_out_2          |  out|   32|      ap_vld|      real_out_2|       pointer|
|real_out_2_ap_vld   |  out|    1|      ap_vld|      real_out_2|       pointer|
|real_out_3          |  out|   32|      ap_vld|      real_out_3|       pointer|
|real_out_3_ap_vld   |  out|    1|      ap_vld|      real_out_3|       pointer|
|real_out_4          |  out|   32|      ap_vld|      real_out_4|       pointer|
|real_out_4_ap_vld   |  out|    1|      ap_vld|      real_out_4|       pointer|
|real_out_5          |  out|   32|      ap_vld|      real_out_5|       pointer|
|real_out_5_ap_vld   |  out|    1|      ap_vld|      real_out_5|       pointer|
|real_out_6          |  out|   32|      ap_vld|      real_out_6|       pointer|
|real_out_6_ap_vld   |  out|    1|      ap_vld|      real_out_6|       pointer|
|real_out_7          |  out|   32|      ap_vld|      real_out_7|       pointer|
|real_out_7_ap_vld   |  out|    1|      ap_vld|      real_out_7|       pointer|
|real_out_8          |  out|   32|      ap_vld|      real_out_8|       pointer|
|real_out_8_ap_vld   |  out|    1|      ap_vld|      real_out_8|       pointer|
|real_out_9          |  out|   32|      ap_vld|      real_out_9|       pointer|
|real_out_9_ap_vld   |  out|    1|      ap_vld|      real_out_9|       pointer|
|real_out_10         |  out|   32|      ap_vld|     real_out_10|       pointer|
|real_out_10_ap_vld  |  out|    1|      ap_vld|     real_out_10|       pointer|
|real_out_11         |  out|   32|      ap_vld|     real_out_11|       pointer|
|real_out_11_ap_vld  |  out|    1|      ap_vld|     real_out_11|       pointer|
|real_out_12         |  out|   32|      ap_vld|     real_out_12|       pointer|
|real_out_12_ap_vld  |  out|    1|      ap_vld|     real_out_12|       pointer|
|real_out_13         |  out|   32|      ap_vld|     real_out_13|       pointer|
|real_out_13_ap_vld  |  out|    1|      ap_vld|     real_out_13|       pointer|
|real_out_14         |  out|   32|      ap_vld|     real_out_14|       pointer|
|real_out_14_ap_vld  |  out|    1|      ap_vld|     real_out_14|       pointer|
|real_out_15         |  out|   32|      ap_vld|     real_out_15|       pointer|
|real_out_15_ap_vld  |  out|    1|      ap_vld|     real_out_15|       pointer|
|real_out_16         |  out|   32|      ap_vld|     real_out_16|       pointer|
|real_out_16_ap_vld  |  out|    1|      ap_vld|     real_out_16|       pointer|
|real_out_17         |  out|   32|      ap_vld|     real_out_17|       pointer|
|real_out_17_ap_vld  |  out|    1|      ap_vld|     real_out_17|       pointer|
|real_out_18         |  out|   32|      ap_vld|     real_out_18|       pointer|
|real_out_18_ap_vld  |  out|    1|      ap_vld|     real_out_18|       pointer|
|real_out_19         |  out|   32|      ap_vld|     real_out_19|       pointer|
|real_out_19_ap_vld  |  out|    1|      ap_vld|     real_out_19|       pointer|
|real_out_20         |  out|   32|      ap_vld|     real_out_20|       pointer|
|real_out_20_ap_vld  |  out|    1|      ap_vld|     real_out_20|       pointer|
|real_out_21         |  out|   32|      ap_vld|     real_out_21|       pointer|
|real_out_21_ap_vld  |  out|    1|      ap_vld|     real_out_21|       pointer|
|real_out_22         |  out|   32|      ap_vld|     real_out_22|       pointer|
|real_out_22_ap_vld  |  out|    1|      ap_vld|     real_out_22|       pointer|
|real_out_23         |  out|   32|      ap_vld|     real_out_23|       pointer|
|real_out_23_ap_vld  |  out|    1|      ap_vld|     real_out_23|       pointer|
|real_out_24         |  out|   32|      ap_vld|     real_out_24|       pointer|
|real_out_24_ap_vld  |  out|    1|      ap_vld|     real_out_24|       pointer|
|real_out_25         |  out|   32|      ap_vld|     real_out_25|       pointer|
|real_out_25_ap_vld  |  out|    1|      ap_vld|     real_out_25|       pointer|
|real_out_26         |  out|   32|      ap_vld|     real_out_26|       pointer|
|real_out_26_ap_vld  |  out|    1|      ap_vld|     real_out_26|       pointer|
|real_out_27         |  out|   32|      ap_vld|     real_out_27|       pointer|
|real_out_27_ap_vld  |  out|    1|      ap_vld|     real_out_27|       pointer|
|real_out_28         |  out|   32|      ap_vld|     real_out_28|       pointer|
|real_out_28_ap_vld  |  out|    1|      ap_vld|     real_out_28|       pointer|
|real_out_29         |  out|   32|      ap_vld|     real_out_29|       pointer|
|real_out_29_ap_vld  |  out|    1|      ap_vld|     real_out_29|       pointer|
|real_out_30         |  out|   32|      ap_vld|     real_out_30|       pointer|
|real_out_30_ap_vld  |  out|    1|      ap_vld|     real_out_30|       pointer|
|real_out_31         |  out|   32|      ap_vld|     real_out_31|       pointer|
|real_out_31_ap_vld  |  out|    1|      ap_vld|     real_out_31|       pointer|
|imag_out_0          |  out|   32|      ap_vld|      imag_out_0|       pointer|
|imag_out_0_ap_vld   |  out|    1|      ap_vld|      imag_out_0|       pointer|
|imag_out_1          |  out|   32|      ap_vld|      imag_out_1|       pointer|
|imag_out_1_ap_vld   |  out|    1|      ap_vld|      imag_out_1|       pointer|
|imag_out_2          |  out|   32|      ap_vld|      imag_out_2|       pointer|
|imag_out_2_ap_vld   |  out|    1|      ap_vld|      imag_out_2|       pointer|
|imag_out_3          |  out|   32|      ap_vld|      imag_out_3|       pointer|
|imag_out_3_ap_vld   |  out|    1|      ap_vld|      imag_out_3|       pointer|
|imag_out_4          |  out|   32|      ap_vld|      imag_out_4|       pointer|
|imag_out_4_ap_vld   |  out|    1|      ap_vld|      imag_out_4|       pointer|
|imag_out_5          |  out|   32|      ap_vld|      imag_out_5|       pointer|
|imag_out_5_ap_vld   |  out|    1|      ap_vld|      imag_out_5|       pointer|
|imag_out_6          |  out|   32|      ap_vld|      imag_out_6|       pointer|
|imag_out_6_ap_vld   |  out|    1|      ap_vld|      imag_out_6|       pointer|
|imag_out_7          |  out|   32|      ap_vld|      imag_out_7|       pointer|
|imag_out_7_ap_vld   |  out|    1|      ap_vld|      imag_out_7|       pointer|
|imag_out_8          |  out|   32|      ap_vld|      imag_out_8|       pointer|
|imag_out_8_ap_vld   |  out|    1|      ap_vld|      imag_out_8|       pointer|
|imag_out_9          |  out|   32|      ap_vld|      imag_out_9|       pointer|
|imag_out_9_ap_vld   |  out|    1|      ap_vld|      imag_out_9|       pointer|
|imag_out_10         |  out|   32|      ap_vld|     imag_out_10|       pointer|
|imag_out_10_ap_vld  |  out|    1|      ap_vld|     imag_out_10|       pointer|
|imag_out_11         |  out|   32|      ap_vld|     imag_out_11|       pointer|
|imag_out_11_ap_vld  |  out|    1|      ap_vld|     imag_out_11|       pointer|
|imag_out_12         |  out|   32|      ap_vld|     imag_out_12|       pointer|
|imag_out_12_ap_vld  |  out|    1|      ap_vld|     imag_out_12|       pointer|
|imag_out_13         |  out|   32|      ap_vld|     imag_out_13|       pointer|
|imag_out_13_ap_vld  |  out|    1|      ap_vld|     imag_out_13|       pointer|
|imag_out_14         |  out|   32|      ap_vld|     imag_out_14|       pointer|
|imag_out_14_ap_vld  |  out|    1|      ap_vld|     imag_out_14|       pointer|
|imag_out_15         |  out|   32|      ap_vld|     imag_out_15|       pointer|
|imag_out_15_ap_vld  |  out|    1|      ap_vld|     imag_out_15|       pointer|
|imag_out_16         |  out|   32|      ap_vld|     imag_out_16|       pointer|
|imag_out_16_ap_vld  |  out|    1|      ap_vld|     imag_out_16|       pointer|
|imag_out_17         |  out|   32|      ap_vld|     imag_out_17|       pointer|
|imag_out_17_ap_vld  |  out|    1|      ap_vld|     imag_out_17|       pointer|
|imag_out_18         |  out|   32|      ap_vld|     imag_out_18|       pointer|
|imag_out_18_ap_vld  |  out|    1|      ap_vld|     imag_out_18|       pointer|
|imag_out_19         |  out|   32|      ap_vld|     imag_out_19|       pointer|
|imag_out_19_ap_vld  |  out|    1|      ap_vld|     imag_out_19|       pointer|
|imag_out_20         |  out|   32|      ap_vld|     imag_out_20|       pointer|
|imag_out_20_ap_vld  |  out|    1|      ap_vld|     imag_out_20|       pointer|
|imag_out_21         |  out|   32|      ap_vld|     imag_out_21|       pointer|
|imag_out_21_ap_vld  |  out|    1|      ap_vld|     imag_out_21|       pointer|
|imag_out_22         |  out|   32|      ap_vld|     imag_out_22|       pointer|
|imag_out_22_ap_vld  |  out|    1|      ap_vld|     imag_out_22|       pointer|
|imag_out_23         |  out|   32|      ap_vld|     imag_out_23|       pointer|
|imag_out_23_ap_vld  |  out|    1|      ap_vld|     imag_out_23|       pointer|
|imag_out_24         |  out|   32|      ap_vld|     imag_out_24|       pointer|
|imag_out_24_ap_vld  |  out|    1|      ap_vld|     imag_out_24|       pointer|
|imag_out_25         |  out|   32|      ap_vld|     imag_out_25|       pointer|
|imag_out_25_ap_vld  |  out|    1|      ap_vld|     imag_out_25|       pointer|
|imag_out_26         |  out|   32|      ap_vld|     imag_out_26|       pointer|
|imag_out_26_ap_vld  |  out|    1|      ap_vld|     imag_out_26|       pointer|
|imag_out_27         |  out|   32|      ap_vld|     imag_out_27|       pointer|
|imag_out_27_ap_vld  |  out|    1|      ap_vld|     imag_out_27|       pointer|
|imag_out_28         |  out|   32|      ap_vld|     imag_out_28|       pointer|
|imag_out_28_ap_vld  |  out|    1|      ap_vld|     imag_out_28|       pointer|
|imag_out_29         |  out|   32|      ap_vld|     imag_out_29|       pointer|
|imag_out_29_ap_vld  |  out|    1|      ap_vld|     imag_out_29|       pointer|
|imag_out_30         |  out|   32|      ap_vld|     imag_out_30|       pointer|
|imag_out_30_ap_vld  |  out|    1|      ap_vld|     imag_out_30|       pointer|
|imag_out_31         |  out|   32|      ap_vld|     imag_out_31|       pointer|
|imag_out_31_ap_vld  |  out|    1|      ap_vld|     imag_out_31|       pointer|
+--------------------+-----+-----+------------+----------------+--------------+

rm dft_test.bin
