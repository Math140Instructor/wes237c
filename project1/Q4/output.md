# Original conditionals and pipeline

LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir_orig.cpp -g -o fir_test.bin
Running fir_test.bin with fir_orig.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/__hls_config__.ini -i fir_orig.cpp -o fir_orig.tcl
sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top fir/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb fir-top.cpp/' fir_orig.tcl
vitis-run --mode hls --tcl fir_orig.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 19:07:53 2026
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
INFO: [HLS 200-1510] Running: add_files -tb fir-top.cpp 
WARNING: [HLS 200-40] Cannot find test bench file 'fir-top.cpp'
INFO: [HLS 200-1510] Running: set_top fir 
Running: set_top fir_orig
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
WARNING: [HLS 200-1998] cannot find relative file path '../../fir-top.cpp' in directory(s): /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/solution /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4
WARNING: [HLS 200-1998] cannot find relative file path '../../fir-top.cpp' in directory(s): /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/solution /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'fir_orig.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.55 seconds. CPU system time: 0.98 seconds. Elapsed time: 1.86 seconds; current allocated memory: 660.094 MB.
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
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.39 seconds. CPU system time: 1.08 seconds. Elapsed time: 10.29 seconds; current allocated memory: 669.910 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.910 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.062 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.062 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 690.727 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 691.266 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Accum_Loop'.
INFO: [HLS 200-1470] Pipelining result : Target II = 8, Final II = 5, Depth = 5, loop 'Shift_Accum_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.21 seconds; current allocated memory: 691.910 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.910 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.910 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.910 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Accum_Loop'.
INFO: [RTMG 210-278] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.19 seconds; current allocated memory: 692.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.22 seconds; current allocated memory: 692.266 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.87 seconds; current allocated memory: 693.441 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.45 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.88 seconds; current allocated memory: 695.445 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.68 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 52.301 MB.
INFO: [HLS 200-112] Total CPU user time: 14.7 seconds. Total CPU system time: 3.77 seconds. Total elapsed time: 36.7 seconds; peak allocated memory: 695.445 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 39s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir_orig.comp/hls/syn/report/fir_csynth.rpt fir_orig_csynth.rpt

# No conditionals and pipline
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir.cpp -g -o fir_test.bin
Running fir_test.bin with fir.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/__hls_config__.ini -i fir.cpp -o fir.tcl
sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top fir/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb fir-top.cpp/' fir.tcl
vitis-run --mode hls --tcl fir.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 19:10:46 2026
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
INFO: [HLS 200-1510] Running: add_files -tb fir-top.cpp 
WARNING: [HLS 200-40] Cannot find test bench file 'fir-top.cpp'
INFO: [HLS 200-1510] Running: set_top fir 
Running: set_top fir
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
WARNING: [HLS 200-1998] cannot find relative file path '../../fir-top.cpp' in directory(s): /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/solution /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4
WARNING: [HLS 200-1998] cannot find relative file path '../../fir-top.cpp' in directory(s): /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir.comp/solution /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.79 seconds; current allocated memory: 659.156 MB.
INFO: [HLS 200-10] Analyzing design file 'fir.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.47 seconds. CPU system time: 0.97 seconds. Elapsed time: 1.7 seconds; current allocated memory: 660.121 MB.
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
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.07 seconds. CPU system time: 1.04 seconds. Elapsed time: 9.87 seconds; current allocated memory: 669.957 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 669.957 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 670.094 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.094 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 690.918 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 691.176 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Accum_Loop'.
INFO: [HLS 200-1470] Pipelining result : Target II = 8, Final II = 5, Depth = 5, loop 'Shift_Accum_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.22 seconds; current allocated memory: 691.488 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.488 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.488 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 691.488 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Accum_Loop'.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 692.176 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [RTMG 210-278] Implementing memory 'fir_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.23 seconds; current allocated memory: 692.176 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.4 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.7 seconds; current allocated memory: 693.301 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.38 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.71 seconds; current allocated memory: 695.273 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.68 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 52.117 MB.
INFO: [HLS 200-112] Total CPU user time: 13.74 seconds. Total CPU system time: 3.52 seconds. Total elapsed time: 31.83 seconds; peak allocated memory: 695.273 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 34s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f fir.comp/hls/syn/report/fir_csynth.rpt fir_csynth.rpt
