LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include dft_test.cpp dft.cpp -g -o dft_test.bin
./dft_test.bin > dft_test.log 2>&1 || { s=$?; echo "./dft_test.bin > dft_test.log failed $s" >&2; exit $s; }
----------------------------------------------
   RMSE(R)           RMSE(I)
0.001853297655050 0.001314980303271
----------------------------------------------
PASS: The output matches the golden output!
INFO [HLS SIM]: The maximum depth reached by any hls::stream() instance in the design is 1024
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 22:45:21 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 4.88 seconds. CPU system time: 1.14 seconds. Elapsed time: 6.59 seconds; current allocated memory: 660.605 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 463 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 190 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 154 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 153 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 153 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 153 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 153 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 153 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 153 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 179 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 179 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 177 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 137 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 137 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 135 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 137 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-188] Unrolling loop 'VITIS_LOOP_30_3' (dft.cpp:30:22) in function 'dft' partially with a factor of 2 (dft.cpp:5:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_17_1> at dft.cpp:17:20 
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_30_3> at dft.cpp:30:22 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.45 seconds. CPU system time: 1.2 seconds. Elapsed time: 10.24 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.438 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.480 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 692.305 MB.
INFO: [HLS 200-2061] Successfully converted nested loops 'VITIS_LOOP_26_2'(dft.cpp:26:20) and 'VITIS_LOOP_30_3'(dft.cpp:30:22) in function 'dft' into perfectly nested loops.
INFO: [XFORM 203-541] Flattening a loop nest 'VITIS_LOOP_26_2' (dft.cpp:26:20) in function 'dft'.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 702.266 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_17_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_17_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'VITIS_LOOP_17_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.23 seconds; current allocated memory: 703.199 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 703.199 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'.
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 7, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 9, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' (loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'): Unable to enforce a carried dependence constraint (II = 10, distance = 1, offset = 0) between 'store' operation 0 bit ('real_sum_write_ln27', dft.cpp:27) of variable 'real_sum', dft.cpp:38 on local variable 'real_sum', dft.cpp:27 and 'load' operation 32 bit ('real_sum_load', dft.cpp:26) on local variable 'real_sum', dft.cpp:27.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 11, Depth = 28, loop 'VITIS_LOOP_26_2_VITIS_LOOP_30_3'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.2 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.29 seconds; current allocated memory: 703.273 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 703.273 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 703.273 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 703.273 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_17_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_17_1' pipeline 'VITIS_LOOP_17_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_17_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 703.273 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3' pipeline 'VITIS_LOOP_26_2_VITIS_LOOP_30_3' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'faddfsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_10s_10s_10_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3'.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_cos_coefficients_table_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_sin_coefficients_table_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.36 seconds; current allocated memory: 704.656 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_in_V_data_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_in_V_keep_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_in_V_strb_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_in_V_last_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_in_V_data_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_in_V_keep_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_in_V_strb_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_in_V_last_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_V_data_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_V_keep_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_V_strb_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_out_V_last_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_V_data_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_V_keep_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_V_strb_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_out_V_last_V' to 'axis' (register, both mode).
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 's_axilite & ap_ctrl_hs'.
INFO: [RTGEN 206-100] Bundling port 'return' to AXI-Lite port CTRL.
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [RTMG 210-278] Implementing memory 'dft_real_sample_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.24 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.58 seconds; current allocated memory: 706.406 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.57 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.27 seconds; current allocated memory: 709.617 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.61 seconds. CPU system time: 0.08 seconds. Elapsed time: 1.07 seconds; current allocated memory: 713.848 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:29; Allocated memory: 70.762 MB.
INFO: [HLS 200-112] Total CPU user time: 19.11 seconds. Total CPU system time: 4.26 seconds. Total elapsed time: 43.28 seconds; peak allocated memory: 713.984 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 45s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 22:46:04 2026

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
    |  5768216|  5768216|  57.682 ms|  57.682 ms|  5768217|  5768217|       no|
    +---------+---------+-----------+-----------+---------+---------+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------------+----------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+
        |                                                         |                                              |  Latency (cycles) |   Latency (absolute)  |      Interval     |                    Pipeline                    |
        |                         Instance                        |                    Module                    |   min   |   max   |    min    |    max    |   min   |   max   |                      Type                      |
        +---------------------------------------------------------+----------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_17_1_fu_86                   |dft_Pipeline_VITIS_LOOP_17_1                  |     1026|     1026|  10.260 us|  10.260 us|     1025|     1025|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |grp_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_fu_108  |dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3  |  5767185|  5767185|  57.672 ms|  57.672 ms|  5767179|  5767179|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------------+----------------------------------------------+---------+---------+-----------+-----------+---------+---------+------------------------------------------------+

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
|Expression       |        -|    -|       0|      6|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        4|    5|    1317|   1510|    -|
|Memory           |        4|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    219|    -|
|Register         |        -|    -|      90|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        8|    5|    1407|   1735|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        2|    2|       1|      3|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+
    |                         Instance                        |                    Module                    | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+
    |CTRL_s_axi_U                                             |CTRL_s_axi                                    |        0|   0|    36|    40|    0|
    |grp_dft_Pipeline_VITIS_LOOP_17_1_fu_86                   |dft_Pipeline_VITIS_LOOP_17_1                  |        0|   0|    25|    84|    0|
    |grp_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_fu_108  |dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3  |        4|   5|  1256|  1386|    0|
    +---------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+
    |Total                                                    |                                              |        4|   5|  1317|  1510|    0|
    +---------------------------------------------------------+----------------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+
    |     Memory    |           Module          | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+
    |real_sample_U  |real_sample_RAM_AUTO_1R1W  |        2|  0|   0|    0|  1024|   32|     1|        32768|
    |imag_sample_U  |real_sample_RAM_AUTO_1R1W  |        2|  0|   0|    0|  1024|   32|     1|        32768|
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total          |                           |        4|  0|   0|    0|  2048|   64|     2|        65536|
    +---------------+---------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +-------------------------------------------------------------------------+----------+----+---+----+------------+------------+
    |                              Variable Name                              | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +-------------------------------------------------------------------------+----------+----+---+----+------------+------------+
    |grp_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_fu_108_imag_out_TREADY  |       and|   0|  0|   2|           1|           1|
    |grp_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_fu_108_real_out_TREADY  |       and|   0|  0|   2|           1|           1|
    |ap_block_state6                                                          |        or|   0|  0|   2|           1|           1|
    +-------------------------------------------------------------------------+----------+----+---+----+------------+------------+
    |Total                                                                    |          |   0|  0|   6|           3|           3|
    +-------------------------------------------------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-----------------------------+----+-----------+-----+-----------+
    |             Name            | LUT| Input Size| Bits| Total Bits|
    +-----------------------------+----+-----------+-----+-----------+
    |ap_NS_fsm                    |  37|          7|    1|          7|
    |imag_in_TREADY_int_regslice  |   9|          2|    1|          2|
    |imag_out_TDATA_int_regslice  |   9|          2|   32|         64|
    |imag_out_TKEEP_int_regslice  |   9|          2|    4|          8|
    |imag_out_TLAST_int_regslice  |   9|          2|    1|          2|
    |imag_out_TSTRB_int_regslice  |   9|          2|    4|          8|
    |imag_sample_address0         |  14|          3|   10|         30|
    |imag_sample_ce0              |  14|          3|    1|          3|
    |imag_sample_ce1              |   9|          2|    1|          2|
    |imag_sample_we0              |   9|          2|    1|          2|
    |real_in_TREADY_int_regslice  |   9|          2|    1|          2|
    |real_out_TDATA_int_regslice  |   9|          2|   32|         64|
    |real_out_TKEEP_int_regslice  |   9|          2|    4|          8|
    |real_out_TLAST_int_regslice  |   9|          2|    1|          2|
    |real_out_TSTRB_int_regslice  |   9|          2|    4|          8|
    |real_sample_address0         |  14|          3|   10|         30|
    |real_sample_ce0              |  14|          3|    1|          3|
    |real_sample_ce1              |   9|          2|    1|          2|
    |real_sample_we0              |   9|          2|    1|          2|
    +-----------------------------+----+-----------+-----+-----------+
    |Total                        | 219|         47|  111|        249|
    +-----------------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------------+----+----+-----+-----------+
    |                                 Name                                 | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                             |   6|   0|    6|          0|
    |grp_dft_Pipeline_VITIS_LOOP_17_1_fu_86_ap_start_reg                   |   1|   0|    1|          0|
    |grp_dft_Pipeline_VITIS_LOOP_26_2_VITIS_LOOP_30_3_fu_108_ap_start_reg  |   1|   0|    1|          0|
    |imag_out_TDATA_reg                                                    |  32|   0|   32|          0|
    |imag_out_TKEEP_reg                                                    |   4|   0|    4|          0|
    |imag_out_TLAST_reg                                                    |   1|   0|    1|          0|
    |imag_out_TSTRB_reg                                                    |   4|   0|    4|          0|
    |real_out_TDATA_reg                                                    |  32|   0|   32|          0|
    |real_out_TKEEP_reg                                                    |   4|   0|    4|          0|
    |real_out_TLAST_reg                                                    |   1|   0|    1|          0|
    |real_out_TSTRB_reg                                                    |   4|   0|    4|          0|
    +----------------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                                 |  90|   0|   90|          0|
    +----------------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+-------------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |   Source Object   |    C Type    |
+--------------------+-----+-----+------------+-------------------+--------------+
|s_axi_CTRL_AWVALID  |   in|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_AWREADY  |  out|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_AWADDR   |   in|    4|       s_axi|               CTRL|   return void|
|s_axi_CTRL_WVALID   |   in|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_WREADY   |  out|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_WDATA    |   in|   32|       s_axi|               CTRL|   return void|
|s_axi_CTRL_WSTRB    |   in|    4|       s_axi|               CTRL|   return void|
|s_axi_CTRL_ARVALID  |   in|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_ARREADY  |  out|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_ARADDR   |   in|    4|       s_axi|               CTRL|   return void|
|s_axi_CTRL_RVALID   |  out|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_RREADY   |   in|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_RDATA    |  out|   32|       s_axi|               CTRL|   return void|
|s_axi_CTRL_RRESP    |  out|    2|       s_axi|               CTRL|   return void|
|s_axi_CTRL_BVALID   |  out|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_BREADY   |   in|    1|       s_axi|               CTRL|   return void|
|s_axi_CTRL_BRESP    |  out|    2|       s_axi|               CTRL|   return void|
|ap_clk              |   in|    1|  ap_ctrl_hs|                dft|  return value|
|ap_rst_n            |   in|    1|  ap_ctrl_hs|                dft|  return value|
|interrupt           |  out|    1|  ap_ctrl_hs|                dft|  return value|
|real_in_TDATA       |   in|   32|        axis|   real_in_V_data_V|       pointer|
|real_in_TVALID      |   in|    1|        axis|   real_in_V_last_V|       pointer|
|real_in_TREADY      |  out|    1|        axis|   real_in_V_last_V|       pointer|
|real_in_TLAST       |   in|    1|        axis|   real_in_V_last_V|       pointer|
|real_in_TKEEP       |   in|    4|        axis|   real_in_V_keep_V|       pointer|
|real_in_TSTRB       |   in|    4|        axis|   real_in_V_strb_V|       pointer|
|imag_in_TDATA       |   in|   32|        axis|   imag_in_V_data_V|       pointer|
|imag_in_TVALID      |   in|    1|        axis|   imag_in_V_last_V|       pointer|
|imag_in_TREADY      |  out|    1|        axis|   imag_in_V_last_V|       pointer|
|imag_in_TLAST       |   in|    1|        axis|   imag_in_V_last_V|       pointer|
|imag_in_TKEEP       |   in|    4|        axis|   imag_in_V_keep_V|       pointer|
|imag_in_TSTRB       |   in|    4|        axis|   imag_in_V_strb_V|       pointer|
|real_out_TDATA      |  out|   32|        axis|  real_out_V_data_V|       pointer|
|real_out_TVALID     |  out|    1|        axis|  real_out_V_last_V|       pointer|
|real_out_TREADY     |   in|    1|        axis|  real_out_V_last_V|       pointer|
|real_out_TLAST      |  out|    1|        axis|  real_out_V_last_V|       pointer|
|real_out_TKEEP      |  out|    4|        axis|  real_out_V_keep_V|       pointer|
|real_out_TSTRB      |  out|    4|        axis|  real_out_V_strb_V|       pointer|
|imag_out_TDATA      |  out|   32|        axis|  imag_out_V_data_V|       pointer|
|imag_out_TVALID     |  out|    1|        axis|  imag_out_V_last_V|       pointer|
|imag_out_TREADY     |   in|    1|        axis|  imag_out_V_last_V|       pointer|
|imag_out_TLAST      |  out|    1|        axis|  imag_out_V_last_V|       pointer|
|imag_out_TKEEP      |  out|    4|        axis|  imag_out_V_keep_V|       pointer|
|imag_out_TSTRB      |  out|    4|        axis|  imag_out_V_strb_V|       pointer|
+--------------------+-----+-----+------------+-------------------+--------------+

sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/impl/ip/component.xml" "HLS IP export" vitis-run --mode hls --tcl export_dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 22:46:09 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/export_dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp'.
INFO: [HLS 200-10] Opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls'.
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
INFO: [HLS 200-1505] Using flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1465] Applying ini 'syn.file=../dft.cpp' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(6)
INFO: [HLS 200-10] Adding design file 'dft.cpp' to the project
INFO: [HLS 200-1465] Applying ini 'tb.file=../out.gold.dat' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(8)
INFO: [HLS 200-10] Adding test bench file 'out.gold.dat' to the project
INFO: [HLS 200-1465] Applying ini 'tb.file=../dft_test.cpp' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(9)
INFO: [HLS 200-10] Adding test bench file 'dft_test.cpp' to the project
INFO: [HLS 200-1465] Applying ini 'syn.top=dft' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(7)
INFO: [HLS 200-1465] Applying ini 'flow_target=vivado' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(5)
INFO: [HLS 200-1505] Using flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1465] Applying ini 'part=xc7z020-clg400-1' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(1)
INFO: [HLS 200-1465] Applying ini 'clock=10ns' from /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls_config.cfg(4)
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: export_design -format ip_catalog -rtl verilog -vendor xilinx.com -library hls -version 1.0 -ipname dft 
INFO: [IMPL 213-8] Exporting RTL as a Vivado IP.

****** Vivado v2024.2 (64-bit)
  **** SW Build 5239630 on Fri Nov 08 22:34:34 MST 2024
  **** IP Build 5239520 on Sun Nov 10 16:12:51 MST 2024
  **** SharedData Build 5239561 on Fri Nov 08 14:39:27 MST 2024
  **** Start of session at: Sun Nov  1 22:46:33 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

source run_ippack.tcl -notrace
INFO: calling package_hls_ip ip_types=vitis sysgen json_file=/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/hls_data.json outdir=/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip srcdir=/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls sort_interfaces_ports=false
INFO: Copied 1 ipmisc file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/misc
INFO: Copied 18 verilog file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/hdl/verilog
INFO: Copied 12 vhdl file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/hdl/vhdl
INFO: Copied 10 swdriver file(s) to /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/drivers
Generating 2 subcores in /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/hdl/ip.tmp:
impl/misc/dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
impl/misc/dft_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl
create_project: Time (s): cpu = 00:00:10 ; elapsed = 00:00:12 . Memory (MB): peak = 1534.496 ; gain = 138.887 ; free physical = 14759 ; free virtual = 20502
INFO: Using COE_DIR=/home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/hdl/verilog
INFO: Generating dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: [IP_Flow 19-234] Refreshing IP repositories
INFO: [IP_Flow 19-1704] No user IP repositories specified
INFO: [IP_Flow 19-2313] Loaded Vivado IP repository '/software/common/Xilinx_Vitis/Vivado/2024.2/data/ip'.
create_ip: Time (s): cpu = 00:00:04 ; elapsed = 00:00:06 . Memory (MB): peak = 1601.230 ; gain = 66.734 ; free physical = 13291 ; free virtual = 19065
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip'...
INFO: Done generating dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip via file impl/misc/dft_faddfsub_32ns_32ns_32_5_full_dsp_1_ip.tcl
INFO: Generating dft_fmul_32ns_32ns_32_4_max_dsp_1_ip via file impl/misc/dft_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl
INFO: [IP_Flow 19-1686] Generating 'Synthesis' target for IP 'dft_fmul_32ns_32ns_32_4_max_dsp_1_ip'...
INFO: [IP_Flow 19-1686] Generating 'Simulation' target for IP 'dft_fmul_32ns_32ns_32_4_max_dsp_1_ip'...
INFO: Done generating dft_fmul_32ns_32ns_32_4_max_dsp_1_ip via file impl/misc/dft_fmul_32ns_32ns_32_4_max_dsp_1_ip.tcl
INFO: Import ports from HDL: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/hdl/vhdl/dft.vhd (dft)
INFO: Add axi4lite interface s_axi_CTRL
INFO: Add clock interface ap_clk
INFO: Add reset interface ap_rst_n
INFO: Add interrupt interface interrupt
INFO: [IP_Flow 19-234] Refreshing IP repositories
INFO: [IP_Flow 19-1704] No user IP repositories specified
INFO: [IP_Flow 19-2313] Loaded Vivado IP repository '/software/common/Xilinx_Vitis/Vivado/2024.2/data/ip'.
INFO: Add axi4stream interface real_in
INFO: Add axi4stream interface imag_in
INFO: Add axi4stream interface real_out
INFO: Add axi4stream interface imag_out
INFO: Calling post_process_vitis to specialize IP
INFO: Calling post_process_sysgen to specialize IP
Generating sysgen info xml from json file
INFO: Created IP /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/component.xml
INFO: Created IP archive /home/linux/ieng6/students/519/gam009/wes237c/project3/Q9/dft.comp/hls/impl/ip/xilinx_com_hls_dft_1_0.zip
INFO: [Common 17-206] Exiting Vivado at Sun Nov  1 22:47:22 2026...
INFO: [HLS 200-802] Generated output file dft.comp/hls/impl/export.zip
INFO: [HLS 200-2161] Finished Command export_design Elapsed time: 00:01:11; Allocated memory: 21.785 MB.
INFO: [HLS 200-112] Total CPU user time: 37.93 seconds. Total CPU system time: 5.02 seconds. Total elapsed time: 81.08 seconds; peak allocated memory: 721.281 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 23s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
open_component dft.comp
export_design -format ip_catalog -rtl verilog -vendor xilinx.com -library hls -version 1.0 -ipname dft
exit
rm dft_test.bin
