LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir_orig.cpp -g -o fir_test.bin
Running fir_test.bin with fir_orig.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/__hls_config__.ini -i fir_orig.cpp -o fir_orig.tcl
sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top fir/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb fir_test.cpp/' fir_orig.tcl
vitis-run --mode hls --tcl fir_orig.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 19:16:57 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.tcl'
INFO: [HLS 200-1510] Running: open_component fir_orig.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files fir_orig.cpp 
INFO: [HLS 200-10] Adding design file 'fir_orig.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb fir_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'fir_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top fir 
Running: set_top fir_orig
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.17 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.81 seconds; current allocated memory: 659.129 MB.
INFO: [HLS 200-10] Analyzing design file 'fir_orig.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.48 seconds. CPU system time: 0.92 seconds. Elapsed time: 1.64 seconds; current allocated memory: 660.090 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 43 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 30 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 27 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 29 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 34 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.4 seconds. CPU system time: 1.08 seconds. Elapsed time: 10.13 seconds; current allocated memory: 669.887 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.887 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.020 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.035 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 690.477 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 691.246 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Accum_Loop'.
INFO: [HLS 200-1470] Pipelining result : Target II = 8, Final II = 5, Depth = 5, loop 'Shift_Accum_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.22 seconds; current allocated memory: 691.727 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.727 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 691.727 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.727 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Accum_Loop'.
INFO: [RTMG 210-278] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 692.246 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.24 seconds; current allocated memory: 692.246 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.45 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.9 seconds; current allocated memory: 693.395 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.42 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.96 seconds; current allocated memory: 695.418 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.68 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 52.289 MB.
INFO: [HLS 200-112] Total CPU user time: 14.44 seconds. Total CPU system time: 3.77 seconds. Total elapsed time: 38.46 seconds; peak allocated memory: 695.418 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 41s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir_orig.comp/hls/syn/report/fir_csynth.rpt fir_orig_csynth.rpt

## No conditionals and pipeline
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir.cpp -g -o fir_test.bin
Running fir_test.bin with fir.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/__hls_config__.ini -i fir.cpp -o fir.tcl
sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top fir/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb fir_test.cpp/' fir.tcl
vitis-run --mode hls --tcl fir.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 19:18:18 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.tcl'
INFO: [HLS 200-1510] Running: open_component fir.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.17 seconds. CPU system time: 0.07 seconds. Elapsed time: 7.91 seconds; current allocated memory: 659.109 MB.
INFO: [HLS 200-10] Analyzing design file 'fir.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.65 seconds. CPU system time: 1.02 seconds. Elapsed time: 2.11 seconds; current allocated memory: 660.090 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 21 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 20 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 20 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 19 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 23 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 28 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.03 seconds. CPU system time: 1.18 seconds. Elapsed time: 11.29 seconds; current allocated memory: 669.961 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.961 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.098 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.098 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.09 seconds; current allocated memory: 690.414 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 691.172 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Accum_Loop'.
INFO: [HLS 200-1470] Pipelining result : Target II = 8, Final II = 5, Depth = 5, loop 'Shift_Accum_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.28 seconds; current allocated memory: 691.328 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 691.328 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 691.328 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 691.328 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Accum_Loop'.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.17 seconds; current allocated memory: 692.172 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [RTMG 210-278] Implementing memory 'fir_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.12 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.45 seconds; current allocated memory: 692.172 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.48 seconds. CPU system time: 0.04 seconds. Elapsed time: 1.22 seconds; current allocated memory: 693.367 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.46 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.74 seconds; current allocated memory: 695.289 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.68 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:24; Allocated memory: 52.180 MB.
INFO: [HLS 200-112] Total CPU user time: 17.03 seconds. Total CPU system time: 4.22 seconds. Total elapsed time: 43.43 seconds; peak allocated memory: 695.289 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 46s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir.comp/hls/syn/report/fir_csynth.rpt fir_csynth.rpt
