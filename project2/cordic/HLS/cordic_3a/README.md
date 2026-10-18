## N=8
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8125, y=0.1250, golden theta=0.1545, golden r=0.8245, your theta=0.1875, your r=1.0625
Test: x=0.6250, y=-0.2812, golden theta=-0.4149, golden r=0.6909, your theta=-0.4375, your r=0.6562
Test: x=-0.5625, y=-0.9688, golden theta=-2.0898, golden r=1.1027, your theta=-2.0938, your r=1.3438
Test: x=-0.5000, y=0.6875, golden theta=2.1769, golden r=0.8521, your theta=2.1875, your r=1.0938
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.208779141306877 0.020780317485332
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 22:14:35 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.72 seconds; current allocated memory: 659.211 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 5.64 seconds. CPU system time: 1.07 seconds. Elapsed time: 6.91 seconds; current allocated memory: 660.582 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,492 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 414 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 184 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 101 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 86 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 86 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.22 seconds. CPU system time: 0.96 seconds. Elapsed time: 9.7 seconds; current allocated memory: 669.980 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.980 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.289 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.320 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:10:10) to (cordiccart2pol.cpp:22:20) in function 'cordiccart2pol'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.789 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.059 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_x_15_write_ln27', cordiccart2pol.cpp:27) of variable 'current_x', cordiccart2pol.cpp:27 on local variable 'current_x_15' and 'select' operation 8 bit ('current_y', cordiccart2pol.cpp:27).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 2, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.21 seconds; current allocated memory: 693.078 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.078 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 693.078 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.078 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 693.078 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'mul_8s_6ns_13_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_8_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.13 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.24 seconds; current allocated memory: 693.293 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.41 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.66 seconds; current allocated memory: 696.211 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.42 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.64 seconds; current allocated memory: 698.699 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.48 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:26; Allocated memory: 55.488 MB.
INFO: [HLS 200-112] Total CPU user time: 18.87 seconds. Total CPU system time: 3.73 seconds. Total elapsed time: 40.17 seconds; peak allocated memory: 698.699 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 42s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 22:15:16 2026

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
    |ap_clk  |  10.00 ns|  7.274 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |       46|       46|  0.460 us|  0.460 us|   47|   47|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_132  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |       41|       41|  0.410 us|  0.410 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    471|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|    0|      75|    317|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     37|    -|
|Register         |        -|    -|      94|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    0|     169|    825|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    0|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP| FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_132  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   0|  75|  262|    0|
    |mul_8s_6ns_13_1_1_U8                                |mul_8s_6ns_13_1_1                        |        0|   0|   0|   41|    0|
    |sparsemux_9_3_8_1_1_U7                              |sparsemux_9_3_8_1_1                      |        0|   0|   0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+----+-----+-----+
    |Total                                               |                                         |        0|   0|  75|  317|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +-------------------------+----------+----+---+-----+------------+------------+
    |      Variable Name      | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +-------------------------+----------+----+---+-----+------------+------------+
    |add_ln19_fu_195_p2       |         +|   0|  0|   14|           6|           4|
    |current_x_fu_305_p2      |         -|   0|  0|   15|           1|           8|
    |current_y_fu_311_p2      |         -|   0|  0|   15|           1|           8|
    |sub_ln19_1_fu_201_p2     |         -|   0|  0|   14|           3|           6|
    |sub_ln19_fu_179_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_332_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_337_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_322_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_267_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_215_p2    |      icmp|   0|  0|   14|           6|           3|
    |icmp_ln19_2_fu_252_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_231_p2    |      icmp|   0|  0|   15|           8|           1|
    |icmp_ln19_fu_189_p2      |      icmp|   0|  0|   14|           6|           3|
    |current_x_3_fu_381_p3    |    select|   0|  0|    8|           1|           8|
    |current_y_3_fu_374_p3    |    select|   0|  0|    8|           1|           8|
    |select_ln19_1_fu_207_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_277_p3  |    select|   0|  0|    8|           1|           8|
    |select_ln19_3_fu_290_p3  |    select|   0|  0|    8|           1|           8|
    |select_ln19_4_fu_257_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_241_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_151_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_285_p2       |       shl|   0|  0|   17|           8|           8|
    |xor_ln16_fu_316_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_327_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  471|         128|         276|
    +-------------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  37|          7|    1|          7|
    +-----------+----+-----------+-----+-----------+
    |Total      |  37|          7|    1|          7|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------------------------------+---+----+-----+-----------+
    |                               Name                              | FF| LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                                        |  6|   0|    6|          0|
    |current_x_2_loc_fu_98                                            |  8|   0|    8|          0|
    |current_x_3_reg_493                                              |  8|   0|    8|          0|
    |current_y_3_reg_488                                              |  8|   0|    8|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_132_ap_start_reg  |  1|   0|    1|          0|
    |icmp_ln19_1_reg_452                                              |  1|   0|    1|          0|
    |icmp_ln19_3_reg_458                                              |  1|   0|    1|          0|
    |icmp_ln19_reg_441                                                |  1|   0|    1|          0|
    |select_ln19_1_reg_446                                            |  9|   0|   11|          2|
    |select_ln19_1cast_reg_463                                        |  6|   0|    8|          2|
    |select_ln19_2_reg_473                                            |  8|   0|    8|          0|
    |select_ln19_3_reg_478                                            |  8|   0|    8|          0|
    |storemerge5_ph_reg_483                                           |  8|   0|    8|          0|
    |storemerge_loc_fu_102                                            |  8|   0|    8|          0|
    |tmp_3_reg_435                                                    |  1|   0|    1|          0|
    |trunc_ln19_1_reg_468                                             |  4|   0|    8|          4|
    |y_read_reg_417                                                   |  8|   0|    8|          0|
    +-----------------------------------------------------------------+---+----+-----+-----------+
    |Total                                                            | 94|   0|  102|          8|
    +-----------------------------------------------------------------+---+----+-----+-----------+



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
|x             |   in|    8|     ap_none|               x|        scalar|
|y             |   in|    8|     ap_none|               y|        scalar|
|r             |  out|    8|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|    8|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=12
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8145, y=0.1250, golden theta=0.1545, golden r=0.8245, your theta=0.1523, your r=0.8242
Test: x=0.6309, y=-0.2793, golden theta=-0.4149, golden r=0.6909, your theta=-0.4180, your r=0.6992
Test: x=-0.5488, y=-0.9590, golden theta=-2.0898, golden r=1.1027, your theta=-2.0879, your r=1.1152
Test: x=-0.4863, y=0.6992, golden theta=2.1769, golden r=0.8521, your theta=2.1797, your r=0.8496
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.007627035025507 0.002523616189137
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 22:17:13 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.75 seconds; current allocated memory: 659.199 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 6.28 seconds. CPU system time: 1.18 seconds. Elapsed time: 7.7 seconds; current allocated memory: 660.570 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,492 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 418 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 187 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 140 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 112 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 112 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 116 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 121 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.47 seconds. CPU system time: 1.01 seconds. Elapsed time: 10.07 seconds; current allocated memory: 670.281 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.281 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.324 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.324 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:10:10) to (cordiccart2pol.cpp:22:20) in function 'cordiccart2pol'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.789 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.031 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('current_x_15_write_ln27', cordiccart2pol.cpp:27) of variable 'current_x', cordiccart2pol.cpp:27 on local variable 'current_x_15' and 'select' operation 12 bit ('current_y', cordiccart2pol.cpp:27).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 2, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.22 seconds; current allocated memory: 693.133 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.133 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 693.133 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.133 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 693.133 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'mul_12s_10ns_21_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_12_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.3 seconds; current allocated memory: 693.348 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.48 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.74 seconds; current allocated memory: 696.168 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.44 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.71 seconds; current allocated memory: 698.637 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 149.17 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:28; Allocated memory: 55.438 MB.
INFO: [HLS 200-112] Total CPU user time: 20 seconds. Total CPU system time: 3.95 seconds. Total elapsed time: 41.79 seconds; peak allocated memory: 698.637 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 44s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 22:17:55 2026

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
    |ap_clk  |  10.00 ns|  6.704 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |       46|       46|  0.460 us|  0.460 us|   47|   47|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |       41|       41|  0.410 us|  0.410 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    487|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|    1|     107|    295|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     37|    -|
|Register         |        -|    -|     111|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    1|     218|    819|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|   ~0|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   0|  107|  275|    0|
    |mul_12s_10ns_21_1_1_U8                              |mul_12s_10ns_21_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_12_1_1_U7                             |sparsemux_9_3_12_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   1|  107|  295|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +--------------------------+----------+----+---+-----+------------+------------+
    |       Variable Name      | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +--------------------------+----------+----+---+-----+------------+------------+
    |add_ln19_fu_191_p2        |         +|   0|  0|   14|           6|           5|
    |current_x_fu_269_p2       |         -|   0|  0|   12|           1|          12|
    |current_y_fu_275_p2       |         -|   0|  0|   12|           1|          12|
    |sub_ln19_1_fu_197_p2      |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_175_p2        |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_317_p2      |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_322_p2      |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_307_p2        |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_243_p2       |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_211_p2     |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_228_p2     |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_280_p2     |      icmp|   0|  0|   12|          11|           4|
    |icmp_ln19_fu_185_p2       |      icmp|   0|  0|   14|           6|           4|
    |current_x_3_fu_367_p3     |    select|   0|  0|   12|           1|          12|
    |current_y_3_fu_360_p3     |    select|   0|  0|   12|           1|          12|
    |select_ln19_1_fu_203_p3   |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_253_p3   |    select|   0|  0|   12|           1|          12|
    |select_ln19_4_fu_233_p3   |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_217_p3     |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_147_p3    |    select|   0|  0|   63|           1|          63|
    |storemerge5_ph_fu_338_p8  |    select|   0|  0|   12|           1|          12|
    |shl_ln19_fu_288_p2        |       shl|   0|  0|   26|          12|          12|
    |xor_ln16_fu_301_p2        |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_312_p2        |       xor|   0|  0|    2|           1|           2|
    +--------------------------+----------+----+---+-----+------------+------------+
    |Total                     |          |   0|  0|  487|         136|         310|
    +--------------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  37|          7|    1|          7|
    +-----------+----+-----------+-----+-----------+
    |Total      |  37|          7|    1|          7|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |                               Name                              | FF | LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                        |   6|   0|    6|          0|
    |current_x_2_loc_fu_94                                            |  12|   0|   12|          0|
    |current_x_3_reg_467                                              |  12|   0|   12|          0|
    |current_y_3_reg_462                                              |  12|   0|   12|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_440                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_427                                                |   1|   0|    1|          0|
    |select_ln19_1_reg_432                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_452                                            |  12|   0|   12|          0|
    |storemerge5_ph_reg_457                                           |  12|   0|   12|          0|
    |storemerge_loc_fu_98                                             |  12|   0|   12|          0|
    |tmp_3_reg_421                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_446                                             |   8|   0|   12|          4|
    |y_read_reg_403                                                   |  12|   0|   12|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 111|   0|  117|          6|
    +-----------------------------------------------------------------+----+----+-----+-----------+



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
|x             |   in|   12|     ap_none|               x|        scalar|
|y             |   in|   12|     ap_none|               y|        scalar|
|r             |  out|   12|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   12|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=16
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1268, golden theta=0.1545, golden r=0.8245, your theta=0.1536, your r=0.8246
Test: x=0.6322, y=-0.2786, golden theta=-0.4149, golden r=0.6909, your theta=-0.4146, your r=0.6910
Test: x=-0.5470, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0898, your r=1.1029
Test: x=-0.4855, y=0.7002, golden theta=2.1769, golden r=0.8521, your theta=2.1769, your r=0.8523
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000171169609530 0.000509457604494
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 22:22:42 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.74 seconds; current allocated memory: 659.195 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 5.32 seconds. CPU system time: 1.1 seconds. Elapsed time: 6.57 seconds; current allocated memory: 660.566 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,486 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 416 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 185 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 102 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 86 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 86 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.27 seconds. CPU system time: 0.99 seconds. Elapsed time: 9.72 seconds; current allocated memory: 670.215 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.215 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 670.336 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.336 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:10:10) to (cordiccart2pol.cpp:22:20) in function 'cordiccart2pol'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.793 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 692.059 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'add' operation 16 bit ('current_x', cordiccart2pol.cpp:28) and 'ashr' operation 16 bit ('x_shift', cordiccart2pol.cpp:24).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 3, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.17 seconds; current allocated memory: 693.078 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 693.078 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 693.078 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.078 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 693.078 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'mul_16s_14ns_29_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_16_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.23 seconds; current allocated memory: 693.434 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.67 seconds; current allocated memory: 696.281 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.49 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.8 seconds; current allocated memory: 698.746 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:26; Allocated memory: 55.551 MB.
INFO: [HLS 200-112] Total CPU user time: 18.31 seconds. Total CPU system time: 3.8 seconds. Total elapsed time: 39.69 seconds; peak allocated memory: 698.746 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 42s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 22:23:23 2026

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
    |ap_clk  |  10.00 ns|  7.229 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |       45|       45|  0.450 us|  0.450 us|   46|   46|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_134  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |       41|       41|  0.410 us|  0.410 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    536|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|    1|     141|    395|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     159|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    1|     300|    962|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|   ~0|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_134  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   0|  141|  375|    0|
    |mul_16s_14ns_29_1_1_U8                              |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U7                             |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   1|  141|  395|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +-------------------------+----------+----+---+-----+------------+------------+
    |      Variable Name      | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +-------------------------+----------+----+---+-----+------------+------------+
    |add_ln19_fu_197_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_307_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_313_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_203_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_181_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_334_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_339_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_324_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_265_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_217_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_250_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_233_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_191_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_3_fu_385_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_3_fu_377_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_209_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_275_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_292_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_255_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_239_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_153_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_286_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_318_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_329_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  536|         136|         335|
    +-------------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  31|          6|    1|          6|
    +-----------+----+-----------+-----+-----------+
    |Total      |  31|          6|    1|          6|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |                               Name                              | FF | LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_2_loc_fu_100                                           |  16|   0|   16|          0|
    |current_x_3_reg_494                                              |  16|   0|   16|          0|
    |current_y_3_reg_489                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_134_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_458                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_464                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_446                                                |   1|   0|    1|          0|
    |select_ln19_1_reg_451                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_474                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_479                                            |  16|   0|   16|          0|
    |storemerge5_ph_reg_484                                           |  16|   0|   16|          0|
    |storemerge_loc_fu_104                                            |  16|   0|   16|          0|
    |tmp_3_reg_440                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_469                                             |  12|   0|   16|          4|
    |y_read_reg_422                                                   |  16|   0|   16|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 159|   0|  165|          6|
    +-----------------------------------------------------------------+----+----+-----+-----------+



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
|x             |   in|   16|     ap_none|               x|        scalar|
|y             |   in|   16|     ap_none|               y|        scalar|
|r             |  out|   16|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   16|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=20
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1269, golden theta=0.1545, golden r=0.8245, your theta=0.1545, your r=0.8247
Test: x=0.6323, y=-0.2785, golden theta=-0.4149, golden r=0.6909, your theta=-0.4149, your r=0.6910
Test: x=-0.5469, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0898, your r=1.1029
Test: x=-0.4854, y=0.7003, golden theta=2.1769, golden r=0.8521, your theta=2.1769, your r=0.8522
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000153405300807 0.000013750166545
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 22:24:28 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.07 seconds. Elapsed time: 7.74 seconds; current allocated memory: 659.199 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 6.01 seconds. CPU system time: 1.26 seconds. Elapsed time: 7.71 seconds; current allocated memory: 660.570 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,500 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 416 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 185 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 138 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 114 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 119 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.63 seconds. CPU system time: 1.12 seconds. Elapsed time: 10.47 seconds; current allocated memory: 670.297 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0.01 seconds; current allocated memory: 670.297 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.332 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.332 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:10:10) to (cordiccart2pol.cpp:22:20) in function 'cordiccart2pol'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.1 seconds; current allocated memory: 691.809 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.047 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'add' operation 20 bit ('current_x', cordiccart2pol.cpp:28) and 'ashr' operation 20 bit ('x_shift', cordiccart2pol.cpp:24).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 3, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.21 seconds; current allocated memory: 693.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 693.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 693.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 693.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 693.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'mul_20s_18ns_37_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_20_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.23 seconds; current allocated memory: 693.371 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.44 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.75 seconds; current allocated memory: 696.207 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.46 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.75 seconds; current allocated memory: 698.707 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 146.76 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:28; Allocated memory: 55.508 MB.
INFO: [HLS 200-112] Total CPU user time: 19.37 seconds. Total CPU system time: 4.15 seconds. Total elapsed time: 40.64 seconds; peak allocated memory: 698.707 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 43s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 22:25:10 2026

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
    |ap_clk  |  10.00 ns|  6.814 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |       45|       45|  0.450 us|  0.450 us|   46|   46|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |       41|       41|  0.410 us|  0.410 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    574|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|    1|     173|    470|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     194|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    1|     367|   1075|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|   ~0|      ~0|      2|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   0|  173|  444|    0|
    |mul_20s_18ns_37_1_1_U8                              |mul_20s_18ns_37_1_1                      |        0|   1|    0|   12|    0|
    |sparsemux_9_3_20_1_1_U7                             |sparsemux_9_3_20_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   1|  173|  470|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +-------------------------+----------+----+---+-----+------------+------------+
    |      Variable Name      | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +-------------------------+----------+----+---+-----+------------+------------+
    |add_ln19_fu_191_p2       |         +|   0|  0|   14|           6|           6|
    |current_x_fu_291_p2      |         -|   0|  0|   27|           1|          20|
    |current_y_fu_297_p2      |         -|   0|  0|   27|           1|          20|
    |sub_ln19_1_fu_197_p2     |         -|   0|  0|   14|           5|           6|
    |sub_ln19_fu_175_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_318_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_323_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_308_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_243_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_211_p2    |      icmp|   0|  0|   14|           6|           5|
    |icmp_ln19_2_fu_228_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_261_p2    |      icmp|   0|  0|   12|          11|           5|
    |icmp_ln19_fu_185_p2      |      icmp|   0|  0|   14|           6|           5|
    |current_x_3_fu_369_p3    |    select|   0|  0|   20|           1|          20|
    |current_y_3_fu_361_p3    |    select|   0|  0|   20|           1|          20|
    |select_ln19_1_fu_203_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_253_p3  |    select|   0|  0|   20|           1|          20|
    |select_ln19_3_fu_275_p3  |    select|   0|  0|   20|           1|          20|
    |select_ln19_4_fu_233_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_217_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_147_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_269_p2       |       shl|   0|  0|   51|          20|          20|
    |xor_ln16_fu_302_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_313_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  574|         145|         370|
    +-------------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  31|          6|    1|          6|
    +-----------+----+-----------+-----+-----------+
    |Total      |  31|          6|    1|          6|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |                               Name                              | FF | LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_2_loc_fu_94                                            |  20|   0|   20|          0|
    |current_x_3_reg_474                                              |  20|   0|   20|          0|
    |current_y_3_reg_469                                              |  20|   0|   20|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_443                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_430                                                |   1|   0|    1|          0|
    |select_ln19_1_reg_435                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_454                                            |  20|   0|   20|          0|
    |select_ln19_3_reg_459                                            |  20|   0|   20|          0|
    |storemerge5_ph_reg_464                                           |  20|   0|   20|          0|
    |storemerge_loc_fu_98                                             |  20|   0|   20|          0|
    |tmp_3_reg_424                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_449                                             |  16|   0|   20|          4|
    |y_read_reg_406                                                   |  20|   0|   20|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 194|   0|  200|          6|
    +-----------------------------------------------------------------+----+----+-----+-----------+



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
|x             |   in|   20|     ap_none|               x|        scalar|
|y             |   in|   20|     ap_none|               y|        scalar|
|r             |  out|   20|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   20|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=24
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1269, golden theta=0.1545, golden r=0.8245, your theta=0.1545, your r=0.8247
Test: x=0.6323, y=-0.2785, golden theta=-0.4149, golden r=0.6909, your theta=-0.4149, your r=0.6910
Test: x=-0.5469, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0898, your r=1.1029
Test: x=-0.4854, y=0.7003, golden theta=2.1769, golden r=0.8521, your theta=2.1769, your r=0.8522
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000141438387800 0.000001161169621
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 22:25:33 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.73 seconds; current allocated memory: 659.199 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 6 seconds. CPU system time: 1.17 seconds. Elapsed time: 7.65 seconds; current allocated memory: 660.570 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,500 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 416 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 185 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 138 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 108 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 114 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 119 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.4 seconds. CPU system time: 1.05 seconds. Elapsed time: 9.93 seconds; current allocated memory: 670.211 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.211 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.336 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.336 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:10:10) to (cordiccart2pol.cpp:22:20) in function 'cordiccart2pol'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.797 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 692.359 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'add' operation 24 bit ('current_x', cordiccart2pol.cpp:28) and 'ashr' operation 24 bit ('x_shift', cordiccart2pol.cpp:24).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 3, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.2 seconds; current allocated memory: 693.211 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 693.211 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 693.211 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 693.211 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 693.211 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'mul_24s_22ns_45_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_24_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.3 seconds; current allocated memory: 693.391 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.73 seconds; current allocated memory: 696.207 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.44 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.79 seconds; current allocated memory: 698.711 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.54 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:27; Allocated memory: 55.512 MB.
INFO: [HLS 200-112] Total CPU user time: 19.49 seconds. Total CPU system time: 4 seconds. Total elapsed time: 41.29 seconds; peak allocated memory: 698.711 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 44s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 22:26:16 2026

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
    |ap_clk  |  10.00 ns|  6.918 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |       45|       45|  0.450 us|  0.450 us|   46|   46|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |       41|       41|  0.410 us|  0.410 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    613|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|    2|     205|    565|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     230|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    2|     435|   1209|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|   ~0|      ~0|      2|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   0|  205|  513|    0|
    |mul_24s_22ns_45_1_1_U7                              |mul_24s_22ns_45_1_1                      |        0|   2|    0|   38|    0|
    |sparsemux_9_3_24_1_1_U8                             |sparsemux_9_3_24_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   2|  205|  565|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +-------------------------+----------+----+---+-----+------------+------------+
    |      Variable Name      | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +-------------------------+----------+----+---+-----+------------+------------+
    |add_ln19_fu_196_p2       |         +|   0|  0|   14|           6|           6|
    |current_x_fu_296_p2      |         -|   0|  0|   31|           1|          24|
    |current_y_fu_302_p2      |         -|   0|  0|   31|           1|          24|
    |sub_ln19_1_fu_202_p2     |         -|   0|  0|   14|           5|           6|
    |sub_ln19_fu_180_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_323_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_328_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_313_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_248_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_216_p2    |      icmp|   0|  0|   14|           6|           5|
    |icmp_ln19_2_fu_233_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_266_p2    |      icmp|   0|  0|   12|          11|           5|
    |icmp_ln19_fu_190_p2      |      icmp|   0|  0|   14|           6|           5|
    |current_x_3_fu_374_p3    |    select|   0|  0|   24|           1|          24|
    |current_y_3_fu_366_p3    |    select|   0|  0|   24|           1|          24|
    |select_ln19_1_fu_208_p3  |    select|   0|  0|    6|           1|           5|
    |select_ln19_2_fu_258_p3  |    select|   0|  0|   24|           1|          24|
    |select_ln19_3_fu_280_p3  |    select|   0|  0|   24|           1|          24|
    |select_ln19_4_fu_238_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_222_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_152_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_274_p2       |       shl|   0|  0|   67|          24|          24|
    |xor_ln16_fu_307_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_318_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  613|         149|         397|
    +-------------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  31|          6|    1|          6|
    +-----------+----+-----------+-----+-----------+
    |Total      |  31|          6|    1|          6|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |                               Name                              | FF | LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_2_loc_fu_94                                            |  24|   0|   24|          0|
    |current_x_3_reg_474                                              |  24|   0|   24|          0|
    |current_y_3_reg_469                                              |  24|   0|   24|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_128_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_443                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_430                                                |   1|   0|    1|          0|
    |select_ln19_1_reg_435                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_454                                            |  24|   0|   24|          0|
    |select_ln19_3_reg_459                                            |  24|   0|   24|          0|
    |storemerge5_ph_reg_464                                           |  24|   0|   24|          0|
    |storemerge_loc_fu_98                                             |  24|   0|   24|          0|
    |tmp_3_reg_424                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_449                                             |  20|   0|   24|          4|
    |y_read_reg_406                                                   |  24|   0|   24|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 230|   0|  236|          6|
    +-----------------------------------------------------------------+----+----+-----+-----------+



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
|x             |   in|   24|     ap_none|               x|        scalar|
|y             |   in|   24|     ap_none|               y|        scalar|
|r             |  out|   24|      ap_vld|               r|       pointer|
|r_ap_vld      |  out|    1|      ap_vld|               r|       pointer|
|theta         |  out|   24|      ap_vld|           theta|       pointer|
|theta_ap_vld  |  out|    1|      ap_vld|           theta|       pointer|
+--------------+-----+-----+------------+----------------+--------------+

## N=32
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1269, golden theta=0.1545, golden r=0.8245, your theta=0.1545, your r=0.8247
Test: x=0.6323, y=-0.2785, golden theta=-0.4149, golden r=0.6909, your theta=-0.4149, your r=0.6910
Test: x=-0.5469, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0898, your r=1.1029
Test: x=-0.4854, y=0.7003, golden theta=2.1769, golden r=0.8521, your theta=2.1769, your r=0.8522
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000140697695315 0.000000617218518
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sat Oct 17 22:28:34 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.04 seconds. Elapsed time: 7.73 seconds; current allocated memory: 659.195 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 5.73 seconds. CPU system time: 1.18 seconds. Elapsed time: 7.24 seconds; current allocated memory: 660.566 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,471 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 386 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 163 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 96 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 80 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 80 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 78 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic/cordic_3a/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_1> at cordiccart2pol.cpp:22:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.18 seconds. CPU system time: 1 seconds. Elapsed time: 9.65 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.199 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.328 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.328 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:10:10) to (cordiccart2pol.cpp:22:20) in function 'cordiccart2pol'... converting 4 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:22:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.766 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 691.984 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' (loop 'VITIS_LOOP_22_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'add' operation 32 bit ('current_x', cordiccart2pol.cpp:28) and 'ashr' operation 32 bit ('x_shift', cordiccart2pol.cpp:24).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 3, loop 'VITIS_LOOP_22_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.18 seconds; current allocated memory: 693.008 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 693.008 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 693.008 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 693.008 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1' pipeline 'VITIS_LOOP_22_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_22_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 693.008 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'mul_32s_30ns_61_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.23 seconds; current allocated memory: 693.363 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.41 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.64 seconds; current allocated memory: 696.215 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.38 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.62 seconds; current allocated memory: 698.707 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 139.20 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:26; Allocated memory: 55.512 MB.
INFO: [HLS 200-112] Total CPU user time: 19.33 seconds. Total CPU system time: 3.9 seconds. Total elapsed time: 41.97 seconds; peak allocated memory: 698.707 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 44s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Sat Oct 17 22:29:17 2026

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
    |ap_clk  |  10.00 ns|  7.184 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |       46|       46|  0.460 us|  0.460 us|   47|   47|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |       41|       41|  0.410 us|  0.410 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    696|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|    4|     434|    718|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     37|    -|
|Register         |        -|    -|     304|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    4|     738|   1451|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    1|      ~0|      2|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_22_1  |        0|   0|  269|  654|    0|
    |mul_32s_30ns_61_2_1_U7                              |mul_32s_30ns_61_2_1                      |        0|   4|  165|   50|    0|
    |sparsemux_9_3_32_1_1_U8                             |sparsemux_9_3_32_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   4|  434|  718|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +-------------------------+----------+----+---+-----+------------+------------+
    |      Variable Name      | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +-------------------------+----------+----+---+-----+------------+------------+
    |add_ln19_fu_198_p2       |         +|   0|  0|   14|           6|           6|
    |current_x_fu_308_p2      |         -|   0|  0|   39|           1|          32|
    |current_y_fu_314_p2      |         -|   0|  0|   39|           1|          32|
    |sub_ln19_1_fu_204_p2     |         -|   0|  0|   14|           5|           6|
    |sub_ln19_fu_182_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_335_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_340_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_325_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_218_p2    |      icmp|   0|  0|   14|           6|           5|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_234_p2    |      icmp|   0|  0|   14|           6|           1|
    |icmp_ln19_fu_192_p2      |      icmp|   0|  0|   14|           6|           5|
    |current_x_3_fu_386_p3    |    select|   0|  0|   32|           1|          32|
    |current_y_3_fu_378_p3    |    select|   0|  0|   32|           1|          32|
    |select_ln19_1_fu_210_p3  |    select|   0|  0|    6|           1|           5|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   32|           1|          32|
    |select_ln19_3_fu_293_p3  |    select|   0|  0|   32|           1|          32|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_240_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_154_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_287_p2       |       shl|   0|  0|  100|          32|          32|
    |xor_ln16_fu_319_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_330_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  696|         152|         449|
    +-------------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  37|          7|    1|          7|
    +-----------+----+-----------+-----+-----------+
    |Total      |  37|          7|    1|          7|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |                               Name                              | FF | LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |ap_CS_fsm                                                        |   6|   0|    6|          0|
    |current_x_2_loc_fu_96                                            |  32|   0|   32|          0|
    |current_x_3_reg_490                                              |  32|   0|   32|          0|
    |current_y_3_reg_485                                              |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_22_1_fu_130_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_454                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_460                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_442                                                |   1|   0|    1|          0|
    |select_ln19_1_reg_447                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_470                                            |  32|   0|   32|          0|
    |select_ln19_3_reg_475                                            |  32|   0|   32|          0|
    |storemerge5_ph_reg_480                                           |  32|   0|   32|          0|
    |storemerge_loc_fu_100                                            |  32|   0|   32|          0|
    |tmp_3_reg_436                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_465                                             |  28|   0|   32|          4|
    |y_read_reg_418                                                   |  32|   0|   32|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 304|   0|  310|          6|
    +-----------------------------------------------------------------+----+----+-----+-----------+



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

