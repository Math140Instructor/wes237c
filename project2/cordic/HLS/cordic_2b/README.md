## N=8
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
---Testing results----------------------------------
Test: x=0.8125, y=0.1250, golden theta=0.1545, golden r=0.8245, your theta=0.1875, your r=0.8125
Test: x=0.6250, y=-0.2812, golden theta=-0.4149, golden r=0.6909, your theta=-0.4375, your r=0.6562
Test: x=-0.5625, y=-0.9688, golden theta=-2.0898, golden r=1.1027, your theta=-2.0938, your r=1.0938
Test: x=-0.5000, y=0.6875, golden theta=2.1769, golden r=0.8521, your theta=2.1875, your r=0.8125
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.027351196855307 0.020780317485332
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 20:44:28 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.148 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 8.14 seconds. CPU system time: 1.4 seconds. Elapsed time: 10.7 seconds; current allocated memory: 660.520 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,558 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 357 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 162 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 104 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 94 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_24_1> at cordiccart2pol.cpp:24:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.24 seconds. CPU system time: 1.2 seconds. Elapsed time: 11.52 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 670.273 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.297 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:8:16) to (cordiccart2pol.cpp:24:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.08 seconds; current allocated memory: 691.746 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.051 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_24_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 8 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 13 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 3, loop 'VITIS_LOOP_24_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.26 seconds; current allocated memory: 693.043 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 693.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.17 seconds; current allocated memory: 693.043 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 693.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' pipeline 'VITIS_LOOP_24_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_6ns_8s_13_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.19 seconds; current allocated memory: 693.051 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.33 seconds; current allocated memory: 693.656 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.46 seconds. CPU system time: 0.07 seconds. Elapsed time: 2.18 seconds; current allocated memory: 696.516 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.47 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.86 seconds; current allocated memory: 699.000 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.48 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:34; Allocated memory: 55.891 MB.
INFO: [HLS 200-112] Total CPU user time: 24.45 seconds. Total CPU system time: 4.55 seconds. Total elapsed time: 52.55 seconds; peak allocated memory: 699.039 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 55s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 20:45:20 2026

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
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_134  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |       42|       42|  0.420 us|  0.420 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    0|      85|    375|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|      93|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    0|     178|    877|    0|
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
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_134  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |        0|   0|  85|  320|    0|
    |mul_8s_6ns_13_1_1_U12                               |mul_8s_6ns_13_1_1                        |        0|   0|   0|   41|    0|
    |sparsemux_9_3_8_1_1_U11                             |sparsemux_9_3_8_1_1                      |        0|   0|   0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+----+-----+-----+
    |Total                                               |                                         |        0|   0|  85|  375|    0|
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
    |add_ln20_fu_199_p2       |         +|   0|  0|   14|           6|           4|
    |current_x_fu_309_p2      |         -|   0|  0|   15|           1|           8|
    |current_y_fu_315_p2      |         -|   0|  0|   15|           1|           8|
    |sub_ln20_1_fu_205_p2     |         -|   0|  0|   14|           3|           6|
    |sub_ln20_fu_183_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln20_1_fu_336_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_2_fu_341_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_fu_326_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln20_fu_271_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln20_1_fu_219_p2    |      icmp|   0|  0|   14|           6|           3|
    |icmp_ln20_2_fu_256_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln20_3_fu_235_p2    |      icmp|   0|  0|   15|           8|           1|
    |icmp_ln20_fu_193_p2      |      icmp|   0|  0|   14|           6|           3|
    |current_x_1_fu_387_p3    |    select|   0|  0|    8|           1|           8|
    |current_y_1_fu_379_p3    |    select|   0|  0|    8|           1|           8|
    |select_ln20_1_fu_211_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln20_2_fu_281_p3  |    select|   0|  0|    8|           1|           8|
    |select_ln20_3_fu_294_p3  |    select|   0|  0|    8|           1|           8|
    |select_ln20_4_fu_261_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln20_fu_245_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_155_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln20_fu_289_p2       |       shl|   0|  0|   17|           8|           8|
    |xor_ln17_fu_320_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln20_fu_331_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  471|         128|         276|
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
    +-----------------------------------------------------------------+---+----+-----+-----------+
    |                               Name                              | FF| LUT| Bits| Const Bits|
    +-----------------------------------------------------------------+---+----+-----+-----------+
    |add_ln38_loc_fu_100                                              |  8|   0|    8|          0|
    |ap_CS_fsm                                                        |  5|   0|    5|          0|
    |current_x_1_reg_500                                              |  8|   0|    8|          0|
    |current_y_1_reg_495                                              |  8|   0|    8|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_134_ap_start_reg  |  1|   0|    1|          0|
    |icmp_ln20_1_reg_459                                              |  1|   0|    1|          0|
    |icmp_ln20_3_reg_465                                              |  1|   0|    1|          0|
    |icmp_ln20_reg_448                                                |  1|   0|    1|          0|
    |next_x_loc_fu_104                                                |  8|   0|    8|          0|
    |p_ph_reg_490                                                     |  8|   0|    8|          0|
    |select_ln20_1_reg_453                                            |  9|   0|   11|          2|
    |select_ln20_1cast_reg_470                                        |  6|   0|    8|          2|
    |select_ln20_2_reg_480                                            |  8|   0|    8|          0|
    |select_ln20_3_reg_485                                            |  8|   0|    8|          0|
    |tmp_3_reg_442                                                    |  1|   0|    1|          0|
    |trunc_ln20_1_reg_475                                             |  4|   0|    8|          4|
    |y_read_reg_424                                                   |  8|   0|    8|          0|
    +-----------------------------------------------------------------+---+----+-----+-----------+
    |Total                                                            | 93|   0|  101|          8|
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
Test: x=0.6309, y=-0.2793, golden theta=-0.4149, golden r=0.6909, your theta=-0.4180, your r=0.6875
Test: x=-0.5488, y=-0.9590, golden theta=-2.0898, golden r=1.1027, your theta=-2.0879, your r=1.1035
Test: x=-0.4863, y=0.6992, golden theta=2.1769, golden r=0.8521, your theta=2.1797, your r=0.8496
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.002153194509447 0.002523616189137
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 20:46:33 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.18 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.83 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 9.3 seconds. CPU system time: 1.58 seconds. Elapsed time: 12.41 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,558 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 365 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 169 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 117 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 96 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 97 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 97 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 101 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 106 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_24_1> at cordiccart2pol.cpp:24:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.53 seconds. CPU system time: 1.15 seconds. Elapsed time: 11.98 seconds; current allocated memory: 670.191 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.191 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.289 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.301 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:8:16) to (cordiccart2pol.cpp:24:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.11 seconds; current allocated memory: 691.766 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 692.332 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_24_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 12 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 21 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_24_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.31 seconds; current allocated memory: 693.156 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 693.156 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0 seconds. Elapsed time: 0.19 seconds; current allocated memory: 693.156 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 693.156 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' pipeline 'VITIS_LOOP_24_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_10ns_12s_21_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.14 seconds; current allocated memory: 693.332 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.27 seconds; current allocated memory: 693.633 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.42 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.81 seconds; current allocated memory: 696.465 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.43 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.95 seconds; current allocated memory: 699.000 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.36 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:35; Allocated memory: 55.855 MB.
INFO: [HLS 200-112] Total CPU user time: 25.78 seconds. Total CPU system time: 4.42 seconds. Total elapsed time: 48.46 seconds; peak allocated memory: 699.000 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 51s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 20:47:23 2026

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
    |ap_clk  |  10.00 ns|  7.280 ns|     2.70 ns|
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
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    3|     144|    260|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     122|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    3|     266|    778|    0|
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
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |        0|   2|  144|  240|    0|
    |mul_12s_10ns_21_1_1_U12                             |mul_12s_10ns_21_1_1                      |        0|   1|    0|    6|    0|
    |sparsemux_9_3_12_1_1_U11                            |sparsemux_9_3_12_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   3|  144|  260|    0|
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
    |add_ln20_fu_195_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_295_p2      |         -|   0|  0|   12|           1|          12|
    |current_y_fu_301_p2      |         -|   0|  0|   12|           1|          12|
    |sub_ln20_1_fu_201_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln20_fu_179_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln20_1_fu_322_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_2_fu_327_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_fu_312_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln20_fu_247_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln20_1_fu_215_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln20_2_fu_232_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln20_3_fu_265_p2    |      icmp|   0|  0|   12|          11|           4|
    |icmp_ln20_fu_189_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_373_p3    |    select|   0|  0|   12|           1|          12|
    |current_y_1_fu_365_p3    |    select|   0|  0|   12|           1|          12|
    |select_ln20_1_fu_207_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln20_2_fu_257_p3  |    select|   0|  0|   12|           1|          12|
    |select_ln20_3_fu_279_p3  |    select|   0|  0|   12|           1|          12|
    |select_ln20_4_fu_237_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln20_fu_221_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_151_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln20_fu_273_p2       |       shl|   0|  0|   26|          12|          12|
    |xor_ln17_fu_306_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln20_fu_317_p2       |       xor|   0|  0|    2|           1|           2|
    +-------------------------+----------+----+---+-----+------------+------------+
    |Total                    |          |   0|  0|  487|         136|         310|
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
    |add_ln38_loc_fu_96                                               |  12|   0|   12|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_478                                              |  12|   0|   12|          0|
    |current_y_1_reg_473                                              |  12|   0|   12|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln20_1_reg_447                                              |   1|   0|    1|          0|
    |icmp_ln20_reg_434                                                |   1|   0|    1|          0|
    |next_x_loc_fu_100                                                |  12|   0|   12|          0|
    |p_ph_reg_468                                                     |  12|   0|   12|          0|
    |select_ln20_1_reg_439                                            |   9|   0|   11|          2|
    |select_ln20_2_reg_458                                            |  12|   0|   12|          0|
    |select_ln20_3_reg_463                                            |  12|   0|   12|          0|
    |tmp_3_reg_428                                                    |   1|   0|    1|          0|
    |trunc_ln20_1_reg_453                                             |   8|   0|   12|          4|
    |y_read_reg_410                                                   |  12|   0|   12|          0|
    +-----------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                            | 122|   0|  128|          6|
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
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 20:48:20 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.19 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.84 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 9.27 seconds. CPU system time: 1.6 seconds. Elapsed time: 15.65 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,540 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 359 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 163 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 105 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 84 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 85 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 94 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_24_1> at cordiccart2pol.cpp:24:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.75 seconds. CPU system time: 1.26 seconds. Elapsed time: 12.7 seconds; current allocated memory: 670.145 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.145 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.270 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.301 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:8:16) to (cordiccart2pol.cpp:24:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.06 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.11 seconds; current allocated memory: 691.746 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.004 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_24_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 16 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 29 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_24_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.13 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.33 seconds; current allocated memory: 693.074 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 693.074 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.14 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.24 seconds; current allocated memory: 693.074 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 693.074 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' pipeline 'VITIS_LOOP_24_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_14ns_16s_29_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.32 seconds; current allocated memory: 693.074 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.35 seconds; current allocated memory: 693.680 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.52 seconds. CPU system time: 0.07 seconds. Elapsed time: 1.11 seconds; current allocated memory: 696.539 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.45 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.85 seconds; current allocated memory: 699.023 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 138.33 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:39; Allocated memory: 55.906 MB.
INFO: [HLS 200-112] Total CPU user time: 26.38 seconds. Total CPU system time: 4.84 seconds. Total elapsed time: 58.04 seconds; peak allocated memory: 699.051 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 1s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 20:49:19 2026

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
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_136  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |        0|   2|  180|  314|    0|
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
    |add_ln20_fu_201_p2       |         +|   0|  0|   14|           6|           5|
    |current_x_fu_311_p2      |         -|   0|  0|   23|           1|          16|
    |current_y_fu_317_p2      |         -|   0|  0|   23|           1|          16|
    |sub_ln20_1_fu_207_p2     |         -|   0|  0|   14|           4|           6|
    |sub_ln20_fu_185_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln20_1_fu_338_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_2_fu_343_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_fu_328_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln20_fu_269_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln20_1_fu_221_p2    |      icmp|   0|  0|   14|           6|           4|
    |icmp_ln20_2_fu_254_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln20_3_fu_237_p2    |      icmp|   0|  0|   14|           7|           1|
    |icmp_ln20_fu_195_p2      |      icmp|   0|  0|   14|           6|           4|
    |current_x_1_fu_389_p3    |    select|   0|  0|   16|           1|          16|
    |current_y_1_fu_381_p3    |    select|   0|  0|   16|           1|          16|
    |select_ln20_1_fu_213_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln20_2_fu_279_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln20_3_fu_296_p3  |    select|   0|  0|   16|           1|          16|
    |select_ln20_4_fu_259_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln20_fu_243_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_157_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln20_fu_290_p2       |       shl|   0|  0|   35|          16|          16|
    |xor_ln17_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln20_fu_333_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln38_loc_fu_102                                              |  16|   0|   16|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_498                                              |  16|   0|   16|          0|
    |current_y_1_reg_493                                              |  16|   0|   16|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_136_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln20_1_reg_462                                              |   1|   0|    1|          0|
    |icmp_ln20_3_reg_468                                              |   1|   0|    1|          0|
    |icmp_ln20_reg_450                                                |   1|   0|    1|          0|
    |next_x_loc_fu_106                                                |  16|   0|   16|          0|
    |p_ph_reg_488                                                     |  16|   0|   16|          0|
    |select_ln20_1_reg_455                                            |   9|   0|   11|          2|
    |select_ln20_2_reg_478                                            |  16|   0|   16|          0|
    |select_ln20_3_reg_483                                            |  16|   0|   16|          0|
    |tmp_3_reg_444                                                    |   1|   0|    1|          0|
    |trunc_ln20_1_reg_473                                             |  12|   0|   16|          4|
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
Test: x=0.8147, y=0.1269, golden theta=0.1545, golden r=0.8245, your theta=0.1545, your r=0.8247
Test: x=0.6323, y=-0.2785, golden theta=-0.4149, golden r=0.6909, your theta=-0.4149, your r=0.6910
Test: x=-0.5469, y=-0.9575, golden theta=-2.0898, golden r=1.1027, your theta=-2.0898, your r=1.1029
Test: x=-0.4854, y=0.7003, golden theta=2.1769, golden r=0.8521, your theta=2.1769, your r=0.8522
---RMS error----------------------------------
----------------------------------------------
   RMSE(R)           RMSE(Theta)
0.000149507613969 0.000013750166545
----------------------------------------------
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 20:50:31 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.2 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.84 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 8.37 seconds. CPU system time: 1.42 seconds. Elapsed time: 10.53 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,582 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 359 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 163 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 111 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 100 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_24_1> at cordiccart2pol.cpp:24:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.88 seconds. CPU system time: 1.06 seconds. Elapsed time: 10.57 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.01 seconds; current allocated memory: 670.160 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.270 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.301 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:8:16) to (cordiccart2pol.cpp:24:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.07 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.12 seconds; current allocated memory: 691.750 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.000 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_24_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 20 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 37 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_24_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.36 seconds; current allocated memory: 693.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 693.070 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 693.070 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' pipeline 'VITIS_LOOP_24_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_18ns_20s_37_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.18 seconds; current allocated memory: 693.070 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.16 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.31 seconds; current allocated memory: 693.633 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.49 seconds. CPU system time: 0.06 seconds. Elapsed time: 1.23 seconds; current allocated memory: 696.465 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.47 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.85 seconds; current allocated memory: 698.996 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 152.59 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:32; Allocated memory: 55.863 MB.
INFO: [HLS 200-112] Total CPU user time: 25.54 seconds. Total CPU system time: 4.57 seconds. Total elapsed time: 53.9 seconds; peak allocated memory: 699.008 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 57s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 20:51:26 2026

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
    |ap_clk  |  10.00 ns|  6.554 ns|     2.70 ns|
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
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    3|     224|    394|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     194|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    3|     418|    999|    0|
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
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |        0|   2|  224|  368|    0|
    |mul_20s_18ns_37_1_1_U12                             |mul_20s_18ns_37_1_1                      |        0|   1|    0|   12|    0|
    |sparsemux_9_3_20_1_1_U11                            |sparsemux_9_3_20_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   3|  224|  394|    0|
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
    |add_ln20_fu_195_p2       |         +|   0|  0|   14|           6|           6|
    |current_x_fu_295_p2      |         -|   0|  0|   27|           1|          20|
    |current_y_fu_301_p2      |         -|   0|  0|   27|           1|          20|
    |sub_ln20_1_fu_201_p2     |         -|   0|  0|   14|           5|           6|
    |sub_ln20_fu_179_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln20_1_fu_322_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_2_fu_327_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_fu_312_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln20_fu_247_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln20_1_fu_215_p2    |      icmp|   0|  0|   14|           6|           5|
    |icmp_ln20_2_fu_232_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln20_3_fu_265_p2    |      icmp|   0|  0|   12|          11|           5|
    |icmp_ln20_fu_189_p2      |      icmp|   0|  0|   14|           6|           5|
    |current_x_1_fu_373_p3    |    select|   0|  0|   20|           1|          20|
    |current_y_1_fu_365_p3    |    select|   0|  0|   20|           1|          20|
    |select_ln20_1_fu_207_p3  |    select|   0|  0|    7|           1|           6|
    |select_ln20_2_fu_257_p3  |    select|   0|  0|   20|           1|          20|
    |select_ln20_3_fu_279_p3  |    select|   0|  0|   20|           1|          20|
    |select_ln20_4_fu_237_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln20_fu_221_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_151_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln20_fu_273_p2       |       shl|   0|  0|   51|          20|          20|
    |xor_ln17_fu_306_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln20_fu_317_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln38_loc_fu_96                                               |  20|   0|   20|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_478                                              |  20|   0|   20|          0|
    |current_y_1_reg_473                                              |  20|   0|   20|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln20_1_reg_447                                              |   1|   0|    1|          0|
    |icmp_ln20_reg_434                                                |   1|   0|    1|          0|
    |next_x_loc_fu_100                                                |  20|   0|   20|          0|
    |p_ph_reg_468                                                     |  20|   0|   20|          0|
    |select_ln20_1_reg_439                                            |   9|   0|   11|          2|
    |select_ln20_2_reg_458                                            |  20|   0|   20|          0|
    |select_ln20_3_reg_463                                            |  20|   0|   20|          0|
    |tmp_3_reg_428                                                    |   1|   0|    1|          0|
    |trunc_ln20_1_reg_453                                             |  16|   0|   20|          4|
    |y_read_reg_410                                                   |  20|   0|   20|          0|
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
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 20:52:12 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.74 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 6.7 seconds. CPU system time: 1.19 seconds. Elapsed time: 8.55 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,582 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 359 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 163 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 111 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 90 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 91 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 89 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 95 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 100 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_24_1> at cordiccart2pol.cpp:24:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.48 seconds. CPU system time: 0.94 seconds. Elapsed time: 10.17 seconds; current allocated memory: 670.234 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.234 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 670.320 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.03 seconds; current allocated memory: 670.320 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:8:16) to (cordiccart2pol.cpp:24:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.05 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.09 seconds; current allocated memory: 691.746 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.000 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_24_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 24 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 45 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 4, loop 'VITIS_LOOP_24_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.13 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.26 seconds; current allocated memory: 692.988 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 692.988 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.13 seconds; current allocated memory: 692.988 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.988 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' pipeline 'VITIS_LOOP_24_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_22ns_24s_45_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.19 seconds; current allocated memory: 693.000 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.13 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.29 seconds; current allocated memory: 693.578 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.41 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.99 seconds; current allocated memory: 696.469 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.42 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.77 seconds; current allocated memory: 699.000 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 152.59 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:29; Allocated memory: 55.867 MB.
INFO: [HLS 200-112] Total CPU user time: 20.37 seconds. Total CPU system time: 3.77 seconds. Total elapsed time: 43.67 seconds; peak allocated memory: 699.012 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 46s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 20:52:56 2026

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
    |ap_clk  |  10.00 ns|  6.554 ns|     2.70 ns|
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
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |       43|       43|  0.430 us|  0.430 us|   40|   40|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|    6|     268|    510|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     31|    -|
|Register         |        -|    -|     230|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|    6|     498|   1154|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    2|      ~0|      2|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |        0|   4|  268|  458|    0|
    |mul_24s_22ns_45_1_1_U11                             |mul_24s_22ns_45_1_1                      |        0|   2|    0|   38|    0|
    |sparsemux_9_3_24_1_1_U12                            |sparsemux_9_3_24_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|   6|  268|  510|    0|
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
    |add_ln20_fu_200_p2       |         +|   0|  0|   14|           6|           6|
    |current_x_fu_300_p2      |         -|   0|  0|   31|           1|          24|
    |current_y_fu_306_p2      |         -|   0|  0|   31|           1|          24|
    |sub_ln20_1_fu_206_p2     |         -|   0|  0|   14|           5|           6|
    |sub_ln20_fu_184_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln20_1_fu_327_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_2_fu_332_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_fu_317_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln20_fu_252_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln20_1_fu_220_p2    |      icmp|   0|  0|   14|           6|           5|
    |icmp_ln20_2_fu_237_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln20_3_fu_270_p2    |      icmp|   0|  0|   12|          11|           5|
    |icmp_ln20_fu_194_p2      |      icmp|   0|  0|   14|           6|           5|
    |current_x_1_fu_378_p3    |    select|   0|  0|   24|           1|          24|
    |current_y_1_fu_370_p3    |    select|   0|  0|   24|           1|          24|
    |select_ln20_1_fu_212_p3  |    select|   0|  0|    6|           1|           5|
    |select_ln20_2_fu_262_p3  |    select|   0|  0|   24|           1|          24|
    |select_ln20_3_fu_284_p3  |    select|   0|  0|   24|           1|          24|
    |select_ln20_4_fu_242_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln20_fu_226_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_156_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln20_fu_278_p2       |       shl|   0|  0|   67|          24|          24|
    |xor_ln17_fu_311_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln20_fu_322_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln38_loc_fu_96                                               |  24|   0|   24|          0|
    |ap_CS_fsm                                                        |   5|   0|    5|          0|
    |current_x_1_reg_478                                              |  24|   0|   24|          0|
    |current_y_1_reg_473                                              |  24|   0|   24|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_130_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln20_1_reg_447                                              |   1|   0|    1|          0|
    |icmp_ln20_reg_434                                                |   1|   0|    1|          0|
    |next_x_loc_fu_100                                                |  24|   0|   24|          0|
    |p_ph_reg_468                                                     |  24|   0|   24|          0|
    |select_ln20_1_reg_439                                            |   9|   0|   11|          2|
    |select_ln20_2_reg_458                                            |  24|   0|   24|          0|
    |select_ln20_3_reg_463                                            |  24|   0|   24|          0|
    |tmp_3_reg_428                                                    |   1|   0|    1|          0|
    |trunc_ln20_1_reg_453                                             |  20|   0|   24|          4|
    |y_read_reg_410                                                   |  24|   0|   24|          0|
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
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 20:54:07 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.17 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.8 seconds; current allocated memory: 659.145 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 8.2 seconds. CPU system time: 1.38 seconds. Elapsed time: 11.55 seconds; current allocated memory: 660.516 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 3,552 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 351 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 157 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 102 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 83 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 81 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 87 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 92 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_2b/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_24_1> at cordiccart2pol.cpp:24:20 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.4 seconds. CPU system time: 1.12 seconds. Elapsed time: 11.87 seconds; current allocated memory: 670.211 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.211 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.305 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.02 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.305 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:8:16) to (cordiccart2pol.cpp:24:38) in function 'cordiccart2pol'... converting 7 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 691.723 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 692.008 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_24_1'.
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'sub' operation 32 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 61 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
WARNING: [HLS 200-880] The II Violation in module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' (loop 'VITIS_LOOP_24_1'): Unable to enforce a carried dependence constraint (II = 2, distance = 1, offset = 1) between 'sub' operation 32 bit ('sub_ln34', cordiccart2pol.cpp:34) and 'mul' operation 61 bit ('mul_ln30', cordiccart2pol.cpp:30).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 3, Depth = 5, loop 'VITIS_LOOP_24_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.29 seconds; current allocated memory: 692.996 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 692.996 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 692.996 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.996 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1' pipeline 'VITIS_LOOP_24_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_30ns_32s_61_2_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol_Pipeline_VITIS_LOOP_24_1'.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_Kvalues_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'cordiccart2pol_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_angles_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 693.008 MB.
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
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.2 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.45 seconds; current allocated memory: 693.691 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.57 seconds. CPU system time: 0.09 seconds. Elapsed time: 1.42 seconds; current allocated memory: 696.566 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.56 seconds. CPU system time: 0.08 seconds. Elapsed time: 1.09 seconds; current allocated memory: 699.109 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were NOT satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 139.20 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:35; Allocated memory: 55.965 MB.
INFO: [HLS 200-112] Total CPU user time: 24.27 seconds. Total CPU system time: 4.27 seconds. Total elapsed time: 52.44 seconds; peak allocated memory: 699.109 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 55s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 20:55:00 2026

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
    |       68|       68|  0.680 us|  0.680 us|   69|   69|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                                    |                                         |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                      Instance                      |                  Module                 |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +----------------------------------------------------+-----------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_132  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |       63|       63|  0.630 us|  0.630 us|   60|   60|  loop auto-rewind stp (delay=0 clock cycles(s))|
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
|Instance         |        0|   12|     852|    639|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     37|    -|
|Register         |        -|    -|     304|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        0|   12|    1156|   1372|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        0|    5|       1|      2|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |                      Instance                      |                  Module                 | BRAM_18K| DSP|  FF | LUT | URAM|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_132  |cordiccart2pol_Pipeline_VITIS_LOOP_24_1  |        0|   8|  687|  575|    0|
    |mul_32s_30ns_61_2_1_U11                             |mul_32s_30ns_61_2_1                      |        0|   4|  165|   50|    0|
    |sparsemux_9_3_32_1_1_U12                            |sparsemux_9_3_32_1_1                     |        0|   0|    0|   14|    0|
    +----------------------------------------------------+-----------------------------------------+---------+----+-----+-----+-----+
    |Total                                               |                                         |        0|  12|  852|  639|    0|
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
    |add_ln20_fu_202_p2       |         +|   0|  0|   14|           6|           6|
    |current_x_fu_312_p2      |         -|   0|  0|   39|           1|          32|
    |current_y_fu_318_p2      |         -|   0|  0|   39|           1|          32|
    |sub_ln20_1_fu_208_p2     |         -|   0|  0|   14|           5|           6|
    |sub_ln20_fu_186_p2       |         -|   0|  0|   12|          11|          11|
    |and_ln20_1_fu_339_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_2_fu_344_p2     |       and|   0|  0|    2|           1|           1|
    |and_ln20_fu_329_p2       |       and|   0|  0|    2|           1|           1|
    |ashr_ln20_fu_273_p2      |      ashr|   0|  0|  161|          54|          54|
    |icmp_ln20_1_fu_222_p2    |      icmp|   0|  0|   14|           6|           5|
    |icmp_ln20_2_fu_258_p2    |      icmp|   0|  0|   12|          11|           6|
    |icmp_ln20_3_fu_238_p2    |      icmp|   0|  0|   14|           6|           1|
    |icmp_ln20_fu_196_p2      |      icmp|   0|  0|   14|           6|           5|
    |current_x_1_fu_390_p3    |    select|   0|  0|   32|           1|          32|
    |current_y_1_fu_382_p3    |    select|   0|  0|   32|           1|          32|
    |select_ln20_1_fu_214_p3  |    select|   0|  0|    6|           1|           5|
    |select_ln20_2_fu_283_p3  |    select|   0|  0|   32|           1|          32|
    |select_ln20_3_fu_297_p3  |    select|   0|  0|   32|           1|          32|
    |select_ln20_4_fu_263_p3  |    select|   0|  0|    2|           1|           2|
    |select_ln20_fu_244_p3    |    select|   0|  0|   54|           1|          54|
    |select_ln716_fu_158_p3   |    select|   0|  0|   63|           1|          63|
    |shl_ln20_fu_291_p2       |       shl|   0|  0|  100|          32|          32|
    |xor_ln17_fu_323_p2       |       xor|   0|  0|    2|           1|           2|
    |xor_ln20_fu_334_p2       |       xor|   0|  0|    2|           1|           2|
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
    |add_ln38_loc_fu_98                                               |  32|   0|   32|          0|
    |ap_CS_fsm                                                        |   6|   0|    6|          0|
    |current_x_1_reg_494                                              |  32|   0|   32|          0|
    |current_y_1_reg_489                                              |  32|   0|   32|          0|
    |grp_cordiccart2pol_Pipeline_VITIS_LOOP_24_1_fu_132_ap_start_reg  |   1|   0|    1|          0|
    |icmp_ln20_1_reg_458                                              |   1|   0|    1|          0|
    |icmp_ln20_3_reg_464                                              |   1|   0|    1|          0|
    |icmp_ln20_reg_446                                                |   1|   0|    1|          0|
    |next_x_loc_fu_102                                                |  32|   0|   32|          0|
    |p_ph_reg_484                                                     |  32|   0|   32|          0|
    |select_ln20_1_reg_451                                            |   9|   0|   11|          2|
    |select_ln20_2_reg_474                                            |  32|   0|   32|          0|
    |select_ln20_3_reg_479                                            |  32|   0|   32|          0|
    |tmp_3_reg_440                                                    |   1|   0|    1|          0|
    |trunc_ln20_1_reg_469                                             |  28|   0|   32|          4|
    |y_read_reg_422                                                   |  32|   0|   32|          0|
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

