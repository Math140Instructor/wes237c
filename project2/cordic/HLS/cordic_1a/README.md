## N=20
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 13:05:08 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.2 seconds. CPU system time: 0.07 seconds. Elapsed time: 7.85 seconds; current allocated memory: 659.168 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.77 seconds. CPU system time: 1.08 seconds. Elapsed time: 2.16 seconds; current allocated memory: 660.539 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.22 seconds. CPU system time: 1.22 seconds. Elapsed time: 11.17 seconds; current allocated memory: 669.953 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.953 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.203 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.223 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.09 seconds; current allocated memory: 690.852 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.555 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.15 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.34 seconds; current allocated memory: 692.195 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 692.195 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 692.195 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 692.195 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.29 seconds; current allocated memory: 692.555 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.2 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.44 seconds; current allocated memory: 693.609 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.57 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.32 seconds; current allocated memory: 696.348 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.63 seconds. CPU system time: 0.12 seconds. Elapsed time: 1.3 seconds; current allocated memory: 698.645 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:25; Allocated memory: 55.477 MB.
INFO: [HLS 200-112] Total CPU user time: 17.98 seconds. Total CPU system time: 4.51 seconds. Total elapsed time: 44.61 seconds; peak allocated memory: 698.645 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 47s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt



================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 13:05:52 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        cordiccart2pol.comp
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
    |      274|      274|  2.740 us|  2.740 us|  275|  275|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                   |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                     |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |      264|      264|  2.640 us|  2.640 us|  260|  260|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    229|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   10|    1204|   1811|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|     158|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   10|    1362|   2205|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    4|       1|      4|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |                      Instance                     |                  Module                 | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   7|  1061|  1490|    0|
    |fcmp_32ns_32ns_1_2_no_dsp_1_U17                    |fcmp_32ns_32ns_1_2_no_dsp_1              |        0|   0|     0|     0|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U16                  |fmul_32ns_32ns_32_4_max_dsp_1            |        0|   3|   143|   321|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |Total                                              |                                         |        0|  10|  1204|  1811|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------+----------+----+---+----+------------+------------+
    |         Variable Name        | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------+----------+----+---+----+------------+------------+
    |and_ln15_fu_156_p2            |       and|   0|  0|   2|           1|           1|
    |and_ln18_fu_263_p2            |       and|   0|  0|   2|           1|           1|
    |icmp_ln15_1_fu_144_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln15_fu_138_p2           |      icmp|   0|  0|  15|           8|           2|
    |icmp_ln18_1_fu_251_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln18_fu_245_p2           |      icmp|   0|  0|  15|           8|           2|
    |or_ln15_fu_150_p2             |        or|   0|  0|   2|           1|           1|
    |or_ln18_fu_257_p2             |        or|   0|  0|   2|           1|           1|
    |current_theta_1_ph_fu_276_p3  |    select|   0|  0|  32|           1|          32|
    |current_theta_fu_268_p3       |    select|   0|  0|  31|           1|          31|
    |current_x_1_fu_191_p3         |    select|   0|  0|  32|           1|          32|
    |current_y_1_fu_284_p3         |    select|   0|  0|  32|           1|          32|
    |xor_ln16_fu_169_p2            |       xor|   0|  0|   2|           1|           2|
    |xor_ln17_fu_209_p2            |       xor|   0|  0|   2|           1|           2|
    +------------------------------+----------+----+---+----+------------+------------+
    |Total                         |          |   0|  0| 229|          72|         141|
    +------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-------------------+----+-----------+-----+-----------+
    |        Name       | LUT| Input Size| Bits| Total Bits|
    +-------------------+----+-----------+-----+-----------+
    |ap_NS_fsm          |  65|         12|    1|         12|
    |grp_fu_109_ce      |   9|          2|    1|          2|
    |grp_fu_109_p0      |  14|          3|   32|         96|
    |grp_fu_109_p1      |  14|          3|   32|         96|
    |grp_fu_114_ce      |   9|          2|    1|          2|
    |grp_fu_114_opcode  |  20|          4|    5|         20|
    |grp_fu_114_p0      |  20|          4|   32|        128|
    |grp_fu_114_p1      |  14|          3|   32|         96|
    +-------------------+----+-----------+-----+-----------+
    |Total              | 165|         33|  136|        452|
    +-------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------+----+----+-----+-----------+
    |                              Name                              | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |and_ln15_reg_332                                                |   1|   0|    1|          0|
    |ap_CS_fsm                                                       |  11|   0|   11|          0|
    |current_theta_1_ph_reg_355                                      |  15|   0|   32|         17|
    |current_x_1_reg_338                                             |  32|   0|   32|          0|
    |current_y_1_reg_360                                             |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96_ap_start_reg  |   1|   0|    1|          0|
    |tmp_1_reg_327                                                   |   1|   0|    1|          0|
    |tmp_3_reg_350                                                   |   1|   0|    1|          0|
    |x_read_reg_308                                                  |  32|   0|   32|          0|
    |y_read_reg_343                                                  |  32|   0|   32|          0|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                           | 158|   0|  175|         17|
    +----------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------+-----+-----+------------+----------------+--------------+
|   RTL Ports  | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------+-----+-----+------------+----------------+--------------+
|ap_clk        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_start      |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_done       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_idle       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_ready      |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|x             |   in|   32|     ap_none|               x|        scalar|
|y             |   in|   32|     ap_none|               y|        scalar|
|r             |  out|   32|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   32|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+


## N=18
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 13:13:47 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.75 seconds; current allocated memory: 659.168 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.53 seconds. CPU system time: 0.87 seconds. Elapsed time: 1.53 seconds; current allocated memory: 660.539 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.99 seconds. CPU system time: 1 seconds. Elapsed time: 9.64 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.246 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.102 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.551 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.13 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.29 seconds; current allocated memory: 692.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 692.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.2 seconds; current allocated memory: 692.551 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.25 seconds; current allocated memory: 693.609 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.79 seconds; current allocated memory: 696.352 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.47 seconds. CPU system time: 0.11 seconds. Elapsed time: 0.8 seconds; current allocated memory: 698.648 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 55.480 MB.
INFO: [HLS 200-112] Total CPU user time: 13.2 seconds. Total CPU system time: 3.71 seconds. Total elapsed time: 36.95 seconds; peak allocated memory: 698.648 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 39s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 13:14:24 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        cordiccart2pol.comp
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
    |      248|      248|  2.480 us|  2.480 us|  249|  249|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                   |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                     |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |      238|      238|  2.380 us|  2.380 us|  234|  234|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    229|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   10|    1204|   1811|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|     158|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   10|    1362|   2205|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    4|       1|      4|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |                      Instance                     |                  Module                 | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   7|  1061|  1490|    0|
    |fcmp_32ns_32ns_1_2_no_dsp_1_U17                    |fcmp_32ns_32ns_1_2_no_dsp_1              |        0|   0|     0|     0|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U16                  |fmul_32ns_32ns_32_4_max_dsp_1            |        0|   3|   143|   321|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |Total                                              |                                         |        0|  10|  1204|  1811|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------+----------+----+---+----+------------+------------+
    |         Variable Name        | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------+----------+----+---+----+------------+------------+
    |and_ln15_fu_156_p2            |       and|   0|  0|   2|           1|           1|
    |and_ln18_fu_263_p2            |       and|   0|  0|   2|           1|           1|
    |icmp_ln15_1_fu_144_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln15_fu_138_p2           |      icmp|   0|  0|  15|           8|           2|
    |icmp_ln18_1_fu_251_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln18_fu_245_p2           |      icmp|   0|  0|  15|           8|           2|
    |or_ln15_fu_150_p2             |        or|   0|  0|   2|           1|           1|
    |or_ln18_fu_257_p2             |        or|   0|  0|   2|           1|           1|
    |current_theta_1_ph_fu_276_p3  |    select|   0|  0|  32|           1|          32|
    |current_theta_fu_268_p3       |    select|   0|  0|  31|           1|          31|
    |current_x_1_fu_191_p3         |    select|   0|  0|  32|           1|          32|
    |current_y_1_fu_284_p3         |    select|   0|  0|  32|           1|          32|
    |xor_ln16_fu_169_p2            |       xor|   0|  0|   2|           1|           2|
    |xor_ln17_fu_209_p2            |       xor|   0|  0|   2|           1|           2|
    +------------------------------+----------+----+---+----+------------+------------+
    |Total                         |          |   0|  0| 229|          72|         141|
    +------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-------------------+----+-----------+-----+-----------+
    |        Name       | LUT| Input Size| Bits| Total Bits|
    +-------------------+----+-----------+-----+-----------+
    |ap_NS_fsm          |  65|         12|    1|         12|
    |grp_fu_109_ce      |   9|          2|    1|          2|
    |grp_fu_109_p0      |  14|          3|   32|         96|
    |grp_fu_109_p1      |  14|          3|   32|         96|
    |grp_fu_114_ce      |   9|          2|    1|          2|
    |grp_fu_114_opcode  |  20|          4|    5|         20|
    |grp_fu_114_p0      |  20|          4|   32|        128|
    |grp_fu_114_p1      |  14|          3|   32|         96|
    +-------------------+----+-----------+-----+-----------+
    |Total              | 165|         33|  136|        452|
    +-------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------+----+----+-----+-----------+
    |                              Name                              | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |and_ln15_reg_332                                                |   1|   0|    1|          0|
    |ap_CS_fsm                                                       |  11|   0|   11|          0|
    |current_theta_1_ph_reg_355                                      |  15|   0|   32|         17|
    |current_x_1_reg_338                                             |  32|   0|   32|          0|
    |current_y_1_reg_360                                             |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96_ap_start_reg  |   1|   0|    1|          0|
    |tmp_1_reg_327                                                   |   1|   0|    1|          0|
    |tmp_3_reg_350                                                   |   1|   0|    1|          0|
    |x_read_reg_308                                                  |  32|   0|   32|          0|
    |y_read_reg_343                                                  |  32|   0|   32|          0|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                           | 158|   0|  175|         17|
    +----------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------+-----+-----+------------+----------------+--------------+
|   RTL Ports  | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------+-----+-----+------------+----------------+--------------+
|ap_clk        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_start      |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_done       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_idle       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_ready      |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|x             |   in|   32|     ap_none|               x|        scalar|
|y             |   in|   32|     ap_none|               y|        scalar|
|r             |  out|   32|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   32|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=16
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 13:22:34 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.73 seconds; current allocated memory: 659.168 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.56 seconds. CPU system time: 0.91 seconds. Elapsed time: 1.59 seconds; current allocated memory: 660.539 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.11 seconds. CPU system time: 1.04 seconds. Elapsed time: 9.77 seconds; current allocated memory: 670.188 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.188 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.238 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.238 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.102 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 691.555 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.25 seconds; current allocated memory: 692.195 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.195 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.195 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 692.195 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 692.555 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.29 seconds; current allocated memory: 693.605 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.83 seconds; current allocated memory: 696.344 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.49 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.79 seconds; current allocated memory: 698.641 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 55.473 MB.
INFO: [HLS 200-112] Total CPU user time: 13.52 seconds. Total CPU system time: 3.74 seconds. Total elapsed time: 36.11 seconds; peak allocated memory: 698.641 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 38s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 13:23:10 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        cordiccart2pol.comp
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
    |      222|      222|  2.220 us|  2.220 us|  223|  223|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                   |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                     |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |      212|      212|  2.120 us|  2.120 us|  208|  208|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    229|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   10|    1203|   1811|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|     158|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   10|    1361|   2205|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    4|       1|      4|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |                      Instance                     |                  Module                 | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   7|  1060|  1490|    0|
    |fcmp_32ns_32ns_1_2_no_dsp_1_U17                    |fcmp_32ns_32ns_1_2_no_dsp_1              |        0|   0|     0|     0|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U16                  |fmul_32ns_32ns_32_4_max_dsp_1            |        0|   3|   143|   321|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |Total                                              |                                         |        0|  10|  1203|  1811|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------+----------+----+---+----+------------+------------+
    |         Variable Name        | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------+----------+----+---+----+------------+------------+
    |and_ln15_fu_156_p2            |       and|   0|  0|   2|           1|           1|
    |and_ln18_fu_263_p2            |       and|   0|  0|   2|           1|           1|
    |icmp_ln15_1_fu_144_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln15_fu_138_p2           |      icmp|   0|  0|  15|           8|           2|
    |icmp_ln18_1_fu_251_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln18_fu_245_p2           |      icmp|   0|  0|  15|           8|           2|
    |or_ln15_fu_150_p2             |        or|   0|  0|   2|           1|           1|
    |or_ln18_fu_257_p2             |        or|   0|  0|   2|           1|           1|
    |current_theta_1_ph_fu_276_p3  |    select|   0|  0|  32|           1|          32|
    |current_theta_fu_268_p3       |    select|   0|  0|  31|           1|          31|
    |current_x_1_fu_191_p3         |    select|   0|  0|  32|           1|          32|
    |current_y_1_fu_284_p3         |    select|   0|  0|  32|           1|          32|
    |xor_ln16_fu_169_p2            |       xor|   0|  0|   2|           1|           2|
    |xor_ln17_fu_209_p2            |       xor|   0|  0|   2|           1|           2|
    +------------------------------+----------+----+---+----+------------+------------+
    |Total                         |          |   0|  0| 229|          72|         141|
    +------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-------------------+----+-----------+-----+-----------+
    |        Name       | LUT| Input Size| Bits| Total Bits|
    +-------------------+----+-----------+-----+-----------+
    |ap_NS_fsm          |  65|         12|    1|         12|
    |grp_fu_109_ce      |   9|          2|    1|          2|
    |grp_fu_109_p0      |  14|          3|   32|         96|
    |grp_fu_109_p1      |  14|          3|   32|         96|
    |grp_fu_114_ce      |   9|          2|    1|          2|
    |grp_fu_114_opcode  |  20|          4|    5|         20|
    |grp_fu_114_p0      |  20|          4|   32|        128|
    |grp_fu_114_p1      |  14|          3|   32|         96|
    +-------------------+----+-----------+-----+-----------+
    |Total              | 165|         33|  136|        452|
    +-------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------+----+----+-----+-----------+
    |                              Name                              | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |and_ln15_reg_332                                                |   1|   0|    1|          0|
    |ap_CS_fsm                                                       |  11|   0|   11|          0|
    |current_theta_1_ph_reg_355                                      |  15|   0|   32|         17|
    |current_x_1_reg_338                                             |  32|   0|   32|          0|
    |current_y_1_reg_360                                             |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96_ap_start_reg  |   1|   0|    1|          0|
    |tmp_1_reg_327                                                   |   1|   0|    1|          0|
    |tmp_3_reg_350                                                   |   1|   0|    1|          0|
    |x_read_reg_308                                                  |  32|   0|   32|          0|
    |y_read_reg_343                                                  |  32|   0|   32|          0|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                           | 158|   0|  175|         17|
    +----------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------+-----+-----+------------+----------------+--------------+
|   RTL Ports  | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------+-----+-----+------------+----------------+--------------+
|ap_clk        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_start      |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_done       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_idle       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_ready      |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|x             |   in|   32|     ap_none|               x|        scalar|
|y             |   in|   32|     ap_none|               y|        scalar|
|r             |  out|   32|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   32|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=14
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 13:24:31 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.74 seconds; current allocated memory: 659.168 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.55 seconds. CPU system time: 0.91 seconds. Elapsed time: 1.59 seconds; current allocated memory: 660.539 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.16 seconds. CPU system time: 1.07 seconds. Elapsed time: 9.78 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.246 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.09 seconds; current allocated memory: 690.852 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.551 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.23 seconds; current allocated memory: 692.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 692.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 692.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 692.551 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.26 seconds; current allocated memory: 693.609 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.81 seconds; current allocated memory: 696.344 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.45 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.75 seconds; current allocated memory: 698.641 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 55.473 MB.
INFO: [HLS 200-112] Total CPU user time: 13.54 seconds. Total CPU system time: 3.76 seconds. Total elapsed time: 34.69 seconds; peak allocated memory: 698.641 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 37s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 13:25:06 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        cordiccart2pol.comp
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
    |      196|      196|  1.960 us|  1.960 us|  197|  197|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                   |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                     |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |      186|      186|  1.860 us|  1.860 us|  182|  182|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    229|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   10|    1203|   1811|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|     158|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   10|    1361|   2205|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    4|       1|      4|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |                      Instance                     |                  Module                 | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   7|  1060|  1490|    0|
    |fcmp_32ns_32ns_1_2_no_dsp_1_U17                    |fcmp_32ns_32ns_1_2_no_dsp_1              |        0|   0|     0|     0|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U16                  |fmul_32ns_32ns_32_4_max_dsp_1            |        0|   3|   143|   321|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |Total                                              |                                         |        0|  10|  1203|  1811|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------+----------+----+---+----+------------+------------+
    |         Variable Name        | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------+----------+----+---+----+------------+------------+
    |and_ln15_fu_156_p2            |       and|   0|  0|   2|           1|           1|
    |and_ln18_fu_263_p2            |       and|   0|  0|   2|           1|           1|
    |icmp_ln15_1_fu_144_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln15_fu_138_p2           |      icmp|   0|  0|  15|           8|           2|
    |icmp_ln18_1_fu_251_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln18_fu_245_p2           |      icmp|   0|  0|  15|           8|           2|
    |or_ln15_fu_150_p2             |        or|   0|  0|   2|           1|           1|
    |or_ln18_fu_257_p2             |        or|   0|  0|   2|           1|           1|
    |current_theta_1_ph_fu_276_p3  |    select|   0|  0|  32|           1|          32|
    |current_theta_fu_268_p3       |    select|   0|  0|  31|           1|          31|
    |current_x_1_fu_191_p3         |    select|   0|  0|  32|           1|          32|
    |current_y_1_fu_284_p3         |    select|   0|  0|  32|           1|          32|
    |xor_ln16_fu_169_p2            |       xor|   0|  0|   2|           1|           2|
    |xor_ln17_fu_209_p2            |       xor|   0|  0|   2|           1|           2|
    +------------------------------+----------+----+---+----+------------+------------+
    |Total                         |          |   0|  0| 229|          72|         141|
    +------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-------------------+----+-----------+-----+-----------+
    |        Name       | LUT| Input Size| Bits| Total Bits|
    +-------------------+----+-----------+-----+-----------+
    |ap_NS_fsm          |  65|         12|    1|         12|
    |grp_fu_109_ce      |   9|          2|    1|          2|
    |grp_fu_109_p0      |  14|          3|   32|         96|
    |grp_fu_109_p1      |  14|          3|   32|         96|
    |grp_fu_114_ce      |   9|          2|    1|          2|
    |grp_fu_114_opcode  |  20|          4|    5|         20|
    |grp_fu_114_p0      |  20|          4|   32|        128|
    |grp_fu_114_p1      |  14|          3|   32|         96|
    +-------------------+----+-----------+-----+-----------+
    |Total              | 165|         33|  136|        452|
    +-------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------+----+----+-----+-----------+
    |                              Name                              | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |and_ln15_reg_332                                                |   1|   0|    1|          0|
    |ap_CS_fsm                                                       |  11|   0|   11|          0|
    |current_theta_1_ph_reg_355                                      |  15|   0|   32|         17|
    |current_x_1_reg_338                                             |  32|   0|   32|          0|
    |current_y_1_reg_360                                             |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96_ap_start_reg  |   1|   0|    1|          0|
    |tmp_1_reg_327                                                   |   1|   0|    1|          0|
    |tmp_3_reg_350                                                   |   1|   0|    1|          0|
    |x_read_reg_308                                                  |  32|   0|   32|          0|
    |y_read_reg_343                                                  |  32|   0|   32|          0|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                           | 158|   0|  175|         17|
    +----------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------+-----+-----+------------+----------------+--------------+
|   RTL Ports  | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------+-----+-----+------------+----------------+--------------+
|ap_clk        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_start      |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_done       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_idle       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_ready      |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|x             |   in|   32|     ap_none|               x|        scalar|
|y             |   in|   32|     ap_none|               y|        scalar|
|r             |  out|   32|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   32|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=12
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 13:28:40 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.74 seconds; current allocated memory: 659.168 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.57 seconds. CPU system time: 0.86 seconds. Elapsed time: 1.58 seconds; current allocated memory: 660.539 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.09 seconds. CPU system time: 1.05 seconds. Elapsed time: 9.8 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.246 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.246 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.03 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.06 seconds; current allocated memory: 691.102 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 691.555 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.26 seconds; current allocated memory: 692.520 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.520 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.520 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.520 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 692.555 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.27 seconds; current allocated memory: 693.613 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.47 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.95 seconds; current allocated memory: 696.348 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.42 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.67 seconds; current allocated memory: 698.648 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:22; Allocated memory: 55.480 MB.
INFO: [HLS 200-112] Total CPU user time: 13.45 seconds. Total CPU system time: 3.71 seconds. Total elapsed time: 36.73 seconds; peak allocated memory: 698.648 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 39s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 13:29:17 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        cordiccart2pol.comp
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
    |      170|      170|  1.700 us|  1.700 us|  171|  171|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                   |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                     |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |      160|      160|  1.600 us|  1.600 us|  156|  156|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    229|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   10|    1203|   1811|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|     158|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   10|    1361|   2205|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    4|       1|      4|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |                      Instance                     |                  Module                 | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   7|  1060|  1490|    0|
    |fcmp_32ns_32ns_1_2_no_dsp_1_U17                    |fcmp_32ns_32ns_1_2_no_dsp_1              |        0|   0|     0|     0|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U16                  |fmul_32ns_32ns_32_4_max_dsp_1            |        0|   3|   143|   321|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |Total                                              |                                         |        0|  10|  1203|  1811|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------+----------+----+---+----+------------+------------+
    |         Variable Name        | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------+----------+----+---+----+------------+------------+
    |and_ln15_fu_156_p2            |       and|   0|  0|   2|           1|           1|
    |and_ln18_fu_263_p2            |       and|   0|  0|   2|           1|           1|
    |icmp_ln15_1_fu_144_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln15_fu_138_p2           |      icmp|   0|  0|  15|           8|           2|
    |icmp_ln18_1_fu_251_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln18_fu_245_p2           |      icmp|   0|  0|  15|           8|           2|
    |or_ln15_fu_150_p2             |        or|   0|  0|   2|           1|           1|
    |or_ln18_fu_257_p2             |        or|   0|  0|   2|           1|           1|
    |current_theta_1_ph_fu_276_p3  |    select|   0|  0|  32|           1|          32|
    |current_theta_fu_268_p3       |    select|   0|  0|  31|           1|          31|
    |current_x_1_fu_191_p3         |    select|   0|  0|  32|           1|          32|
    |current_y_1_fu_284_p3         |    select|   0|  0|  32|           1|          32|
    |xor_ln16_fu_169_p2            |       xor|   0|  0|   2|           1|           2|
    |xor_ln17_fu_209_p2            |       xor|   0|  0|   2|           1|           2|
    +------------------------------+----------+----+---+----+------------+------------+
    |Total                         |          |   0|  0| 229|          72|         141|
    +------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-------------------+----+-----------+-----+-----------+
    |        Name       | LUT| Input Size| Bits| Total Bits|
    +-------------------+----+-----------+-----+-----------+
    |ap_NS_fsm          |  65|         12|    1|         12|
    |grp_fu_109_ce      |   9|          2|    1|          2|
    |grp_fu_109_p0      |  14|          3|   32|         96|
    |grp_fu_109_p1      |  14|          3|   32|         96|
    |grp_fu_114_ce      |   9|          2|    1|          2|
    |grp_fu_114_opcode  |  20|          4|    5|         20|
    |grp_fu_114_p0      |  20|          4|   32|        128|
    |grp_fu_114_p1      |  14|          3|   32|         96|
    +-------------------+----+-----------+-----+-----------+
    |Total              | 165|         33|  136|        452|
    +-------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------+----+----+-----+-----------+
    |                              Name                              | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |and_ln15_reg_332                                                |   1|   0|    1|          0|
    |ap_CS_fsm                                                       |  11|   0|   11|          0|
    |current_theta_1_ph_reg_355                                      |  15|   0|   32|         17|
    |current_x_1_reg_338                                             |  32|   0|   32|          0|
    |current_y_1_reg_360                                             |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96_ap_start_reg  |   1|   0|    1|          0|
    |tmp_1_reg_327                                                   |   1|   0|    1|          0|
    |tmp_3_reg_350                                                   |   1|   0|    1|          0|
    |x_read_reg_308                                                  |  32|   0|   32|          0|
    |y_read_reg_343                                                  |  32|   0|   32|          0|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                           | 158|   0|  175|         17|
    +----------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------+-----+-----+------------+----------------+--------------+
|   RTL Ports  | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------+-----+-----+------------+----------------+--------------+
|ap_clk        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_start      |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_done       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_idle       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_ready      |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|x             |   in|   32|     ap_none|               x|        scalar|
|y             |   in|   32|     ap_none|               y|        scalar|
|r             |  out|   32|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   32|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=10
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1269, golden theta=0.1545, golden r=0.8245, your theta=0.1563, your r=0.8245
Test: x=0.6323, y=-0.2785, golden theta=-0.4149, golden r=0.6909, your theta=-0.4131, your r=0.6909
Test: x=-0.5469, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0893, your r=1.1027
Test: x=-0.4854, y=0.7003, golden theta=2.1769, golden r=0.8521, your theta=2.1780, your r=0.8521
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000001239063636 0.001373887993395
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 13:41:17 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls'.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files cordiccart2pol.cpp 
INFO: [HLS 200-10] Adding design file 'cordiccart2pol.cpp' to the project
INFO: [HLS 200-1510] Running: add_files -tb cordiccart2pol_test.cpp 
INFO: [HLS 200-10] Adding test bench file 'cordiccart2pol_test.cpp' to the project
INFO: [HLS 200-1510] Running: set_top cordiccart2pol 
Running: set_top cordiccart2pol
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.04 seconds. Elapsed time: 7.75 seconds; current allocated memory: 659.168 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.54 seconds. CPU system time: 0.9 seconds. Elapsed time: 1.56 seconds; current allocated memory: 660.539 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 49 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 39 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 40 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 38 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 48 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_1a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.13 seconds. CPU system time: 1.05 seconds. Elapsed time: 9.76 seconds; current allocated memory: 670.281 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.281 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.301 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.301 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 3 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.102 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.551 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 3, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 4, distance = 1, offset = 1) between 'store' operation 0 bit ('current_theta_15_write_ln36', cordiccart2pol.cpp:36) of variable 'current_theta', cordiccart2pol.cpp:36 on local variable 'current_theta_15' and 'fadd' operation 32 bit ('current_theta', cordiccart2pol.cpp:36).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 11, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 12, distance = 1, offset = 0) between 'store' operation 0 bit ('current_x_18_write_ln32', cordiccart2pol.cpp:32) of variable 'next_x', cordiccart2pol.cpp:32 on local variable 'current_x_18' and 'load' operation 32 bit ('current_x_18_load', cordiccart2pol.cpp:32) on local variable 'current_x_18'.
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 13, Depth = 16, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.25 seconds; current allocated memory: 692.516 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.516 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.516 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.516 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.21 seconds; current allocated memory: 692.551 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.29 seconds; current allocated memory: 693.660 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.47 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.95 seconds; current allocated memory: 696.344 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.44 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.67 seconds; current allocated memory: 698.641 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 55.473 MB.
INFO: [HLS 200-112] Total CPU user time: 13.46 seconds. Total CPU system time: 3.68 seconds. Total elapsed time: 37.73 seconds; peak allocated memory: 698.641 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 40s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 13:41:55 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        cordiccart2pol.comp
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
    |      144|      144|  1.440 us|  1.440 us|  145|  145|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                   |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                     |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |      134|      134|  1.340 us|  1.340 us|  130|  130|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +---------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    229|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   10|    1203|   1811|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    165|    -|
|Register         |        -|    -|     158|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   10|    1361|   2205|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    4|       1|      4|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |                      Instance                     |                  Module                 | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   7|  1060|  1490|    0|
    |fcmp_32ns_32ns_1_2_no_dsp_1_U17                    |fcmp_32ns_32ns_1_2_no_dsp_1              |        0|   0|     0|     0|    0|
    |fmul_32ns_32ns_32_4_max_dsp_1_U16                  |fmul_32ns_32ns_32_4_max_dsp_1            |        0|   3|   143|   321|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+
    |Total                                              |                                         |        0|  10|  1203|  1811|    0|
    +---------------------------------------------------+-----------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +------------------------------+----------+----+---+----+------------+------------+
    |         Variable Name        | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +------------------------------+----------+----+---+----+------------+------------+
    |and_ln15_fu_156_p2            |       and|   0|  0|   2|           1|           1|
    |and_ln18_fu_263_p2            |       and|   0|  0|   2|           1|           1|
    |icmp_ln15_1_fu_144_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln15_fu_138_p2           |      icmp|   0|  0|  15|           8|           2|
    |icmp_ln18_1_fu_251_p2         |      icmp|   0|  0|  30|          23|           1|
    |icmp_ln18_fu_245_p2           |      icmp|   0|  0|  15|           8|           2|
    |or_ln15_fu_150_p2             |        or|   0|  0|   2|           1|           1|
    |or_ln18_fu_257_p2             |        or|   0|  0|   2|           1|           1|
    |current_theta_1_ph_fu_276_p3  |    select|   0|  0|  32|           1|          32|
    |current_theta_fu_268_p3       |    select|   0|  0|  31|           1|          31|
    |current_x_1_fu_191_p3         |    select|   0|  0|  32|           1|          32|
    |current_y_1_fu_284_p3         |    select|   0|  0|  32|           1|          32|
    |xor_ln16_fu_169_p2            |       xor|   0|  0|   2|           1|           2|
    |xor_ln17_fu_209_p2            |       xor|   0|  0|   2|           1|           2|
    +------------------------------+----------+----+---+----+------------+------------+
    |Total                         |          |   0|  0| 229|          72|         141|
    +------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-------------------+----+-----------+-----+-----------+
    |        Name       | LUT| Input Size| Bits| Total Bits|
    +-------------------+----+-----------+-----+-----------+
    |ap_NS_fsm          |  65|         12|    1|         12|
    |grp_fu_109_ce      |   9|          2|    1|          2|
    |grp_fu_109_p0      |  14|          3|   32|         96|
    |grp_fu_109_p1      |  14|          3|   32|         96|
    |grp_fu_114_ce      |   9|          2|    1|          2|
    |grp_fu_114_opcode  |  20|          4|    5|         20|
    |grp_fu_114_p0      |  20|          4|   32|        128|
    |grp_fu_114_p1      |  14|          3|   32|         96|
    +-------------------+----+-----------+-----+-----------+
    |Total              | 165|         33|  136|        452|
    +-------------------+----+-----------+-----+-----------+

    * Register: 
    +----------------------------------------------------------------+----+----+-----+-----------+
    |                              Name                              | FF | LUT| Bits| Const Bits|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |and_ln15_reg_332                                                |   1|   0|    1|          0|
    |ap_CS_fsm                                                       |  11|   0|   11|          0|
    |current_theta_1_ph_reg_355                                      |  15|   0|   32|         17|
    |current_x_1_reg_338                                             |  32|   0|   32|          0|
    |current_y_1_reg_360                                             |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_96_ap_start_reg  |   1|   0|    1|          0|
    |tmp_1_reg_327                                                   |   1|   0|    1|          0|
    |tmp_3_reg_350                                                   |   1|   0|    1|          0|
    |x_read_reg_308                                                  |  32|   0|   32|          0|
    |y_read_reg_343                                                  |  32|   0|   32|          0|
    +----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                           | 158|   0|  175|         17|
    +----------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------+-----+-----+------------+----------------+--------------+
|   RTL Ports  | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------+-----+-----+------------+----------------+--------------+
|ap_clk        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst        |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_start      |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_done       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_idle       |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_ready      |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|x             |   in|   32|     ap_none|               x|        scalar|
|y             |   in|   32|     ap_none|               y|        scalar|
|r             |  out|   32|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   32|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

---Testing results----------------------------------
Test: x=0.8147, y=0.1269, golden theta=0.1545, golden r=0.8245, your theta=0.1563, your r=0.8245
Test: x=0.6323, y=-0.2785, golden theta=-0.4149, golden r=0.6909, your theta=-0.4131, your r=0.6909
Test: x=-0.5469, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0893, your r=1.1027
Test: x=-0.4854, y=0.7003, golden theta=2.1769, golden r=0.8521, your theta=2.1780, your r=0.8521
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000001239063636 0.001373887993395
----------------------------------------------
