g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include fft_test.cpp fft.cpp -g -o fft_test.bin
./fft_test.bin 2>&1 | tee fft_test.log
----------------------------------------------
   RMSE(R)           RMSE(I)
0.000450454419479 0.000541143584996
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/__hls_config__.ini -i fft.cpp -o fft.tcl --part xc7z020clg400-1 --component fft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "fft.comp/hls/syn/report/fft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl fft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Fri Nov 20 15:38:38 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.tcl'
INFO: [HLS 200-1510] Running: open_component fft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.16 seconds. CPU system time: 0.05 seconds. Elapsed time: 2.78 seconds; current allocated memory: 659.238 MB.
INFO: [HLS 200-10] Analyzing design file 'fft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.61 seconds. CPU system time: 0.86 seconds. Elapsed time: 1.61 seconds; current allocated memory: 660.926 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 928 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 852 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 696 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 564 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 564 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 568 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 568 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 568 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 568 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 612 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 662 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-291] Loop 'VITIS_LOOP_76_2' is marked as complete unroll implied by the pipeline pragma (fft.cpp:76:22)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_76_2' (fft.cpp:76:22) in function 'bit_reverse' completely with a factor of 5 (fft.cpp:59:0)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.1)' by setting 'stage' to '9' (fft.cpp:53:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.2)' by setting 'stage' to '8' (fft.cpp:52:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.3)' by setting 'stage' to '7' (fft.cpp:51:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.4)' by setting 'stage' to '6' (fft.cpp:50:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.5)' by setting 'stage' to '5' (fft.cpp:49:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.6)' by setting 'stage' to '4' (fft.cpp:48:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.7)' by setting 'stage' to '3' (fft.cpp:47:3)
INFO: [HLS 214-367] Instantiating function 'fft_stages(float*, float*, int, float*, float*)' to 'fft_stages(float*, float*, int, float*, float*) (.8)' by setting 'stage' to '2' (fft.cpp:46:3)
INFO: [HLS 214-115] Multiple burst reads of length 1024 and bit width 32 in loop 'VITIS_LOOP_105_1'(fft.cpp:105:20) has been inferred on bundle 'xreal_in'. These burst requests might be further partitioned into multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings. (fft.cpp:105:20)
INFO: [HLS 214-115] Multiple burst reads of length 1024 and bit width 32 in loop 'VITIS_LOOP_105_1'(fft.cpp:105:20) has been inferred on bundle 'ximag_in'. These burst requests might be further partitioned into multiple requests during RTL generation, based on max_read_burst_length or max_write_burst_length settings. (fft.cpp:105:20)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.05 seconds. CPU system time: 1.38 seconds. Elapsed time: 10.3 seconds; current allocated memory: 671.375 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 671.375 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 671.730 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 672.883 MB.
INFO: [XFORM 203-712] Applying dataflow to function 'fft' (fft.cpp:17:1), detected/extracted 11 process function(s): 
	 'entry_proc'
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
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.19 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 695.426 MB.
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
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'xreal_in'.
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'ximag_in'.
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
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'xreal_in'.
WARNING: [ANALYSIS 214-52] Found false inter dependency for variable 'ximag_in'.
WARNING: [HLS 200-1450] Process fft_stage_first has both a successor and writes an output to its caller (see the GUI dataflow viewer). This may lead to lower throughput. Consider copying this output via a successor process.
Resolution: For help on HLS 200-1450 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1450.html
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.34 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.58 seconds; current allocated memory: 820.746 MB.
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
INFO: [HLS 200-42] -- Implementing module 'entry_proc' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.29 seconds; current allocated memory: 820.746 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 820.746 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'bit_reverse' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_68_1'.
WARNING: [HLS 200-885] The II Violation in module 'bit_reverse' (loop 'VITIS_LOOP_68_1'): Unable to schedule bus request operation ('xreal_in_load_req', fft.cpp:87) on port 'xreal_in' (fft.cpp:87) due to limited memory ports (II = 1). Please consider using a memory core with more ports or partitioning the array.
Resolution: For help on HLS 200-885 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-885.html
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 2, Depth = 19, loop 'VITIS_LOOP_68_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.16 seconds; current allocated memory: 822.406 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 822.406 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stage_first_Pipeline_VITIS_LOOP_105_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_105_1'.
WARNING: [HLS 200-880] The II Violation in module 'fft_stage_first_Pipeline_VITIS_LOOP_105_1' (loop 'VITIS_LOOP_105_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between bus read operation ('ximag_in_addr_read_1', fft.cpp:110) on port 'ximag_in' (fft.cpp:110) and bus read operation ('ximag_in_addr_read', fft.cpp:110) on port 'ximag_in' (fft.cpp:110).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 2, Depth = 9, loop 'VITIS_LOOP_105_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 822.699 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 822.699 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stage_first' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 823.000 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 823.000 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 8, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 823.547 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 823.547 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 824.043 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 824.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 824.699 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 824.699 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 825.371 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 825.371 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_4' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 826.023 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 826.023 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_5' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 826.723 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 826.723 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_6' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 827.457 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 827.457 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_7' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_128_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 17, loop 'VITIS_LOOP_128_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 828.051 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 828.051 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stage_last_Pipeline_VITIS_LOOP_172_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_172_1'.
WARNING: [HLS 200-885] The II Violation in module 'fft_stage_last_Pipeline_VITIS_LOOP_172_1' (loop 'VITIS_LOOP_172_1'): Unable to schedule bus request operation ('ximag_out_addr_1_req', fft.cpp:194) on port 'ximag_out' (fft.cpp:194) due to limited memory ports (II = 1). Please consider using a memory core with more ports or partitioning the array.
Resolution: For help on HLS 200-885 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-885.html
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 2, Depth = 25, loop 'VITIS_LOOP_172_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.13 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 828.914 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 828.914 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stage_last' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 829.633 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 829.633 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 829.922 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 829.922 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'entry_proc' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'entry_proc'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 829.922 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'bit_reverse' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'bit_reverse' pipeline 'VITIS_LOOP_68_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'bit_reverse'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.24 seconds; current allocated memory: 831.250 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stage_first_Pipeline_VITIS_LOOP_105_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stage_first_Pipeline_VITIS_LOOP_105_1' pipeline 'VITIS_LOOP_105_1' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARVALID' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARADDR' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARID' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARLEN' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARSIZE' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARBURST' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARLOCK' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARCACHE' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARPROT' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARQOS' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARREGION' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_xreal_in_0_ARUSER' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARVALID' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARADDR' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARID' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARLEN' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARSIZE' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARBURST' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARLOCK' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARCACHE' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARPROT' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARQOS' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARREGION' to 0.
WARNING: [RTGEN 206-101] Setting dangling out port 'fft_stage_first_Pipeline_VITIS_LOOP_105_1/m_axi_ximag_in_0_ARUSER' to 0.
INFO: [RTGEN 206-100] Generating core module 'faddfsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stage_first_Pipeline_VITIS_LOOP_105_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.29 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.62 seconds; current allocated memory: 834.773 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stage_first' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stage_first'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.13 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 836.074 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.28 seconds; current allocated memory: 837.379 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_1' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_1'.
INFO: [RTMG 210-279] Implementing memory 'fft_fft_stages_1_W_real8_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'fft_fft_stages_1_W_imag1_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.23 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.4 seconds; current allocated memory: 840.441 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_2' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_2'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.22 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.35 seconds; current allocated memory: 841.684 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_3' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_3'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.2 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.32 seconds; current allocated memory: 843.953 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_4' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_4' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_4'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.2 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.34 seconds; current allocated memory: 846.172 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_5' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_5' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_5'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.2 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.34 seconds; current allocated memory: 848.430 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_6' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_6' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_6'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.32 seconds; current allocated memory: 850.684 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_7' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_7' pipeline 'VITIS_LOOP_128_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_7'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.33 seconds; current allocated memory: 852.945 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stage_last_Pipeline_VITIS_LOOP_172_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stage_last_Pipeline_VITIS_LOOP_172_1' pipeline 'VITIS_LOOP_172_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'faddfsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_5_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stage_last_Pipeline_VITIS_LOOP_172_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.24 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.41 seconds; current allocated memory: 856.645 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stage_last' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stage_last'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.18 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.28 seconds; current allocated memory: 858.141 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/xreal_in' to 'm_axi'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/ximag_in' to 'm_axi'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/xreal_out' to 'm_axi'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/ximag_out' to 'm_axi'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/X_R' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/X_I' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/OUT_R' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft/OUT_I' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fft' to 's_axilite & ap_ctrl_hs'.
INFO: [RTGEN 206-100] Bundling port 'X_R', 'X_I', 'OUT_R', 'OUT_I' and 'return' to AXI-Lite port control.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft'.
INFO: [HLS 200-740] Implementing PIPO fft_Stage1_R_RAM_AUTO_1R1W using a separate memory for each block
INFO: [RTMG 210-278] Implementing memory 'fft_Stage1_R_RAM_AUTO_1R1W_memcore' using auto RAMs.
INFO: [HLS 200-740] Implementing PIPO fft_Stage2_R_RAM_AUTO_1R1W using a separate memory for each block
INFO: [RTMG 210-278] Implementing memory 'fft_Stage2_R_RAM_AUTO_1R1W_memcore' using auto RAMs.
INFO: [RTMG 210-285] Implementing FIFO 'OUT_R_c_U(fft_fifo_w64_d11_S)' using Shift Registers.
INFO: [RTMG 210-285] Implementing FIFO 'OUT_I_c_U(fft_fifo_w64_d11_S)' using Shift Registers.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.3 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.64 seconds; current allocated memory: 863.531 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.66 seconds. CPU system time: 0.28 seconds. Elapsed time: 2.06 seconds; current allocated memory: 866.836 MB.
INFO: [HLS 200-1603] Design has inferred MAXI bursts and missed bursts, see Vitis HLS GUI synthesis summary report for detailed information.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 2.48 seconds. CPU system time: 0.13 seconds. Elapsed time: 2.95 seconds; current allocated memory: 879.301 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fft.
INFO: [VLOG 209-307] Generating Verilog RTL for fft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 136.99 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:30; Allocated memory: 236.062 MB.
INFO: [HLS 200-112] Total CPU user time: 21.77 seconds. Total CPU system time: 5.17 seconds. Total elapsed time: 42.93 seconds; peak allocated memory: 879.301 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 45s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch fft.comp/.csynth
cp -f fft.comp/hls/syn/report/fft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best


================================================================
== Vitis HLS Report for 'fft'
================================================================
* Date:           Fri Nov 20 15:39:17 2026

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
    |ap_clk  |  10.00 ns|  7.300 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+-----------+-----------+------+------+----------+
    |  Latency (cycles) |   Latency (absolute)  |   Interval  | Pipeline |
    |   min   |   max   |    min    |    max    |  min |  max |   Type   |
    +---------+---------+-----------+-----------+------+------+----------+
    |     7333|     7333|  73.330 us|  73.330 us|  2053|  2053|  dataflow|
    +---------+---------+-----------+-----------+------+------+----------+

    + Detail: 
        * Instance: 
        +--------------------+-----------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |                    |                 |  Latency (cycles) |   Latency (absolute)  |   Interval  |                    Pipeline                    |
        |      Instance      |      Module     |   min   |   max   |    min    |    max    |  min |  max |                      Type                      |
        +--------------------+-----------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |entry_proc_U0       |entry_proc       |        0|        0|       0 ns|       0 ns|     0|     0|                                              no|
        |fft_stage_first_U0  |fft_stage_first  |     2052|     2052|  20.520 us|  20.520 us|  2052|  2052|                                              no|
        |fft_stages_U0       |fft_stages       |      520|      520|   5.200 us|   5.200 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_1_U0     |fft_stages_1     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_2_U0     |fft_stages_2     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_3_U0     |fft_stages_3     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_4_U0     |fft_stages_4     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_5_U0     |fft_stages_5     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_6_U0     |fft_stages_6     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stages_7_U0     |fft_stages_7     |      529|      529|   5.290 us|   5.290 us|   512|   512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |fft_stage_last_U0   |fft_stage_last   |     1049|     1049|  10.490 us|  10.490 us|  1049|  1049|                                              no|
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
|Expression       |        -|    -|       0|     52|    -|
|FIFO             |        -|    -|     198|    134|    -|
|Instance         |       28|  189|   27631|  38036|    -|
|Memory           |       72|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|     99|    -|
|Register         |        -|    -|      11|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |      100|  189|   27840|  38321|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       35|   85|      26|     72|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +--------------------+-----------------+---------+----+------+------+-----+
    |      Instance      |      Module     | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +--------------------+-----------------+---------+----+------+------+-----+
    |control_s_axi_U     |control_s_axi    |        0|   0|   316|   552|    0|
    |entry_proc_U0       |entry_proc       |        0|   0|     2|    29|    0|
    |fft_stage_first_U0  |fft_stage_first  |        0|   4|  2073|  2731|    0|
    |fft_stage_last_U0   |fft_stage_last   |        2|   9|  2597|  3440|    0|
    |fft_stages_U0       |fft_stages       |        0|   8|  1248|  1764|    0|
    |fft_stages_1_U0     |fft_stages_1     |        2|  24|  2631|  3826|    0|
    |fft_stages_2_U0     |fft_stages_2     |        2|  24|  2631|  3826|    0|
    |fft_stages_3_U0     |fft_stages_3     |        2|  24|  2631|  3826|    0|
    |fft_stages_4_U0     |fft_stages_4     |        2|  24|  2631|  3826|    0|
    |fft_stages_5_U0     |fft_stages_5     |        2|  24|  2631|  3826|    0|
    |fft_stages_6_U0     |fft_stages_6     |        2|  24|  2631|  3826|    0|
    |fft_stages_7_U0     |fft_stages_7     |        2|  24|  2631|  3826|    0|
    |ximag_in_m_axi_U    |ximag_in_m_axi   |        4|   0|   824|   723|    0|
    |ximag_out_m_axi_U   |ximag_out_m_axi  |        2|   0|   665|   646|    0|
    |xreal_in_m_axi_U    |xreal_in_m_axi   |        4|   0|   824|   723|    0|
    |xreal_out_m_axi_U   |xreal_out_m_axi  |        2|   0|   665|   646|    0|
    +--------------------+-----------------+---------+----+------+------+-----+
    |Total               |                 |       28| 189| 27631| 38036|    0|
    +--------------------+-----------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |   Memory   |         Module         | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Stage1_R_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage1_I_U  |Stage1_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage2_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage2_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage3_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage3_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage4_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage4_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage5_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage5_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage6_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage6_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage7_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage7_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage8_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage8_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage9_R_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    |Stage9_I_U  |Stage2_R_RAM_AUTO_1R1W  |        4|  0|   0|    0|  1024|   32|     1|        32768|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total       |                        |       72|  0|   0|    0| 18432|  576|    18|       589824|
    +------------+------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    +-----------+---------+----+----+-----+------+-----+---------+
    |    Name   | BRAM_18K| FF | LUT| URAM| Depth| Bits| Size:D*B|
    +-----------+---------+----+----+-----+------+-----+---------+
    |OUT_I_c_U  |        0|  99|   0|    -|    11|   64|      704|
    |OUT_R_c_U  |        0|  99|   0|    -|    11|   64|      704|
    +-----------+---------+----+----+-----+------+-----+---------+
    |Total      |        0| 198|   0|    0|    22|  128|     1408|
    +-----------+---------+----+----+-----+------+-----+---------+

    * Expression: 
    +-------------------------------------+----------+----+---+----+------------+------------+
    |            Variable Name            | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +-------------------------------------+----------+----+---+----+------------+------------+
    |ap_channel_done_Stage1_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage2_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage3_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage4_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage5_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage6_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage7_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage8_I             |       and|   0|  0|   2|           1|           1|
    |ap_channel_done_Stage9_I             |       and|   0|  0|   2|           1|           1|
    |ap_idle                              |       and|   0|  0|   2|           1|           1|
    |ap_sync_done                         |       and|   0|  0|   2|           1|           1|
    |ap_sync_ready                        |       and|   0|  0|   2|           1|           1|
    |entry_proc_U0_ap_start               |       and|   0|  0|   2|           1|           1|
    |fft_stage_first_U0_ap_continue       |       and|   0|  0|   2|           1|           1|
    |fft_stage_first_U0_ap_start          |       and|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage1_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage2_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage3_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage4_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage5_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage6_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage7_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage8_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_channel_write_Stage9_I       |        or|   0|  0|   2|           1|           1|
    |ap_sync_entry_proc_U0_ap_ready       |        or|   0|  0|   2|           1|           1|
    |ap_sync_fft_stage_first_U0_ap_ready  |        or|   0|  0|   2|           1|           1|
    +-------------------------------------+----------+----+---+----+------------+------------+
    |Total                                |          |   0|  0|  52|          26|          26|
    +-------------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-----------------------------------------+----+-----------+-----+-----------+
    |                   Name                  | LUT| Input Size| Bits| Total Bits|
    +-----------------------------------------+----+-----------+-----+-----------+
    |ap_sync_reg_channel_write_Stage1_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage2_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage3_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage4_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage5_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage6_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage7_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage8_I       |   9|          2|    1|          2|
    |ap_sync_reg_channel_write_Stage9_I       |   9|          2|    1|          2|
    |ap_sync_reg_entry_proc_U0_ap_ready       |   9|          2|    1|          2|
    |ap_sync_reg_fft_stage_first_U0_ap_ready  |   9|          2|    1|          2|
    +-----------------------------------------+----+-----------+-----+-----------+
    |Total                                    |  99|         22|   11|         22|
    +-----------------------------------------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------+---+----+-----+-----------+
    |                   Name                  | FF| LUT| Bits| Const Bits|
    +-----------------------------------------+---+----+-----+-----------+
    |ap_sync_reg_channel_write_Stage1_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage2_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage3_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage4_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage5_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage6_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage7_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage8_I       |  1|   0|    1|          0|
    |ap_sync_reg_channel_write_Stage9_I       |  1|   0|    1|          0|
    |ap_sync_reg_entry_proc_U0_ap_ready       |  1|   0|    1|          0|
    |ap_sync_reg_fft_stage_first_U0_ap_ready  |  1|   0|    1|          0|
    +-----------------------------------------+---+----+-----+-----------+
    |Total                                    | 11|   0|   11|          0|
    +-----------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------------+-----+-----+------------+--------------+--------------+
|         RTL Ports        | Dir | Bits|  Protocol  | Source Object|    C Type    |
+--------------------------+-----+-----+------------+--------------+--------------+
|s_axi_control_AWVALID     |   in|    1|       s_axi|       control|        scalar|
|s_axi_control_AWREADY     |  out|    1|       s_axi|       control|        scalar|
|s_axi_control_AWADDR      |   in|    6|       s_axi|       control|        scalar|
|s_axi_control_WVALID      |   in|    1|       s_axi|       control|        scalar|
|s_axi_control_WREADY      |  out|    1|       s_axi|       control|        scalar|
|s_axi_control_WDATA       |   in|   32|       s_axi|       control|        scalar|
|s_axi_control_WSTRB       |   in|    4|       s_axi|       control|        scalar|
|s_axi_control_ARVALID     |   in|    1|       s_axi|       control|        scalar|
|s_axi_control_ARREADY     |  out|    1|       s_axi|       control|        scalar|
|s_axi_control_ARADDR      |   in|    6|       s_axi|       control|        scalar|
|s_axi_control_RVALID      |  out|    1|       s_axi|       control|        scalar|
|s_axi_control_RREADY      |   in|    1|       s_axi|       control|        scalar|
|s_axi_control_RDATA       |  out|   32|       s_axi|       control|        scalar|
|s_axi_control_RRESP       |  out|    2|       s_axi|       control|        scalar|
|s_axi_control_BVALID      |  out|    1|       s_axi|       control|        scalar|
|s_axi_control_BREADY      |   in|    1|       s_axi|       control|        scalar|
|s_axi_control_BRESP       |  out|    2|       s_axi|       control|        scalar|
|ap_clk                    |   in|    1|  ap_ctrl_hs|           fft|  return value|
|ap_rst_n                  |   in|    1|  ap_ctrl_hs|           fft|  return value|
|interrupt                 |  out|    1|  ap_ctrl_hs|           fft|  return value|
|m_axi_ximag_in_AWVALID    |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWREADY    |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWADDR     |  out|   64|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWID       |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWLEN      |  out|    8|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWSIZE     |  out|    3|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWBURST    |  out|    2|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWLOCK     |  out|    2|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWCACHE    |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWPROT     |  out|    3|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWQOS      |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWREGION   |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_AWUSER     |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WVALID     |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WREADY     |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WDATA      |  out|   32|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WSTRB      |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WLAST      |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WID        |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_WUSER      |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARVALID    |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARREADY    |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARADDR     |  out|   64|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARID       |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARLEN      |  out|    8|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARSIZE     |  out|    3|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARBURST    |  out|    2|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARLOCK     |  out|    2|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARCACHE    |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARPROT     |  out|    3|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARQOS      |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARREGION   |  out|    4|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_ARUSER     |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RVALID     |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RREADY     |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RDATA      |   in|   32|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RLAST      |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RID        |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RUSER      |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_RRESP      |   in|    2|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_BVALID     |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_BREADY     |  out|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_BRESP      |   in|    2|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_BID        |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_in_BUSER      |   in|    1|       m_axi|      ximag_in|       pointer|
|m_axi_ximag_out_AWVALID   |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWREADY   |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWADDR    |  out|   64|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWID      |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWLEN     |  out|    8|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWSIZE    |  out|    3|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWBURST   |  out|    2|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWLOCK    |  out|    2|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWCACHE   |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWPROT    |  out|    3|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWQOS     |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWREGION  |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_AWUSER    |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WVALID    |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WREADY    |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WDATA     |  out|   32|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WSTRB     |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WLAST     |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WID       |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_WUSER     |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARVALID   |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARREADY   |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARADDR    |  out|   64|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARID      |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARLEN     |  out|    8|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARSIZE    |  out|    3|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARBURST   |  out|    2|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARLOCK    |  out|    2|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARCACHE   |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARPROT    |  out|    3|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARQOS     |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARREGION  |  out|    4|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_ARUSER    |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RVALID    |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RREADY    |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RDATA     |   in|   32|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RLAST     |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RID       |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RUSER     |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_RRESP     |   in|    2|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_BVALID    |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_BREADY    |  out|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_BRESP     |   in|    2|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_BID       |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_ximag_out_BUSER     |   in|    1|       m_axi|     ximag_out|       pointer|
|m_axi_xreal_in_AWVALID    |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWREADY    |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWADDR     |  out|   64|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWID       |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWLEN      |  out|    8|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWSIZE     |  out|    3|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWBURST    |  out|    2|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWLOCK     |  out|    2|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWCACHE    |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWPROT     |  out|    3|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWQOS      |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWREGION   |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_AWUSER     |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WVALID     |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WREADY     |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WDATA      |  out|   32|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WSTRB      |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WLAST      |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WID        |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_WUSER      |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARVALID    |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARREADY    |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARADDR     |  out|   64|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARID       |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARLEN      |  out|    8|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARSIZE     |  out|    3|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARBURST    |  out|    2|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARLOCK     |  out|    2|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARCACHE    |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARPROT     |  out|    3|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARQOS      |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARREGION   |  out|    4|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_ARUSER     |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RVALID     |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RREADY     |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RDATA      |   in|   32|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RLAST      |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RID        |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RUSER      |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_RRESP      |   in|    2|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_BVALID     |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_BREADY     |  out|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_BRESP      |   in|    2|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_BID        |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_in_BUSER      |   in|    1|       m_axi|      xreal_in|       pointer|
|m_axi_xreal_out_AWVALID   |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWREADY   |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWADDR    |  out|   64|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWID      |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWLEN     |  out|    8|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWSIZE    |  out|    3|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWBURST   |  out|    2|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWLOCK    |  out|    2|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWCACHE   |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWPROT    |  out|    3|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWQOS     |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWREGION  |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_AWUSER    |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WVALID    |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WREADY    |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WDATA     |  out|   32|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WSTRB     |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WLAST     |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WID       |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_WUSER     |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARVALID   |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARREADY   |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARADDR    |  out|   64|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARID      |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARLEN     |  out|    8|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARSIZE    |  out|    3|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARBURST   |  out|    2|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARLOCK    |  out|    2|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARCACHE   |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARPROT    |  out|    3|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARQOS     |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARREGION  |  out|    4|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_ARUSER    |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RVALID    |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RREADY    |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RDATA     |   in|   32|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RLAST     |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RID       |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RUSER     |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_RRESP     |   in|    2|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_BVALID    |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_BREADY    |  out|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_BRESP     |   in|    2|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_BID       |   in|    1|       m_axi|     xreal_out|       pointer|
|m_axi_xreal_out_BUSER     |   in|    1|       m_axi|     xreal_out|       pointer|
+--------------------------+-----+-----+------------+--------------+--------------+

sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "fft.comp/hls/impl/ip/component.xml" "HLS IP export" vitis-run --mode hls --tcl export_fft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Fri Nov 20 15:39:25 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/export_fft.tcl'
INFO: [HLS 200-1510] Running: open_component fft.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp'.
INFO: [HLS 200-10] Opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls'.
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
INFO: [HLS 200-1505] Using flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1465] Applying ini 'syn.file=../fft.h' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(6)
INFO: [HLS 200-10] Adding design file 'fft.h' to the project
INFO: [HLS 200-1465] Applying ini 'syn.file=../fft.cpp' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(7)
INFO: [HLS 200-10] Adding design file 'fft.cpp' to the project
INFO: [HLS 200-1465] Applying ini 'tb.file=../out.gold.dat' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(9)
INFO: [HLS 200-10] Adding test bench file 'out.gold.dat' to the project
INFO: [HLS 200-1465] Applying ini 'tb.file=../fft_test.cpp' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(10)
INFO: [HLS 200-10] Adding test bench file 'fft_test.cpp' to the project
INFO: [HLS 200-1465] Applying ini 'syn.top=fft' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(8)
INFO: [HLS 200-1465] Applying ini 'flow_target=vivado' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(5)
INFO: [HLS 200-1505] Using flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1465] Applying ini 'part=xc7z020-clg400-1' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(1)
INFO: [HLS 200-1465] Applying ini 'clock=10ns' from /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls_config.cfg(4)
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: export_design -format ip_catalog -rtl verilog -vendor xilinx.com -library hls -version 1.0 -ipname fft 
INFO: [IMPL 213-8] Exporting RTL as a Vivado IP.

****** Vivado v2024.2 (64-bit)
  **** SW Build 5239630 on Fri Nov 08 22:34:34 MST 2024
  **** IP Build 5239520 on Sun Nov 10 16:12:51 MST 2024
  **** SharedData Build 5239561 on Fri Nov 08 14:39:27 MST 2024
  **** Start of session at: Fri Nov 20 15:39:47 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

source run_ippack.tcl -notrace
INFO: calling package_hls_ip ip_types=vitis sysgen json_file=/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/hls_data.json outdir=/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip srcdir=/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls sort_interfaces_ports=false
INFO: Copied 1 ipmisc file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/misc
INFO: Copied 39 verilog file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/hdl/verilog
INFO: Copied 34 vhdl file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/hdl/vhdl
INFO: Copied 10 swdriver file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/drivers
Generating 5 subcores in /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/hdl/ip.tmp:
impl/misc/fft_fadd_32ns_32ns_32_5_full_dsp_1_ip.tcl
impl/misc/fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
impl/misc/fft_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl
impl/misc/fft_fmul_32ns_32ns_32_5_no_dsp_1_ip.tcl
impl/misc/fft_fsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
create_project: Time (s): cpu = 00:00:09 ; elapsed = 00:00:10 . Memory (MB): peak = 1494.898 ; gain = 59.879 ; free physical = 8532 ; free virtual = 21884
INFO: Using COE_DIR=/home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/hdl/verilog
INFO: Generating fft_fadd_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/fft_fadd_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: [IP_Flow 19-234] Refreshing IP repositories
INFO: [IP_Flow 19-1704] No user IP repositories specified
INFO: [IP_Flow 19-2313] Loaded Vivado IP repository '/software/common/Xilinx_Vitis/Vivado/2024.2/data/ip'.
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'fft_fadd_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'fft_fadd_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: Done generating fft_fadd_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/fft_fadd_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: Generating fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: Done generating fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/fft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: Generating fft_fmul_32ns_32ns_32_4_max_dsp_1_ip via file impl/misc/fft_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'fft_fmul_32ns_32ns_32_4_max_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'fft_fmul_32ns_32ns_32_4_max_dsp_1_ip'...
INFO: Done generating fft_fmul_32ns_32ns_32_4_max_dsp_1_ip via file impl/misc/fft_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl
INFO: Generating fft_fmul_32ns_32ns_32_5_no_dsp_1_ip via file impl/misc/fft_fmul_32ns_32ns_32_5_no_dsp_1_ip.tcl
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'fft_fmul_32ns_32ns_32_5_no_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'fft_fmul_32ns_32ns_32_5_no_dsp_1_ip'...
INFO: Done generating fft_fmul_32ns_32ns_32_5_no_dsp_1_ip via file impl/misc/fft_fmul_32ns_32ns_32_5_no_dsp_1_ip.tcl
INFO: Generating fft_fsub_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/fft_fsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'fft_fsub_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'fft_fsub_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: Done generating fft_fsub_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/fft_fsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: Import ports from HDL: /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/hdl/vhdl/fft.vhd (fft)
INFO: Add axi4lite interface s_axi_control
INFO: Add clock interface ap_clk
INFO: Add reset interface ap_rst_n
INFO: Add interrupt interface interrupt
INFO: [IP_Flow 19-234] Refreshing IP repositories
INFO: [IP_Flow 19-1704] No user IP repositories specified
INFO: [IP_Flow 19-2313] Loaded Vivado IP repository '/software/common/Xilinx_Vitis/Vivado/2024.2/data/ip'.
INFO: Add axi4full interface m_axi_ximag_in
INFO: Add axi4full interface m_axi_ximag_out
INFO: Add axi4full interface m_axi_xreal_in
INFO: Add axi4full interface m_axi_xreal_out
INFO: Calling post_process_vitis to specialize IP
INFO: Calling post_process_sysgen to specialize IP
Generating sysgen info xml from json file
INFO: Created IP /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/component.xml
INFO: Created IP archive /home/linux/ieng6/students/519/gam009/wes237c/project4/fft1024_best/fft.comp/hls/impl/ip/xilinx_com_hls_fft_1_0.zip
INFO: [Common 17-206] Exiting Vivado at Fri Nov 20 15:40:41 2026...
INFO: [HLS 200-802] Generated output file fft.comp/hls/impl/export.zip
INFO: [HLS 200-2161] Finished Command export_design Elapsed time: 00:01:15; Allocated memory: 25.605 MB.
INFO: [HLS 200-112] Total CPU user time: 55.19 seconds. Total CPU system time: 5.28 seconds. Total elapsed time: 83.74 seconds; peak allocated memory: 725.098 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 25s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
open_component fft.comp
export_design -format ip_catalog -rtl verilog -vendor xilinx.com -library hls -version 1.0 -ipname fft
exit
rm fft_test.bin
