LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir.cpp -g -o fir_test.bin
./fir_test.bin > fir_test.log 2>&1 || { s=$?; echo "./fir_test.bin > fir_test.log failed $s" >&2; exit $s; }
rm fir_test.bin

/home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/__hls_config__.ini -i fir.cpp -o fir.tcl
vitis-run --mode hls --tcl  fir.tcl || { s=$?; echo "vitis-run --mode hls --tcl  fir.tcl failed $s" >&2; exit $s; }

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 00:43:09 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.tcl'
INFO: [HLS 200-1510] Running: open_component fir.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.04 seconds. Elapsed time: 7.72 seconds; current allocated memory: 659.004 MB.
INFO: [HLS 200-10] Analyzing design file 'fir.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.4 seconds. CPU system time: 0.72 seconds. Elapsed time: 1.26 seconds; current allocated memory: 659.938 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 43 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 30 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 27 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 26 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 25 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 29 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 34 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128/fir.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-376] automatically set the pipeline for Loop< Shift_Accum_Loop> at fir.cpp:29:2 
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 3.45 seconds. CPU system time: 0.85 seconds. Elapsed time: 8.94 seconds; current allocated memory: 669.637 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 669.637 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.01 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 669.922 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0.02 seconds; current allocated memory: 669.941 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 690.379 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.04 seconds; current allocated memory: 691.164 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fir' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Shift_Accum_Loop'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 5, loop 'Shift_Accum_Loop'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.16 seconds; current allocated memory: 691.648 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 691.648 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.06 seconds; current allocated memory: 691.648 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.05 seconds; current allocated memory: 691.648 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir_Pipeline_Shift_Accum_Loop' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fir_Pipeline_Shift_Accum_Loop' pipeline 'Shift_Accum_Loop' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'mul_6s_32s_32_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir_Pipeline_Shift_Accum_Loop'.
INFO: [RTMG 210-278] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_shift_reg_RAM_AUTO_1R1W' using auto RAMs.
INFO: [RTMG 210-279] Implementing memory 'fir_fir_Pipeline_Shift_Accum_Loop_fir_int_int_c_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 692.164 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fir' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/y' to 'ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fir/x' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fir' to 'ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Global array 'fir_int_int_c' will not be exposed as RTL port.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fir'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.16 seconds; current allocated memory: 692.164 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.32 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.56 seconds; current allocated memory: 693.477 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.33 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.58 seconds; current allocated memory: 695.465 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fir.
INFO: [VLOG 209-307] Generating Verilog RTL for fir.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 144.68 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:19; Allocated memory: 52.461 MB.
INFO: [HLS 200-112] Total CPU user time: 12.46 seconds. Total CPU system time: 3.42 seconds. Total elapsed time: 33.57 seconds; peak allocated memory: 695.465 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 35s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.

cp -f fir.comp/hls/syn/report/fir_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project1/fir128 || true



================================================================
== Vitis HLS Report for 'fir'
================================================================
* Date:           Thu Oct  8 00:43:43 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        fir.comp
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
    |ap_clk  |  10.00 ns|  6.912 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +---------+---------+----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute) |  Interval | Pipeline|
    |   min   |   max   |    min   |    max   | min | max |   Type  |
    +---------+---------+----------+----------+-----+-----+---------+
    |      135|      135|  1.350 us|  1.350 us|  136|  136|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------+-------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                         |                               |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                 Instance                |             Module            |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-----------------------------------------+-------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_fir_Pipeline_Shift_Accum_Loop_fu_53  |fir_Pipeline_Shift_Accum_Loop  |      133|      133|  1.330 us|  1.330 us|  128|  128|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-----------------------------------------+-------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|     39|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        3|    2|     510|    246|    0|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     20|    -|
|Register         |        -|    -|     100|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        3|    2|     610|    305|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        1|   ~0|      ~0|     ~0|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------+-------------------------------+---------+----+-----+-----+-----+
    |                 Instance                |             Module            | BRAM_18K| DSP|  FF | LUT | URAM|
    +-----------------------------------------+-------------------------------+---------+----+-----+-----+-----+
    |grp_fir_Pipeline_Shift_Accum_Loop_fu_53  |fir_Pipeline_Shift_Accum_Loop  |        3|   2|  510|  246|    0|
    +-----------------------------------------+-------------------------------+---------+----+-----+-----+-----+
    |Total                                    |                               |        3|   2|  510|  246|    0|
    +-----------------------------------------+-------------------------------+---------+----+-----+-----+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +--------------+----------+----+---+----+------------+------------+
    | Variable Name| Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +--------------+----------+----+---+----+------------+------------+
    |mul_fu_77_p2  |         +|   0|  0|  39|          32|          32|
    +--------------+----------+----+---+----+------------+------------+
    |Total         |          |   0|  0|  39|          32|          32|
    +--------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  20|          4|    1|          4|
    +-----------+----+-----------+-----+-----------+
    |Total      |  20|          4|    1|          4|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------+----+----+-----+-----------+
    |                         Name                         | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------+----+----+-----+-----------+
    |acc_1_loc_fu_36                                       |  32|   0|   32|          0|
    |ap_CS_fsm                                             |   3|   0|    3|          0|
    |grp_fir_Pipeline_Shift_Accum_Loop_fu_53_ap_start_reg  |   1|   0|    1|          0|
    |mul_reg_99                                            |  32|   0|   32|          0|
    |x_read_reg_88                                         |  32|   0|   32|          0|
    +------------------------------------------------------+----+----+-----+-----------+
    |Total                                                 | 100|   0|  100|          0|
    +------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+----------+-----+-----+------------+--------------+--------------+
| RTL Ports| Dir | Bits|  Protocol  | Source Object|    C Type    |
+----------+-----+-----+------------+--------------+--------------+
|ap_clk    |   in|    1|  ap_ctrl_hs|           fir|  return value|
|ap_rst    |   in|    1|  ap_ctrl_hs|           fir|  return value|
|ap_start  |   in|    1|  ap_ctrl_hs|           fir|  return value|
|ap_done   |  out|    1|  ap_ctrl_hs|           fir|  return value|
|ap_idle   |  out|    1|  ap_ctrl_hs|           fir|  return value|
|ap_ready  |  out|    1|  ap_ctrl_hs|           fir|  return value|
|y         |  out|   32|      ap_vld|             y|       pointer|
|y_ap_vld  |  out|    1|      ap_vld|             y|       pointer|
|x         |   in|   32|     ap_none|             x|        scalar|
+----------+-----+-----+------------+--------------+--------------+

