LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000002198110678 0.000001827443839
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 31 22:50:43 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.11 seconds. CPU system time: 0.05 seconds. Elapsed time: 2.72 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.59 seconds. CPU system time: 0.78 seconds. Elapsed time: 1.52 seconds; current allocated memory: 660.500 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 63 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 59 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 37 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 33 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 33 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 33 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 33 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 522 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,570 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 586 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 660 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 665 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_6_1> at dft.cpp:6:19 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_10_2' is marked as complete unroll implied by the pipeline pragma (dft.cpp:10:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_10_2' (dft.cpp:10:22) in function 'dft' completely with a factor of 32 (dft.cpp:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15cos_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:4:0)
INFO: [HLS 214-449] Automatically partitioning array '_ZL15sin_coeff_table' dimension 2 completely based on constant index. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'cos_coeff_table' due to pipeline pragma (./coefficients32_2D.h:4:0)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=2' for array 'sin_coeff_table' due to pipeline pragma (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15sin_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:39:0)
INFO: [HLS 214-248] Applying array_partition to '_ZL15cos_coeff_table': Complete partitioning on dimension 2. (./coefficients32_2D.h:4:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.7 seconds. CPU system time: 0.94 seconds. Elapsed time: 9.06 seconds; current allocated memory: 670.148 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.148 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 671.000 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 671.000 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 694.105 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 694.531 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_6_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_6_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 172, loop 'VITIS_LOOP_6_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.38 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.49 seconds; current allocated memory: 698.125 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.23 seconds; current allocated memory: 699.938 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.19 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.27 seconds; current allocated memory: 702.352 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 702.352 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_6_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_6_1' pipeline 'VITIS_LOOP_6_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-104] Estimated max fanout for 'dft_Pipeline_VITIS_LOOP_6_1' is 21161 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001)
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 96 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 128 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 32 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_6_1'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_0_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_1_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_2_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_3_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_4_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_5_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_6_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_7_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_9_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_10_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_11_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_12_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_13_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_14_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_15_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_16_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_17_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_18_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_19_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_20_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_21_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_22_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_23_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_24_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_25_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_26_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_27_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_28_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_29_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_30_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15cos_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_6_1_p_ZL15sin_coeff_table_31_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 1.08 seconds. CPU system time: 0.08 seconds. Elapsed time: 1.79 seconds; current allocated memory: 727.312 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.66 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.87 seconds; current allocated memory: 738.691 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.61 seconds. CPU system time: 0.52 seconds. Elapsed time: 3.56 seconds; current allocated memory: 742.043 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.68 seconds. CPU system time: 0.09 seconds. Elapsed time: 1 seconds; current allocated memory: 750.195 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 106.973 MB.
INFO: [HLS 200-112] Total CPU user time: 15.27 seconds. Total CPU system time: 4.21 seconds. Total elapsed time: 34.6 seconds; peak allocated memory: 750.195 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 36s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q3


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sat Oct 31 22:51:14 2026

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
        +----------------------------------------+-----------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                        |                             |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                Instance                |            Module           |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------+-----------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_6_1_fu_812  |dft_Pipeline_VITIS_LOOP_6_1  |      204|      204|  2.040 us|  2.040 us|   32|   32|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------+-----------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
    +----------------------------------------+-----------------------------+---------+-----+-------+-------+-----+
    |                Instance                |            Module           | BRAM_18K| DSP |   FF  |  LUT  | URAM|
    +----------------------------------------+-----------------------------+---------+-----+-------+-------+-----+
    |grp_dft_Pipeline_VITIS_LOOP_6_1_fu_812  |dft_Pipeline_VITIS_LOOP_6_1  |       64|  640|  55202|  91104|    0|
    +----------------------------------------+-----------------------------+---------+-----+-------+-------+-----+
    |Total                                   |                             |       64|  640|  55202|  91104|    0|
    +----------------------------------------+-----------------------------+---------+-----+-------+-------+-----+

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
    +-----------------------------------------------------+----+----+-----+-----------+
    |                         Name                        | FF | LUT| Bits| Const Bits|
    +-----------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                            |  18|   0|   18|          0|
    |empty_100_reg_2057                                   |  32|   0|   32|          0|
    |empty_101_reg_2062                                   |  32|   0|   32|          0|
    |empty_102_reg_2067                                   |  32|   0|   32|          0|
    |empty_103_reg_2072                                   |  32|   0|   32|          0|
    |empty_104_reg_2077                                   |  32|   0|   32|          0|
    |empty_105_reg_2082                                   |  32|   0|   32|          0|
    |empty_106_reg_2087                                   |  32|   0|   32|          0|
    |empty_107_reg_2092                                   |  32|   0|   32|          0|
    |empty_108_reg_2097                                   |  32|   0|   32|          0|
    |empty_109_reg_2102                                   |  32|   0|   32|          0|
    |empty_110_reg_2107                                   |  32|   0|   32|          0|
    |empty_111_reg_2112                                   |  32|   0|   32|          0|
    |empty_112_reg_2117                                   |  32|   0|   32|          0|
    |empty_113_reg_2122                                   |  32|   0|   32|          0|
    |empty_114_reg_2127                                   |  32|   0|   32|          0|
    |empty_115_reg_2132                                   |  32|   0|   32|          0|
    |empty_116_reg_2137                                   |  32|   0|   32|          0|
    |empty_117_reg_2142                                   |  32|   0|   32|          0|
    |empty_118_reg_2147                                   |  32|   0|   32|          0|
    |empty_119_reg_2152                                   |  32|   0|   32|          0|
    |empty_120_reg_2157                                   |  32|   0|   32|          0|
    |empty_121_reg_2162                                   |  32|   0|   32|          0|
    |empty_122_reg_2167                                   |  32|   0|   32|          0|
    |empty_123_reg_2172                                   |  32|   0|   32|          0|
    |empty_124_reg_2177                                   |  32|   0|   32|          0|
    |empty_125_reg_2182                                   |  32|   0|   32|          0|
    |empty_126_reg_2187                                   |  32|   0|   32|          0|
    |empty_127_reg_2192                                   |  32|   0|   32|          0|
    |empty_128_reg_2197                                   |  32|   0|   32|          0|
    |empty_129_reg_2202                                   |  32|   0|   32|          0|
    |empty_130_reg_2207                                   |  32|   0|   32|          0|
    |empty_68_reg_1897                                    |  32|   0|   32|          0|
    |empty_69_reg_1902                                    |  32|   0|   32|          0|
    |empty_70_reg_1907                                    |  32|   0|   32|          0|
    |empty_71_reg_1912                                    |  32|   0|   32|          0|
    |empty_72_reg_1917                                    |  32|   0|   32|          0|
    |empty_73_reg_1922                                    |  32|   0|   32|          0|
    |empty_74_reg_1927                                    |  32|   0|   32|          0|
    |empty_75_reg_1932                                    |  32|   0|   32|          0|
    |empty_76_reg_1937                                    |  32|   0|   32|          0|
    |empty_77_reg_1942                                    |  32|   0|   32|          0|
    |empty_78_reg_1947                                    |  32|   0|   32|          0|
    |empty_79_reg_1952                                    |  32|   0|   32|          0|
    |empty_80_reg_1957                                    |  32|   0|   32|          0|
    |empty_81_reg_1962                                    |  32|   0|   32|          0|
    |empty_82_reg_1967                                    |  32|   0|   32|          0|
    |empty_83_reg_1972                                    |  32|   0|   32|          0|
    |empty_84_reg_1977                                    |  32|   0|   32|          0|
    |empty_85_reg_1982                                    |  32|   0|   32|          0|
    |empty_86_reg_1987                                    |  32|   0|   32|          0|
    |empty_87_reg_1992                                    |  32|   0|   32|          0|
    |empty_88_reg_1997                                    |  32|   0|   32|          0|
    |empty_89_reg_2002                                    |  32|   0|   32|          0|
    |empty_90_reg_2007                                    |  32|   0|   32|          0|
    |empty_91_reg_2012                                    |  32|   0|   32|          0|
    |empty_92_reg_2017                                    |  32|   0|   32|          0|
    |empty_93_reg_2022                                    |  32|   0|   32|          0|
    |empty_94_reg_2027                                    |  32|   0|   32|          0|
    |empty_95_reg_2032                                    |  32|   0|   32|          0|
    |empty_96_reg_2037                                    |  32|   0|   32|          0|
    |empty_97_reg_2042                                    |  32|   0|   32|          0|
    |empty_98_reg_2047                                    |  32|   0|   32|          0|
    |empty_99_reg_2052                                    |  32|   0|   32|          0|
    |empty_reg_1892                                       |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_6_1_fu_812_ap_start_reg  |   1|   0|    1|          0|
    |imag_sample_load_10_reg_1497                         |  32|   0|   32|          0|
    |imag_sample_load_11_reg_1507                         |  32|   0|   32|          0|
    |imag_sample_load_12_reg_1537                         |  32|   0|   32|          0|
    |imag_sample_load_13_reg_1547                         |  32|   0|   32|          0|
    |imag_sample_load_14_reg_1577                         |  32|   0|   32|          0|
    |imag_sample_load_15_reg_1587                         |  32|   0|   32|          0|
    |imag_sample_load_16_reg_1617                         |  32|   0|   32|          0|
    |imag_sample_load_17_reg_1627                         |  32|   0|   32|          0|
    |imag_sample_load_18_reg_1657                         |  32|   0|   32|          0|
    |imag_sample_load_19_reg_1667                         |  32|   0|   32|          0|
    |imag_sample_load_1_reg_1307                          |  32|   0|   32|          0|
    |imag_sample_load_20_reg_1697                         |  32|   0|   32|          0|
    |imag_sample_load_21_reg_1707                         |  32|   0|   32|          0|
    |imag_sample_load_22_reg_1737                         |  32|   0|   32|          0|
    |imag_sample_load_23_reg_1747                         |  32|   0|   32|          0|
    |imag_sample_load_24_reg_1777                         |  32|   0|   32|          0|
    |imag_sample_load_25_reg_1787                         |  32|   0|   32|          0|
    |imag_sample_load_26_reg_1817                         |  32|   0|   32|          0|
    |imag_sample_load_27_reg_1827                         |  32|   0|   32|          0|
    |imag_sample_load_28_reg_1857                         |  32|   0|   32|          0|
    |imag_sample_load_29_reg_1867                         |  32|   0|   32|          0|
    |imag_sample_load_2_reg_1337                          |  32|   0|   32|          0|
    |imag_sample_load_3_reg_1347                          |  32|   0|   32|          0|
    |imag_sample_load_4_reg_1377                          |  32|   0|   32|          0|
    |imag_sample_load_5_reg_1387                          |  32|   0|   32|          0|
    |imag_sample_load_6_reg_1417                          |  32|   0|   32|          0|
    |imag_sample_load_7_reg_1427                          |  32|   0|   32|          0|
    |imag_sample_load_8_reg_1457                          |  32|   0|   32|          0|
    |imag_sample_load_9_reg_1467                          |  32|   0|   32|          0|
    |imag_sample_load_reg_1297                            |  32|   0|   32|          0|
    |real_sample_load_10_reg_1492                         |  32|   0|   32|          0|
    |real_sample_load_11_reg_1502                         |  32|   0|   32|          0|
    |real_sample_load_12_reg_1532                         |  32|   0|   32|          0|
    |real_sample_load_13_reg_1542                         |  32|   0|   32|          0|
    |real_sample_load_14_reg_1572                         |  32|   0|   32|          0|
    |real_sample_load_15_reg_1582                         |  32|   0|   32|          0|
    |real_sample_load_16_reg_1612                         |  32|   0|   32|          0|
    |real_sample_load_17_reg_1622                         |  32|   0|   32|          0|
    |real_sample_load_18_reg_1652                         |  32|   0|   32|          0|
    |real_sample_load_19_reg_1662                         |  32|   0|   32|          0|
    |real_sample_load_1_reg_1302                          |  32|   0|   32|          0|
    |real_sample_load_20_reg_1692                         |  32|   0|   32|          0|
    |real_sample_load_21_reg_1702                         |  32|   0|   32|          0|
    |real_sample_load_22_reg_1732                         |  32|   0|   32|          0|
    |real_sample_load_23_reg_1742                         |  32|   0|   32|          0|
    |real_sample_load_24_reg_1772                         |  32|   0|   32|          0|
    |real_sample_load_25_reg_1782                         |  32|   0|   32|          0|
    |real_sample_load_26_reg_1812                         |  32|   0|   32|          0|
    |real_sample_load_27_reg_1822                         |  32|   0|   32|          0|
    |real_sample_load_28_reg_1852                         |  32|   0|   32|          0|
    |real_sample_load_29_reg_1862                         |  32|   0|   32|          0|
    |real_sample_load_2_reg_1332                          |  32|   0|   32|          0|
    |real_sample_load_3_reg_1342                          |  32|   0|   32|          0|
    |real_sample_load_4_reg_1372                          |  32|   0|   32|          0|
    |real_sample_load_5_reg_1382                          |  32|   0|   32|          0|
    |real_sample_load_6_reg_1412                          |  32|   0|   32|          0|
    |real_sample_load_7_reg_1422                          |  32|   0|   32|          0|
    |real_sample_load_8_reg_1452                          |  32|   0|   32|          0|
    |real_sample_load_9_reg_1462                          |  32|   0|   32|          0|
    |real_sample_load_reg_1292                            |  32|   0|   32|          0|
    +-----------------------------------------------------+----+----+-----+-----------+
    |Total                                                |3987|   0| 3987|          0|
    +-----------------------------------------------------+----+----+-----+-----------+



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

rm dft_test.bin
