## Baseline
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir.cpp -g -o fir_test.bin
Running fir_test.bin with fir.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/__hls_config__.ini -i fir.cpp -o fir.tcl
sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top fir/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb fir_test.cpp/' fir.tcl
vitis-run --mode hls --tcl fir.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 20:57:49 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.tcl'
INFO: [HLS 200-1510] Running: open_component fir.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files fir.cpp 
INFO: [HLS 200-10] Adding design file 'fir.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb fir_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'fir_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top fir 
Running: set_top fir
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.17 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.8 seconds; current allocated memory: 659.113 MB.
INFO: [HLS 200-10] Analyzing design file 'fir.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.57 seconds. CPU system time: 1.02 seconds. Elapsed time: 1.84 seconds; current allocated memory: 660.047 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 43 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 30 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 27 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 29 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 34 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< Shift_Accum_Loop> at fir.cpp:29:2 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.44 seconds. CPU system time: 1.11 seconds. Elapsed time: 10.21 seconds; current allocated memory: 669.914 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.914 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.098 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.098 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 690.500 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.289 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Accum_Loop'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 5, loop 'Shift_Accum_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.23 seconds; current allocated memory: 691.609 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.609 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 691.609 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.609 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Shift_Accum_Loop' pipeline 'Shift_Accum_Loop' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Accum_Loop'.
INFO: [RTMG 210-278] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 692.289 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.13 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.25 seconds; current allocated memory: 692.289 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.86 seconds; current allocated memory: 693.680 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.4 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.75 seconds; current allocated memory: 695.590 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.68 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 52.477 MB.
INFO: [HLS 200-112] Total CPU user time: 15.43 seconds. Total CPU system time: 3.9 seconds. Total elapsed time: 40.09 seconds; peak allocated memory: 695.590 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 43s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir.comp/hls/syn/report/fir_csynth.rpt fir_csynth.rpt

## Two loops
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir_loop_partition.cpp -g -o fir_test.bin
Running fir_test.bin with fir_loop_partition.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/__hls_config__.ini -i fir_loop_partition.cpp -o fir_loop_partition.tcl
sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top fir/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb fir_test.cpp/' fir_loop_partition.tcl
vitis-run --mode hls --tcl fir_loop_partition.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 21:54:41 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.tcl'
INFO: [HLS 200-1510] Running: open_component fir_loop_partition.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp'.
INFO: [HLS 200-10] Opening and resetting solution '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files fir_loop_partition.cpp 
INFO: [HLS 200-10] Adding design file 'fir_loop_partition.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb fir_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'fir_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top fir 
Running: set_top fir_loop_partition
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.19 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.91 seconds; current allocated memory: 657.891 MB.
INFO: [HLS 200-10] Analyzing design file 'fir_loop_partition.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.61 seconds. CPU system time: 0.97 seconds. Elapsed time: 1.9 seconds; current allocated memory: 659.090 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 59 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 50 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 36 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 37 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 37 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 35 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.11 seconds. CPU system time: 1.17 seconds. Elapsed time: 11.28 seconds; current allocated memory: 668.953 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 668.953 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 669.105 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 669.105 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (fir_loop_partition.cpp:37:9) to (fir_loop_partition.cpp:36:3) in function 'fir'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.08 seconds; current allocated memory: 690.125 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 699.746 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Upper_Half' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Upper_Half'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 5, loop 'Upper_Half'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.3 seconds; current allocated memory: 700.691 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 700.691 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Lower_Half' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Lower_Half'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 5, loop 'Lower_Half'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 700.699 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 700.699 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.22 seconds; current allocated memory: 700.699 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.18 seconds; current allocated memory: 700.699 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Upper_Half' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Upper_Half' pipeline 'Upper_Half' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Upper_Half'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.37 seconds; current allocated memory: 700.699 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Lower_Half' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Lower_Half' pipeline 'Lower_Half' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Lower_Half'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.57 seconds; current allocated memory: 700.699 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [RTMG 210-278] Implementing memory 'fir_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.62 seconds; current allocated memory: 701.645 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.52 seconds. CPU system time: 0.06 seconds. Elapsed time: 1.59 seconds; current allocated memory: 703.754 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.52 seconds. CPU system time: 0.09 seconds. Elapsed time: 1.28 seconds; current allocated memory: 705.930 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.77 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:27; Allocated memory: 64.039 MB.
INFO: [HLS 200-112] Total CPU user time: 17.01 seconds. Total CPU system time: 3.85 seconds. Total elapsed time: 39.82 seconds; peak allocated memory: 705.930 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 43s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir_loop_partition.comp/hls/syn/report/fir_csynth.rpt fir_loop_partition_csynth.rpt
