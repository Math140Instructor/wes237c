LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 31 21:17:07 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp'.
INFO: [HLS 200-10] Opening and resetting solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.06 seconds. Elapsed time: 2.77 seconds; current allocated memory: 659.020 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.77 seconds. CPU system time: 0.73 seconds. Elapsed time: 1.62 seconds; current allocated memory: 660.582 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 97 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 80 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 50 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 50 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 50 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 50 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 537 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,585 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 601 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 671 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 680 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_10_1> at dft.cpp:10:20 
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_27_3> at dft.cpp:27:20 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_18_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:18:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_18_2' (dft.cpp:18:22) in function 'dft' completely with a factor of 32 (dft.cpp:5:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (./coefficients32_2D.h:4:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.35 seconds. CPU system time: 0.86 seconds. Elapsed time: 8.69 seconds; current allocated memory: 670.289 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 670.289 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 671.070 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 671.070 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.13 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 694.445 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 703.977 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_10_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_10_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 172, loop 'VITIS_LOOP_10_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.36 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.45 seconds; current allocated memory: 708.059 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.16 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.24 seconds; current allocated memory: 709.773 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_27_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_27_3'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'VITIS_LOOP_27_3'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.17 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 711.117 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 711.117 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 712.895 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 712.895 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_10_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_10_1' pipeline 'VITIS_LOOP_10_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_10_1' is 21160 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_10_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_10_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.18 seconds. CPU system time: 0.14 seconds. Elapsed time: 1.95 seconds; current allocated memory: 737.434 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_27_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_27_3' pipeline 'VITIS_LOOP_27_3' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_27_3'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.59 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.75 seconds; current allocated memory: 748.781 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [RTMG 210-278] Implementing memory 'dft_real_out_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.27 seconds; current allocated memory: 748.781 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.65 seconds. CPU system time: 0.46 seconds. Elapsed time: 3.57 seconds; current allocated memory: 753.168 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.69 seconds. CPU system time: 0.11 seconds. Elapsed time: 1.03 seconds; current allocated memory: 761.395 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 118.375 MB.
INFO: [HLS 200-112] Total CPU user time: 14.72 seconds. Total CPU system time: 3.54 seconds. Total elapsed time: 29.8 seconds; peak allocated memory: 761.395 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 31s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q2


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sat Oct 31 21:17:34 2026

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
    |      257|      257|  2.570 us|  2.570 us|  258|  258|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +------------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                          |                              |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                 |            Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +------------------------------------------+------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_10_1_fu_818   |dft_Pipeline_VITIS_LOOP_10_1  |      204|      204|  2.040 us|  2.040 us|   33|   33|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |grp_dft_Pipeline_VITIS_LOOP_27_3_fu_1016  |dft_Pipeline_VITIS_LOOP_27_3  |       34|       34|  0.340 us|  0.340 us|   33|   33|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |       64|  640|   55218|  91172|    -|
|Memory           |        2|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    558|    -|
|Register         |        -|    -|    3990|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       66|  640|   59208|  91730|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       23|  290|      55|    172|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |                 Instance                 |            Module            | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_10_1_fu_818   |dft_Pipeline_VITIS_LOOP_10_1  |       64|  640|  55203|  91106|    0|
    |grp_dft_Pipeline_VITIS_LOOP_27_3_fu_1016  |dft_Pipeline_VITIS_LOOP_27_3  |        0|    0|     15|     66|    0|
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+
    |Total                                     |                              |       64|  640|  55218|  91172|    0|
    +------------------------------------------+------------------------------+---------+-----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |   Memory   |         Module         | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |real_out_U  |real_out_RAM_AUTO_1R1W  |        1|  0|   0|    0|    32|   32|     1|         1024|
    |imag_out_U  |real_out_RAM_AUTO_1R1W  |        1|  0|   0|    0|    32|   32|     1|         1024|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total       |                        |        2|  0|   0|    0|    64|   64|     2|         2048|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    N/A

    * Multiplexer: 
    +----------------------------+-----+-----------+-----+-----------+
    |            Name            | LUT | Input Size| Bits| Total Bits|
    +----------------------------+-----+-----------+-----+-----------+
    |ap_NS_fsm                   |  106|         21|    1|         21|
    |imag_out_address0           |   14|          3|    5|         15|
    |imag_out_ce0                |   14|          3|    1|          3|
    |imag_out_we0                |    9|          2|    1|          2|
    |imag_sample_address0        |    9|          2|    5|         10|
    |imag_sample_address0_local  |   81|         17|    5|         85|
    |imag_sample_address1_local  |   81|         17|    5|         85|
    |imag_sample_ce0             |    9|          2|    1|          2|
    |imag_sample_we0             |    9|          2|    1|          2|
    |real_out_address0           |   14|          3|    5|         15|
    |real_out_ce0                |   14|          3|    1|          3|
    |real_out_we0                |    9|          2|    1|          2|
    |real_sample_address0        |    9|          2|    5|         10|
    |real_sample_address0_local  |   81|         17|    5|         85|
    |real_sample_address1_local  |   81|         17|    5|         85|
    |real_sample_ce0             |    9|          2|    1|          2|
    |real_sample_we0             |    9|          2|    1|          2|
    +----------------------------+-----+-----------+-----+-----------+
    |Total                       |  558|        117|   49|        429|
    +----------------------------+-----+-----------+-----+-----------+

    * Register: 
    +-------------------------------------------------------+----+----+-----+-----------+
    |                          Name                         | FF | LUT| Bits| Const Bits|
    +-------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                              |  20|   0|   20|          0|
    |empty_100_reg_2061                                     |  32|   0|   32|          0|
    |empty_101_reg_2066                                     |  32|   0|   32|          0|
    |empty_102_reg_2071                                     |  32|   0|   32|          0|
    |empty_103_reg_2076                                     |  32|   0|   32|          0|
    |empty_104_reg_2081                                     |  32|   0|   32|          0|
    |empty_105_reg_2086                                     |  32|   0|   32|          0|
    |empty_106_reg_2091                                     |  32|   0|   32|          0|
    |empty_107_reg_2096                                     |  32|   0|   32|          0|
    |empty_108_reg_2101                                     |  32|   0|   32|          0|
    |empty_109_reg_2106                                     |  32|   0|   32|          0|
    |empty_110_reg_2111                                     |  32|   0|   32|          0|
    |empty_111_reg_2116                                     |  32|   0|   32|          0|
    |empty_112_reg_2121                                     |  32|   0|   32|          0|
    |empty_113_reg_2126                                     |  32|   0|   32|          0|
    |empty_114_reg_2131                                     |  32|   0|   32|          0|
    |empty_115_reg_2136                                     |  32|   0|   32|          0|
    |empty_116_reg_2141                                     |  32|   0|   32|          0|
    |empty_117_reg_2146                                     |  32|   0|   32|          0|
    |empty_118_reg_2151                                     |  32|   0|   32|          0|
    |empty_119_reg_2156                                     |  32|   0|   32|          0|
    |empty_120_reg_2161                                     |  32|   0|   32|          0|
    |empty_121_reg_2166                                     |  32|   0|   32|          0|
    |empty_122_reg_2171                                     |  32|   0|   32|          0|
    |empty_123_reg_2176                                     |  32|   0|   32|          0|
    |empty_124_reg_2181                                     |  32|   0|   32|          0|
    |empty_125_reg_2186                                     |  32|   0|   32|          0|
    |empty_126_reg_2191                                     |  32|   0|   32|          0|
    |empty_127_reg_2196                                     |  32|   0|   32|          0|
    |empty_128_reg_2201                                     |  32|   0|   32|          0|
    |empty_129_reg_2206                                     |  32|   0|   32|          0|
    |empty_130_reg_2211                                     |  32|   0|   32|          0|
    |empty_131_reg_2216                                     |  32|   0|   32|          0|
    |empty_132_reg_2221                                     |  32|   0|   32|          0|
    |empty_70_reg_1911                                      |  32|   0|   32|          0|
    |empty_71_reg_1916                                      |  32|   0|   32|          0|
    |empty_72_reg_1921                                      |  32|   0|   32|          0|
    |empty_73_reg_1926                                      |  32|   0|   32|          0|
    |empty_74_reg_1931                                      |  32|   0|   32|          0|
    |empty_75_reg_1936                                      |  32|   0|   32|          0|
    |empty_76_reg_1941                                      |  32|   0|   32|          0|
    |empty_77_reg_1946                                      |  32|   0|   32|          0|
    |empty_78_reg_1951                                      |  32|   0|   32|          0|
    |empty_79_reg_1956                                      |  32|   0|   32|          0|
    |empty_80_reg_1961                                      |  32|   0|   32|          0|
    |empty_81_reg_1966                                      |  32|   0|   32|          0|
    |empty_82_reg_1971                                      |  32|   0|   32|          0|
    |empty_83_reg_1976                                      |  32|   0|   32|          0|
    |empty_84_reg_1981                                      |  32|   0|   32|          0|
    |empty_85_reg_1986                                      |  32|   0|   32|          0|
    |empty_86_reg_1991                                      |  32|   0|   32|          0|
    |empty_87_reg_1996                                      |  32|   0|   32|          0|
    |empty_88_reg_2001                                      |  32|   0|   32|          0|
    |empty_89_reg_2006                                      |  32|   0|   32|          0|
    |empty_90_reg_2011                                      |  32|   0|   32|          0|
    |empty_91_reg_2016                                      |  32|   0|   32|          0|
    |empty_92_reg_2021                                      |  32|   0|   32|          0|
    |empty_93_reg_2026                                      |  32|   0|   32|          0|
    |empty_94_reg_2031                                      |  32|   0|   32|          0|
    |empty_95_reg_2036                                      |  32|   0|   32|          0|
    |empty_96_reg_2041                                      |  32|   0|   32|          0|
    |empty_97_reg_2046                                      |  32|   0|   32|          0|
    |empty_98_reg_2051                                      |  32|   0|   32|          0|
    |empty_99_reg_2056                                      |  32|   0|   32|          0|
    |empty_reg_1906                                         |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_10_1_fu_818_ap_start_reg   |   1|   0|    1|          0|
    |grp_dft_Pipeline_VITIS_LOOP_27_3_fu_1016_ap_start_reg  |   1|   0|    1|          0|
    |imag_sample_load_10_reg_1511                           |  32|   0|   32|          0|
    |imag_sample_load_11_reg_1521                           |  32|   0|   32|          0|
    |imag_sample_load_12_reg_1551                           |  32|   0|   32|          0|
    |imag_sample_load_13_reg_1561                           |  32|   0|   32|          0|
    |imag_sample_load_14_reg_1591                           |  32|   0|   32|          0|
    |imag_sample_load_15_reg_1601                           |  32|   0|   32|          0|
    |imag_sample_load_16_reg_1631                           |  32|   0|   32|          0|
    |imag_sample_load_17_reg_1641                           |  32|   0|   32|          0|
    |imag_sample_load_18_reg_1671                           |  32|   0|   32|          0|
    |imag_sample_load_19_reg_1681                           |  32|   0|   32|          0|
    |imag_sample_load_1_reg_1321                            |  32|   0|   32|          0|
    |imag_sample_load_20_reg_1711                           |  32|   0|   32|          0|
    |imag_sample_load_21_reg_1721                           |  32|   0|   32|          0|
    |imag_sample_load_22_reg_1751                           |  32|   0|   32|          0|
    |imag_sample_load_23_reg_1761                           |  32|   0|   32|          0|
    |imag_sample_load_24_reg_1791                           |  32|   0|   32|          0|
    |imag_sample_load_25_reg_1801                           |  32|   0|   32|          0|
    |imag_sample_load_26_reg_1831                           |  32|   0|   32|          0|
    |imag_sample_load_27_reg_1841                           |  32|   0|   32|          0|
    |imag_sample_load_28_reg_1871                           |  32|   0|   32|          0|
    |imag_sample_load_29_reg_1881                           |  32|   0|   32|          0|
    |imag_sample_load_2_reg_1351                            |  32|   0|   32|          0|
    |imag_sample_load_3_reg_1361                            |  32|   0|   32|          0|
    |imag_sample_load_4_reg_1391                            |  32|   0|   32|          0|
    |imag_sample_load_5_reg_1401                            |  32|   0|   32|          0|
    |imag_sample_load_6_reg_1431                            |  32|   0|   32|          0|
    |imag_sample_load_7_reg_1441                            |  32|   0|   32|          0|
    |imag_sample_load_8_reg_1471                            |  32|   0|   32|          0|
    |imag_sample_load_9_reg_1481                            |  32|   0|   32|          0|
    |imag_sample_load_reg_1311                              |  32|   0|   32|          0|
    |real_sample_load_10_reg_1506                           |  32|   0|   32|          0|
    |real_sample_load_11_reg_1516                           |  32|   0|   32|          0|
    |real_sample_load_12_reg_1546                           |  32|   0|   32|          0|
    |real_sample_load_13_reg_1556                           |  32|   0|   32|          0|
    |real_sample_load_14_reg_1586                           |  32|   0|   32|          0|
    |real_sample_load_15_reg_1596                           |  32|   0|   32|          0|
    |real_sample_load_16_reg_1626                           |  32|   0|   32|          0|
    |real_sample_load_17_reg_1636                           |  32|   0|   32|          0|
    |real_sample_load_18_reg_1666                           |  32|   0|   32|          0|
    |real_sample_load_19_reg_1676                           |  32|   0|   32|          0|
    |real_sample_load_1_reg_1316                            |  32|   0|   32|          0|
    |real_sample_load_20_reg_1706                           |  32|   0|   32|          0|
    |real_sample_load_21_reg_1716                           |  32|   0|   32|          0|
    |real_sample_load_22_reg_1746                           |  32|   0|   32|          0|
    |real_sample_load_23_reg_1756                           |  32|   0|   32|          0|
    |real_sample_load_24_reg_1786                           |  32|   0|   32|          0|
    |real_sample_load_25_reg_1796                           |  32|   0|   32|          0|
    |real_sample_load_26_reg_1826                           |  32|   0|   32|          0|
    |real_sample_load_27_reg_1836                           |  32|   0|   32|          0|
    |real_sample_load_28_reg_1866                           |  32|   0|   32|          0|
    |real_sample_load_29_reg_1876                           |  32|   0|   32|          0|
    |real_sample_load_2_reg_1346                            |  32|   0|   32|          0|
    |real_sample_load_3_reg_1356                            |  32|   0|   32|          0|
    |real_sample_load_4_reg_1386                            |  32|   0|   32|          0|
    |real_sample_load_5_reg_1396                            |  32|   0|   32|          0|
    |real_sample_load_6_reg_1426                            |  32|   0|   32|          0|
    |real_sample_load_7_reg_1436                            |  32|   0|   32|          0|
    |real_sample_load_8_reg_1466                            |  32|   0|   32|          0|
    |real_sample_load_9_reg_1476                            |  32|   0|   32|          0|
    |real_sample_load_reg_1306                              |  32|   0|   32|          0|
    +-------------------------------------------------------+----+----+-----+-----------+
    |Total                                                  |3990|   0| 3990|          0|
    +-------------------------------------------------------+----+----+-----+-----------+



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
|real_sample_we0       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_d0        |  out|   32|   ap_memory|   real_sample|         array|
|real_sample_q0        |   in|   32|   ap_memory|   real_sample|         array|
|real_sample_address1  |  out|    5|   ap_memory|   real_sample|         array|
|real_sample_ce1       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_q1        |   in|   32|   ap_memory|   real_sample|         array|
|imag_sample_address0  |  out|    5|   ap_memory|   imag_sample|         array|
|imag_sample_ce0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_we0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_d0        |  out|   32|   ap_memory|   imag_sample|         array|
|imag_sample_q0        |   in|   32|   ap_memory|   imag_sample|         array|
|imag_sample_address1  |  out|    5|   ap_memory|   imag_sample|         array|
|imag_sample_ce1       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_q1        |   in|   32|   ap_memory|   imag_sample|         array|
+----------------------+-----+-----+------------+--------------+--------------+

rm dft_test.bin
