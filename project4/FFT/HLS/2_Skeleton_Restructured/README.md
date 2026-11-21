g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include fft_test.cpp fft.cpp -g -o fft_test.bin
./fft_test.bin 2>&1 | tee fft_test.log
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000450454419479 0.000541143584996
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/__hls_config__.ini -i fft.cpp -o fft.tcl --part xc7z020clg400-1 --component fft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "fft.comp/hls/syn/report/fft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl fft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Nov 19 20:22:29 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.tcl'
INFO: [HLS 200-1510] Running: open_component fft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files fft.cpp fft.h 
INFO: [HLS 200-10] Adding design file 'fft.cpp' to the project
INFO: [HLS 200-10] Adding design file 'fft.h' to the project
INFO: [HLS 200-1510] Running: add_files -tb fft_test.cpp out.gold.dat 
INFO: [HLS 200-10] Adding test bench file 'fft_test.cpp' to the project
INFO: [HLS 200-10] Adding test bench file 'out.gold.dat' to the project
INFO: [HLS 200-1510] Running: set_top fft 
Running: set_top fft
INFO: [HLS 200-1510] Running: set_part xc7z020clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: source directives.tcl
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.238 MB.
INFO: [HLS 200-10] Analyzing design file 'fft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.48 seconds. CPU system time: 0.74 seconds. Elapsed time: 1.33 seconds; current allocated memory: 660.715 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 919 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 843 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 687 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 555 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 571 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 629 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_63_2' is marked as complete unroll implied by the pipeline pragma (fft.cpp:63:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_63_2' (fft.cpp:63:22) in function 'bit_reverse' completely with a factor of 5 (fft.cpp:46:0)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.1)' by setting 'stage' to '9' (fft.cpp:40:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.2)' by setting 'stage' to '8' (fft.cpp:39:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.3)' by setting 'stage' to '7' (fft.cpp:38:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.4)' by setting 'stage' to '6' (fft.cpp:37:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.5)' by setting 'stage' to '5' (fft.cpp:36:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.6)' by setting 'stage' to '4' (fft.cpp:35:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.7)' by setting 'stage' to '3' (fft.cpp:34:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.8)' by setting 'stage' to '2' (fft.cpp:33:3)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.21 seconds. CPU system time: 1.21 seconds. Elapsed time: 9.39 seconds; current allocated memory: 670.660 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.660 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 670.953 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 671.961 MB.
INFO: [XFORM 203-712] Applying dataflow to function 'fft' (fft.cpp:17:1), detected/extracted 10 process function(s): 
	 'fft_stage_first'
	 'fft_stages'
	 'fft_stages.1'
	 'fft_stages.2'
	 'fft_stages.3'
	 'fft_stages.4'
	 'fft_stages.5'
	 'fft_stages.6'
	 'fft_stages.7'
	 'fft_stage_last'.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.19 seconds; current allocated memory: 694.312 MB.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'X_R'.
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'X_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'X_R'.
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'X_I'.
WARNING: [HLS 200-1450] Process fft_stage_first has both a successor and writes an output to its caller (see the GUI dataflow viewer). This may lead to lower throughput. Consider copying this output via a successor process.
Resolution: For help on HLS 200-1450 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1450.html
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.24 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.45 seconds; current allocated memory: 790.914 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fft' ...
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.1' to 'fft_stages_1'.
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.2' to 'fft_stages_2'.
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.3' to 'fft_stages_3'.
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.4' to 'fft_stages_4'.
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.5' to 'fft_stages_5'.
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.6' to 'fft_stages_6'.
WARNING: [SYN 201-103] Legalizing function name 'fft_stages.7' to 'fft_stages_7'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'bit_reverse' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_55_1'.
WARNING: [HLS 200-885] The II Violation in module 'bit_reverse' (loop 'VITIS_LOOP_55_1'): Unable to schedule 'load' operation 32 bit ('X_R_load', fft.cpp:74) on array 'X_R' due to limited memory ports (II = 1). Please consider using a memory core with more ports or partitioning the array 'X_R'.
Resolution: For help on HLS 200-885 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-885.html
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 2, Depth = 5, loop 'VITIS_LOOP_55_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.32 seconds; current allocated memory: 791.723 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 791.723 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stage_first' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_92_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'VITIS_LOOP_92_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 791.723 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 791.723 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 792.102 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 792.102 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 792.664 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 792.664 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 793.320 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 793.320 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 793.922 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 793.922 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_4' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 794.578 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 794.578 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_5' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 795.273 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 795.273 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_6' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 795.930 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 795.930 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_7' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_115_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_115_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 796.602 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 796.602 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stage_last' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_159_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 18, loop 'VITIS_LOOP_159_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 797.273 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 797.273 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 797.945 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 797.945 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'bit_reverse' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'bit_reverse' pipeline 'VITIS_LOOP_55_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'bit_reverse'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.16 seconds; current allocated memory: 797.945 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stage_first' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stage_first'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.2 seconds; current allocated memory: 800.617 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.25 seconds; current allocated memory: 801.262 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_1' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_1'.
INFO: [RTMG 210-279] Implementing memory 'fft_fft_stages_1_W_real8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'fft_fft_stages_1_W_imag1_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.29 seconds; current allocated memory: 804.273 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_2' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_2'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.18 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.29 seconds; current allocated memory: 805.559 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_3' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_3'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.26 seconds; current allocated memory: 807.781 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_4' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_4' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_4'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.29 seconds; current allocated memory: 810.109 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_5' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_5' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_5'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.29 seconds; current allocated memory: 812.336 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_6' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_6' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_6'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.21 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.33 seconds; current allocated memory: 814.605 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_7' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_7' pipeline 'VITIS_LOOP_115_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_7'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.27 seconds; current allocated memory: 816.844 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stage_last' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stage_last' pipeline 'VITIS_LOOP_159_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_5_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stage_last'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.32 seconds; current allocated memory: 820.148 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/X_R' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/X_I' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/OUT_R' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/OUT_I' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft'.
INFO: [HLS 200-740] Implementing PIPO fft_Stage1_R_RAM_AUTO_1R1W using a separate memory for each block
INFO: [RTMG 210-278] Implementing memory 'fft_Stage1_R_RAM_AUTO_1R1W_memcore' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.35 seconds; current allocated memory: 823.555 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.47 seconds. CPU system time: 0.22 seconds. Elapsed time: 1.43 seconds; current allocated memory: 826.730 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.79 seconds. CPU system time: 0.09 seconds. Elapsed time: 1.11 seconds; current allocated memory: 833.359 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fft.
INFO: [VLOG 209-307] Generating Verilog RTL for fft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:28; Allocated memory: 190.699 MB.
INFO: [HLS 200-112] Total CPU user time: 20.44 seconds. Total CPU system time: 5.12 seconds. Total elapsed time: 46.91 seconds; peak allocated memory: 833.938 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 48s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch fft.comp/.csynth
cp -f fft.comp/hls/syn/report/fft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/2_Skeleton_Restructured


================================================================
== Vitis HLS Report for 'fft'
================================================================
* Date:           Thu Nov 19 20:23:15 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        fft.comp
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
    +---------+---------+-----------+-----------+-----+-----+----------+
    |  Latency (cycles) |   Latency (absolute)  |  Interval | Pipeline |
    |   min   |   max   |    min    |    max    | min | max |   Type   |
    +---------+---------+-----------+-----------+-----+-----+----------+
    |     6278|     6278|  62.780 us|  62.780 us|  512|  512|  dataflow|
    +---------+---------+-----------+-----------+-----+-----+----------+

    + Detail: 
        * Instance: 
        +--------------------+-----------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |                    |                 |  Latency (cycles) |   Latency (absolute)  |   Interval  |                    Pipeline                    |
        |      Instance      |      Module     |   min   |   max   |    min    |    max    |  min |  max |                      Type                      |
        +--------------------+-----------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |fft_stage_first_U0  |fft_stage_first  |     1516|     1516|  15.160 us|  15.160 us|  1516|  1516|                                              no|
        |fft_stages_U0       |fft_stages       |      520|      520|   5.200 us|   5.200 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_1_U0     |fft_stages_1     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_2_U0     |fft_stages_2     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_3_U0     |fft_stages_3     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_4_U0     |fft_stages_4     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_5_U0     |fft_stages_5     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_6_U0     |fft_stages_6     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_7_U0     |fft_stages_7     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stage_last_U0   |fft_stage_last   |      530|      530|   5.300 us|   5.300 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +--------------------+-----------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+

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
|Expression       |        -|    -|       0|     42|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |       16|  202|   24192|  35776|    -|
|Memory           |       72|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|     81|    -|
|Register         |        -|    -|       9|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       88|  202|   24201|  35899|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       31|   91|      22|     67|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +--------------------+-----------------+---------+----+------+------+-----+
    |      Instance      |      Module     | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +--------------------+-----------------+---------+----+------+------+-----+
    |fft_stage_first_U0  |fft_stage_first  |        0|   8|  1450|  2216|    0|
    |fft_stage_last_U0   |fft_stage_last   |        2|  18|  3077|  5014|    0|
    |fft_stages_U0       |fft_stages       |        0|   8|  1248|  1764|    0|
    |fft_stages_1_U0     |fft_stages_1     |        2|  24|  2631|  3826|    0|
    |fft_stages_2_U0     |fft_stages_2     |        2|  24|  2631|  3826|    0|
    |fft_stages_3_U0     |fft_stages_3     |        2|  24|  2631|  3826|    0|
    |fft_stages_4_U0     |fft_stages_4     |        2|  24|  2631|  3826|    0|
    |fft_stages_5_U0     |fft_stages_5     |        2|  24|  2631|  3826|    0|
    |fft_stages_6_U0     |fft_stages_6     |        2|  24|  2631|  3826|    0|
    |fft_stages_7_U0     |fft_stages_7     |        2|  24|  2631|  3826|    0|
    +--------------------+-----------------+---------+----+------+------+-----+
    |Total               |                 |       16| 202| 24192| 35776|    0|
    +--------------------+-----------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |   Memory   |         Module         | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Stage1_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage1_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage2_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage2_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage3_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage3_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage4_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage4_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage5_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage5_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage6_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage6_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage7_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage7_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage8_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage8_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage9_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage9_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total       |                        |       72|  0|   0|    0| 18432|  576|    18|       589824|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +--------------------------------+----------+----+---+----+------------+------------+
    |          Variable Name         | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +--------------------------------+----------+----+---+----+------------+------------+
    |ap_channel_done_Stage1_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage2_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage3_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage4_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage5_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage6_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage7_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage8_I        |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage9_I        |       and|   0|  0|   2|           1|           1|
    |ap_idle                         |       and|   0|  0|   2|           1|           1|
    |ap_sync_done                    |       and|   0|  0|   2|           1|           1|
    |fft_stage_first_U0_ap_continue  |       and|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage1_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage2_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage3_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage4_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage5_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage6_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage7_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage8_I  |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage9_I  |        or|   0|  0|   2|           1|           1|
    +--------------------------------+----------+----+---+----+------------+------------+
    |Total                           |          |   0|  0|  42|          21|          21|
    +--------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +------------------------------------+----+-----------+-----+-----------+
    |                Name                | LUT| Input Size| Bits| Total Bits|
    +------------------------------------+----+-----------+-----+-----------+
    |ap_sync_reg_channel_write_Stage1_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage2_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage3_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage4_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage5_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage6_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage7_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage8_I  |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage9_I  |   9|          2|    1|          2|
    +------------------------------------+----+-----------+-----+-----------+
    |Total                               |  81|         18|    9|         18|
    +------------------------------------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------+---+----+-----+-----------+
    |                Name                | FF| LUT| Bits| Const Bits|
    +------------------------------------+---+----+-----+-----------+
    |ap_sync_reg_channel_write_Stage1_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage2_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage3_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage4_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage5_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage6_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage7_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage8_I  |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage9_I  |  1|   0|    1|          0|
    +------------------------------------+---+----+-----+-----------+
    |Total                               |  9|   0|    9|          0|
    +------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+----------------+-----+-----+------------+--------------+--------------+
|    RTL Ports   | Dir | Bits|  Protocol  | Source Object|    C Type    |
+----------------+-----+-----+------------+--------------+--------------+
|ap_clk          |   in|    1|  ap_ctrl_hs|           fft|  return value|
|ap_rst          |   in|    1|  ap_ctrl_hs|           fft|  return value|
|ap_start        |   in|    1|  ap_ctrl_hs|           fft|  return value|
|ap_done         |  out|    1|  ap_ctrl_hs|           fft|  return value|
|ap_ready        |  out|    1|  ap_ctrl_hs|           fft|  return value|
|ap_idle         |  out|    1|  ap_ctrl_hs|           fft|  return value|
|X_R_address0    |  out|   10|   ap_memory|           X_R|         array|
|X_R_ce0         |  out|    1|   ap_memory|           X_R|         array|
|X_R_d0          |  out|   32|   ap_memory|           X_R|         array|
|X_R_q0          |   in|   32|   ap_memory|           X_R|         array|
|X_R_we0         |  out|    1|   ap_memory|           X_R|         array|
|X_R_address1    |  out|   10|   ap_memory|           X_R|         array|
|X_R_ce1         |  out|    1|   ap_memory|           X_R|         array|
|X_R_d1          |  out|   32|   ap_memory|           X_R|         array|
|X_R_q1          |   in|   32|   ap_memory|           X_R|         array|
|X_R_we1         |  out|    1|   ap_memory|           X_R|         array|
|X_I_address0    |  out|   10|   ap_memory|           X_I|         array|
|X_I_ce0         |  out|    1|   ap_memory|           X_I|         array|
|X_I_d0          |  out|   32|   ap_memory|           X_I|         array|
|X_I_q0          |   in|   32|   ap_memory|           X_I|         array|
|X_I_we0         |  out|    1|   ap_memory|           X_I|         array|
|X_I_address1    |  out|   10|   ap_memory|           X_I|         array|
|X_I_ce1         |  out|    1|   ap_memory|           X_I|         array|
|X_I_d1          |  out|   32|   ap_memory|           X_I|         array|
|X_I_q1          |   in|   32|   ap_memory|           X_I|         array|
|X_I_we1         |  out|    1|   ap_memory|           X_I|         array|
|OUT_R_address0  |  out|   10|   ap_memory|         OUT_R|         array|
|OUT_R_ce0       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_d0        |  out|   32|   ap_memory|         OUT_R|         array|
|OUT_R_q0        |   in|   32|   ap_memory|         OUT_R|         array|
|OUT_R_we0       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_address1  |  out|   10|   ap_memory|         OUT_R|         array|
|OUT_R_ce1       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_d1        |  out|   32|   ap_memory|         OUT_R|         array|
|OUT_R_q1        |   in|   32|   ap_memory|         OUT_R|         array|
|OUT_R_we1       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_I_address0  |  out|   10|   ap_memory|         OUT_I|         array|
|OUT_I_ce0       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_d0        |  out|   32|   ap_memory|         OUT_I|         array|
|OUT_I_q0        |   in|   32|   ap_memory|         OUT_I|         array|
|OUT_I_we0       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_address1  |  out|   10|   ap_memory|         OUT_I|         array|
|OUT_I_ce1       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_d1        |  out|   32|   ap_memory|         OUT_I|         array|
|OUT_I_q1        |   in|   32|   ap_memory|         OUT_I|         array|
|OUT_I_we1       |  out|    1|   ap_memory|         OUT_I|         array|
+----------------+-----+-----+------------+--------------+--------------+

rm fft_test.bin
