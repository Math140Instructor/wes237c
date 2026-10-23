## N=4
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1268, golden theta=0.1545, golden r=0.8245, your theta=0.5000, your r=0.7806
Test: x=0.6322, y=-0.2786, golden theta=-0.4149, golden r=0.6909, your theta=-0.5000, your r=0.6604
Test: x=-0.5470, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.6416, your r=1.0382
Test: x=-0.4855, y=0.7002, golden theta=2.1769, golden r=0.8521, your theta=2.6415, your r=0.7853
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.053562492132187 0.402173668146133
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 21:11:33 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.26 seconds. CPU system time: 0.08 seconds. Elapsed time: 8.07 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 9.71 seconds. CPU system time: 1.58 seconds. Elapsed time: 18.94 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,565 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 364 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 169 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 100 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_23_1> at cordiccart2pol.cpp:23:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.14 seconds. CPU system time: 1.18 seconds. Elapsed time: 11.75 seconds; current allocated memory: 670.238 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.238 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 670.320 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.320 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:23:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.13 seconds; current allocated memory: 691.785 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.062 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 17 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_23_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.26 seconds; current allocated memory: 693.133 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 693.133 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 693.133 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.133 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' pipeline 'VITIS_LOOP_23_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_16s_2ns_17_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 693.133 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.34 seconds; current allocated memory: 693.762 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.58 seconds. CPU system time: 0.07 seconds. Elapsed time: 1.26 seconds; current allocated memory: 696.586 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.48 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.92 seconds; current allocated memory: 699.148 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:42; Allocated memory: 56.004 MB.
INFO: [HLS 200-112] Total CPU user time: 26.62 seconds. Total CPU system time: 4.7 seconds. Total elapsed time: 59.71 seconds; peak allocated memory: 699.148 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 2s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 21:12:33 2026

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
    |       47|       47|  0.470 us|  0.470 us|   48|   48|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    1|     136|    299|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     159|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    1|     295|    866|    0|
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
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |        0|   0|  136|  279|    0|
    |mul_16s_14ns_29_1_1_U12                             |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U11                            |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   1|  136|  299|    0|
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
    |add_ln19_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln37_loc_fu_102                                              |  16|   0|   16|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln19_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_473                                             |  12|   0|   16|          4|
    |y_read_reg_426                                                   |  16|   0|   16|          0|
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
## N=8
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1268, golden theta=0.1545, golden r=0.8245, your theta=0.1875, your r=0.8243
Test: x=0.6322, y=-0.2786, golden theta=-0.4149, golden r=0.6909, your theta=-0.4375, your r=0.6907
Test: x=-0.5470, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0791, your r=1.1024
Test: x=-0.4855, y=0.7002, golden theta=2.1769, golden r=0.8521, your theta=2.2040, your r=0.8519
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000214391111513 0.024727143347263
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 21:13:55 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.12 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.76 seconds; current allocated memory: 659.148 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 8.05 seconds. CPU system time: 1.26 seconds. Elapsed time: 10.29 seconds; current allocated memory: 660.520 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,565 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 364 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 169 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 100 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_23_1> at cordiccart2pol.cpp:23:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.87 seconds. CPU system time: 1.05 seconds. Elapsed time: 11.24 seconds; current allocated memory: 670.203 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.203 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 670.301 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.316 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:23:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.07 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.13 seconds; current allocated memory: 691.781 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 692.062 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 21 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_23_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.24 seconds; current allocated memory: 693.051 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.051 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.12 seconds; current allocated memory: 693.051 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.051 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' pipeline 'VITIS_LOOP_23_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_16s_6ns_21_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 693.062 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.25 seconds; current allocated memory: 693.758 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.37 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.76 seconds; current allocated memory: 696.586 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.39 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.73 seconds; current allocated memory: 699.148 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:32; Allocated memory: 56.000 MB.
INFO: [HLS 200-112] Total CPU user time: 23.39 seconds. Total CPU system time: 4.19 seconds. Total elapsed time: 47.85 seconds; peak allocated memory: 699.148 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 50s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 21:14:44 2026

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
    |       47|       47|  0.470 us|  0.470 us|   48|   48|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    3|     148|    317|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     159|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    3|     307|    884|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    1|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |        0|   2|  148|  297|    0|
    |mul_16s_14ns_29_1_1_U12                             |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U11                            |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   3|  148|  317|    0|
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
    |add_ln19_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln37_loc_fu_102                                              |  16|   0|   16|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln19_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_473                                             |  12|   0|   16|          4|
    |y_read_reg_426                                                   |  16|   0|   16|          0|
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
## N=12
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1268, golden theta=0.1545, golden r=0.8245, your theta=0.1523, your r=0.8246
Test: x=0.6322, y=-0.2786, golden theta=-0.4149, golden r=0.6909, your theta=-0.4180, your r=0.6908
Test: x=-0.5470, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0869, your r=1.1028
Test: x=-0.4855, y=0.7002, golden theta=2.1769, golden r=0.8521, your theta=2.1805, your r=0.8522
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000097557240224 0.002981615019962
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 21:15:28 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.129 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 7.9 seconds. CPU system time: 1.32 seconds. Elapsed time: 10.62 seconds; current allocated memory: 660.500 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,565 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 364 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 169 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 110 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 100 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_23_1> at cordiccart2pol.cpp:23:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.21 seconds. CPU system time: 1.19 seconds. Elapsed time: 11.8 seconds; current allocated memory: 670.117 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.117 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 670.273 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 670.316 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:23:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.08 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.13 seconds; current allocated memory: 691.785 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.19 seconds; current allocated memory: 692.059 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 25 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_23_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.4 seconds; current allocated memory: 693.129 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 693.129 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.13 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 693.129 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 693.129 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' pipeline 'VITIS_LOOP_23_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_16s_10ns_25_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.32 seconds; current allocated memory: 693.129 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.68 seconds; current allocated memory: 693.762 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.5 seconds. CPU system time: 0.09 seconds. Elapsed time: 1.22 seconds; current allocated memory: 696.586 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.49 seconds. CPU system time: 0.11 seconds. Elapsed time: 0.91 seconds; current allocated memory: 699.152 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:34; Allocated memory: 56.023 MB.
INFO: [HLS 200-112] Total CPU user time: 22.88 seconds. Total CPU system time: 4.44 seconds. Total elapsed time: 48.76 seconds; peak allocated memory: 699.152 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 51s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 21:16:17 2026

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
    |       47|       47|  0.470 us|  0.470 us|   48|   48|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    3|     164|    323|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     159|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    3|     323|    890|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    1|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |        0|   2|  164|  303|    0|
    |mul_16s_14ns_29_1_1_U12                             |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U11                            |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   3|  164|  323|    0|
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
    |add_ln19_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln37_loc_fu_102                                              |  16|   0|   16|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln19_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_473                                             |  12|   0|   16|          4|
    |y_read_reg_426                                                   |  16|   0|   16|          0|
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
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 21:17:29 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.82 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 8.38 seconds. CPU system time: 1.34 seconds. Elapsed time: 14.11 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,540 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 359 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 163 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 105 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 94 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_23_1> at cordiccart2pol.cpp:23:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.96 seconds. CPU system time: 1.06 seconds. Elapsed time: 11.08 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0.01 seconds. Elapsed time: 0 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.270 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.293 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:23:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.746 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.004 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 29 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_23_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.25 seconds; current allocated memory: 692.992 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.992 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 692.992 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 692.992 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' pipeline 'VITIS_LOOP_23_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_14ns_16s_29_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 693.004 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.14 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.37 seconds; current allocated memory: 693.680 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.55 seconds. CPU system time: 0.07 seconds. Elapsed time: 1.31 seconds; current allocated memory: 696.539 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.38 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.74 seconds; current allocated memory: 699.020 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:36; Allocated memory: 55.906 MB.
INFO: [HLS 200-112] Total CPU user time: 23.53 seconds. Total CPU system time: 4.26 seconds. Total elapsed time: 53.65 seconds; peak allocated memory: 699.051 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 56s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 21:18:23 2026

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
    |       47|       47|  0.470 us|  0.470 us|   48|   48|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    3|     180|    334|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     159|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    3|     339|    901|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    1|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |        0|   2|  180|  314|    0|
    |mul_16s_14ns_29_1_1_U12                             |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U11                            |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   3|  180|  334|    0|
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
    |add_ln19_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln37_loc_fu_102                                              |  16|   0|   16|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln19_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_473                                             |  12|   0|   16|          4|
    |y_read_reg_426                                                   |  16|   0|   16|          0|
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
Test: x=0.8147, y=0.1268, golden theta=0.1545, golden r=0.8245, your theta=0.1530, your r=0.8246
Test: x=0.6322, y=-0.2786, golden theta=-0.4149, golden r=0.6909, your theta=-0.4155, your r=0.6910
Test: x=-0.5470, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0907, your r=1.1029
Test: x=-0.4855, y=0.7002, golden theta=2.1769, golden r=0.8521, your theta=2.1759, your r=0.8523
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000171169609530 0.001089673838578
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 21:19:18 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.26 seconds. CPU system time: 0.07 seconds. Elapsed time: 7.95 seconds; current allocated memory: 659.148 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 9.83 seconds. CPU system time: 1.44 seconds. Elapsed time: 13.85 seconds; current allocated memory: 660.520 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,593 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 361 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 166 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 107 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 97 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 104 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_23_1> at cordiccart2pol.cpp:23:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.39 seconds. CPU system time: 1.11 seconds. Elapsed time: 11.19 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 670.277 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.352 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:23:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.07 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.16 seconds; current allocated memory: 691.816 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.13 seconds; current allocated memory: 692.074 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 33 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_23_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.32 seconds; current allocated memory: 693.145 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 693.145 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.2 seconds; current allocated memory: 693.145 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.145 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' pipeline 'VITIS_LOOP_23_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_18ns_16s_33_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 693.145 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.37 seconds; current allocated memory: 693.848 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.55 seconds. CPU system time: 0.06 seconds. Elapsed time: 2.22 seconds; current allocated memory: 696.676 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.52 seconds. CPU system time: 0.09 seconds. Elapsed time: 1.06 seconds; current allocated memory: 699.203 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:38; Allocated memory: 56.059 MB.
INFO: [HLS 200-112] Total CPU user time: 26.25 seconds. Total CPU system time: 4.33 seconds. Total elapsed time: 52.86 seconds; peak allocated memory: 699.207 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 56s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 21:20:11 2026

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
    |       47|       47|  0.470 us|  0.470 us|   48|   48|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    3|     212|    352|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     143|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    3|     355|    919|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    1|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |        0|   2|  212|  332|    0|
    |mul_16s_14ns_29_1_1_U12                             |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U11                            |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   3|  212|  352|    0|
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
    |add_ln19_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln19_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_473                                             |  12|   0|   16|          4|
    |y_read_reg_426                                                   |  16|   0|   16|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 143|   0|  149|          6|
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

## N=32
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8147, y=0.1268, golden theta=0.1545, golden r=0.8245, your theta=0.1530, your r=0.8246
Test: x=0.6322, y=-0.2786, golden theta=-0.4149, golden r=0.6909, your theta=-0.4155, your r=0.6910
Test: x=-0.5470, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0907, your r=1.1029
Test: x=-0.4855, y=0.7002, golden theta=2.1769, golden r=0.8521, your theta=2.1759, your r=0.8523
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000171169609530 0.001089673838578
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 21:20:57 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.76 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 7.58 seconds. CPU system time: 1.19 seconds. Elapsed time: 9.83 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,591 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 361 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 166 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 107 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 97 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 104 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2c/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_23_1> at cordiccart2pol.cpp:23:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.56 seconds. CPU system time: 0.99 seconds. Elapsed time: 10.28 seconds; current allocated memory: 670.145 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.145 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.277 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.309 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:7:16) to (cordiccart2pol.cpp:23:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.1 seconds; current allocated memory: 691.801 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.094 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_23_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 45 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' (loop 'VITIS_LOOP_23_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln33', cordiccart2pol.cpp:33) and 'mul' operation 45 bit ('mul_ln29', cordiccart2pol.cpp:29).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 3, Depth = 5, loop 'VITIS_LOOP_23_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.22 seconds; current allocated memory: 693.082 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 693.082 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 693.082 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.082 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1' pipeline 'VITIS_LOOP_23_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_30ns_16s_45_2_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_23_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.29 seconds; current allocated memory: 693.094 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.19 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.38 seconds; current allocated memory: 693.875 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.41 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.82 seconds; current allocated memory: 696.734 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.44 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.83 seconds; current allocated memory: 699.223 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:31; Allocated memory: 56.113 MB.
INFO: [HLS 200-112] Total CPU user time: 22.37 seconds. Total CPU system time: 4.01 seconds. Total elapsed time: 47.38 seconds; peak allocated memory: 699.258 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 49s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 21:21:45 2026

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
    |       67|       67|  0.670 us|  0.670 us|   68|   68|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |       63|       63|  0.630 us|  0.630 us|   60|   60|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    5|     497|    493|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     143|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    5|     640|   1060|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    2|      ~0|      1|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_23_1  |        0|   4|  497|  473|    0|
    |mul_16s_14ns_29_1_1_U12                             |mul_16s_14ns_29_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_16_1_1_U11                            |sparsemux_9_3_16_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   5|  497|  493|    0|
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
    |add_ln19_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln19_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln19_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln19_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln19_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln19_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln19_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln19_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln19_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln19_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln19_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln19_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln19_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln19_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln19_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln16_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln19_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_23_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln19_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln19_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln19_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln19_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln19_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln19_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln19_1_reg_473                                             |  12|   0|   16|          4|
    |y_read_reg_426                                                   |  16|   0|   16|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 143|   0|  149|          6|
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

