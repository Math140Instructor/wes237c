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
  **** Start of session at: Thu Oct  8 21:10:46 2026
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.17 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.8 seconds; current allocated memory: 657.879 MB.
INFO: [HLS 200-10] Analyzing design file 'fir_loop_partition.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.6 seconds. CPU system time: 1.07 seconds. Elapsed time: 2.19 seconds; current allocated memory: 659.094 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 63 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 80 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 64 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 59 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 59 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 57 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 149 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 125 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 129 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 142 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q5/fir_loop_partition.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-188] Unrolling loop 'Accum_High' (fir_loop_partition.cpp:44:3) in function 'fir' partially with a factor of 2 (fir_loop_partition.cpp:15:0)
INFO: [HLS 214-188] Unrolling loop 'Accum_Low' (fir_loop_partition.cpp:37:3) in function 'fir' partially with a factor of 2 (fir_loop_partition.cpp:15:0)
INFO: [HLS 214-188] Unrolling loop 'Shift_Loop' (fir_loop_partition.cpp:27:3) in function 'fir' partially with a factor of 2 (fir_loop_partition.cpp:15:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< Shift_Loop> at fir_loop_partition.cpp:27:3 
INFO: [HLS 214-376] automatically set the pipeline for Loop< Accum_Low> at fir_loop_partition.cpp:37:3 
INFO: [HLS 214-376] automatically set the pipeline for Loop< Accum_High> at fir_loop_partition.cpp:44:3 
INFO: [HLS 214-270] Inferring pragma 'array_partition type=cyclic factor=3 dim=1' for array 'fir(int*, int)::shift_reg' due to pipeline pragma (fir_loop_partition.cpp:20:0)
INFO: [HLS 214-248] Applying array_partition to '_ZZ3firPiiE9shift_reg': Cyclic partitioning with factor 3 on dimension 1. (fir_loop_partition.cpp:20:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.93 seconds. CPU system time: 1.16 seconds. Elapsed time: 10.79 seconds; current allocated memory: 669.039 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.039 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 669.242 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 669.262 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.08 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.12 seconds; current allocated memory: 690.809 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 709.926 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Loop'.
WARNING: [HLS 200-878] Unable to schedule the loop exit test ('icmp' operation 1 bit ('icmp_ln27', fir_loop_partition.cpp:27)) in the first pipeline iteration (II = 1 cycles).
Resolution: For help on HLS 200-878 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-878.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 70, loop 'Shift_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.3 seconds; current allocated memory: 710.918 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 710.918 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Accum_Low' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Accum_Low'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 14, loop 'Accum_Low'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0 seconds. Elapsed time: 0.21 seconds; current allocated memory: 710.918 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 710.918 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Accum_High' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Accum_High'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 15, loop 'Accum_High'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.2 seconds; current allocated memory: 710.918 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 710.918 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 710.918 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 710.918 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Shift_Loop' pipeline 'Shift_Loop' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_64ns_66ns_129_5_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_7_2_32_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'urem_64ns_3ns_2_68_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Loop'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.12 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.3 seconds; current allocated memory: 712.305 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Accum_Low' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Accum_Low' pipeline 'Accum_Low' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] RTL name 'sparsemux_7_2_32_1_1' is changed to 'sparsemux_7_2_32_1_1_x' due to conflict.
INFO: [RTGEN 206-100] Generating core module 'mul_6ns_8ns_13_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_7_2_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_7_2_32_1_1_x': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'urem_7ns_3ns_2_11_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Accum_Low'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.26 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.43 seconds; current allocated memory: 714.723 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Accum_High' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Accum_High' pipeline 'Accum_High' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_7ns_9ns_15_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_7_2_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_7_2_32_1_1_x': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'urem_8ns_3ns_2_12_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Accum_High'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.39 seconds; current allocated memory: 715.730 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [RTMG 210-278] Implementing memory 'fir_fir_int_int_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-2168] Implementing memory 'fir_fir_int_int_c_ROM_AUTO_1R' using auto ROMs with 2 copies to ensure enough ports to satisfy II or latency constraints.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.58 seconds; current allocated memory: 718.621 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.54 seconds. CPU system time: 0.07 seconds. Elapsed time: 1.52 seconds; current allocated memory: 720.848 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.49 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.95 seconds; current allocated memory: 723.359 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 143.31 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:26; Allocated memory: 81.629 MB.
INFO: [HLS 200-112] Total CPU user time: 17.04 seconds. Total CPU system time: 4.14 seconds. Total elapsed time: 44.5 seconds; peak allocated memory: 723.508 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 47s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir_loop_partition.comp/hls/syn/report/fir_csynth.rpt fir_loop_partition_csynth.rpt
