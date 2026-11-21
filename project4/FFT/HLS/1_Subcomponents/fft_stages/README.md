g++ -I/software/common/Xilinx_Vitis/Vitis/2024.2/include fft_stages_test.cpp fft_stages.cpp -g -o fft_stages_test.bin
./fft_stages_test.bin 2>&1 | tee fft_stages_test.log
-------------------Stage 2--------------------
   RMSE(R)           RMSE(I)
0.000000000000000 0.000000000000000
----------------------------------------------
*******************************************
Stage 2 PASS
*******************************************
-------------------Stage 3--------------------
   RMSE(R)           RMSE(I)
0.000000028709067 0.000000000000000
----------------------------------------------
*******************************************
Stage 3 PASS
*******************************************
-------------------Stage 4--------------------
   RMSE(R)           RMSE(I)
0.000000057349236 0.000000047121610
----------------------------------------------
*******************************************
Stage 4 PASS
*******************************************
-------------------Stage 5--------------------
   RMSE(R)           RMSE(I)
0.000000087524086 0.000000000000000
----------------------------------------------
*******************************************
Stage 5 PASS
*******************************************
-------------------Stage 6--------------------
   RMSE(R)           RMSE(I)
0.000000070750858 0.000000000000000
----------------------------------------------
*******************************************
Stage 6 PASS
*******************************************
-------------------Stage 7--------------------
   RMSE(R)           RMSE(I)
0.000000069964834 0.000000000000000
----------------------------------------------
*******************************************
Stage 7 PASS
*******************************************
-------------------Stage 8--------------------
   RMSE(R)           RMSE(I)
0.000000044703484 0.000000000000000
----------------------------------------------
*******************************************
Stage 8 PASS
*******************************************
-------------------Stage 9--------------------
   RMSE(R)           RMSE(I)
0.000000043603404 0.000000000000000
----------------------------------------------
*******************************************
Stage 9 PASS
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/../../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/__hls_config__.ini -i fft_stages.cpp -o fft_stages.tcl --part xc7z020clg400-1 --component fft_stages.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "fft_stages.comp/hls/syn/report/fft_stages_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl fft_stages.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Wed Nov 18 00:55:43 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.tcl'
INFO: [HLS 200-1510] Running: open_component fft_stages.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls'.
INFO: [HLS 200-10] Cleaning up the solution database.
INFO: [HLS 200-1505] Using default flow_target 'vivado'
Resolution: For help on HLS 200-1505 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-1505.html
INFO: [HLS 200-1510] Running: add_files fft_stages.cpp fft_stages.h 
INFO: [HLS 200-10] Adding design file 'fft_stages.cpp' to the project
INFO: [HLS 200-10] Adding design file 'fft_stages.h' to the project
INFO: [HLS 200-1510] Running: add_files -tb fft_stages_test.cpp out2.gold.dat out3.gold.dat out4.gold.dat out5.gold.dat out6.gold.dat out7.gold.dat out8.gold.dat out9.gold.dat 
INFO: [HLS 200-10] Adding test bench file 'fft_stages_test.cpp' to the project
INFO: [HLS 200-10] Adding test bench file 'out2.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out3.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out4.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out5.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out6.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out7.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out8.gold.dat' to the project
INFO: [HLS 200-10] Adding test bench file 'out9.gold.dat' to the project
INFO: [HLS 200-1510] Running: set_top fft_stages 
Running: set_top fft_stages
INFO: [HLS 200-1510] Running: set_part xc7z020clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: source directives.tcl
INFO: [HLS 200-1510] Running: csynth_design 
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.14 seconds. CPU system time: 0.07 seconds. Elapsed time: 7.77 seconds; current allocated memory: 659.250 MB.
INFO: [HLS 200-10] Analyzing design file 'fft_stages.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.59 seconds. CPU system time: 0.92 seconds. Elapsed time: 1.62 seconds; current allocated memory: 660.641 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 63 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 61 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 51 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 53 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 71 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 76 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages/fft_stages.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 4.04 seconds. CPU system time: 1.15 seconds. Elapsed time: 9.67 seconds; current allocated memory: 670.227 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 670.227 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.04 seconds; current allocated memory: 670.340 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.02 seconds; current allocated memory: 670.402 MB.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 690.812 MB.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_R'.
WARNING: [ANALYSIS 214-52] Found false 'WAW' inter dependency for variable 'OUT_I'.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.06 seconds; current allocated memory: 691.777 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'fft_stages' ...
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages_Pipeline_VITIS_LOOP_21_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_21_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = 1, Final II = 1, Depth = 20, loop 'VITIS_LOOP_21_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.12 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.25 seconds; current allocated memory: 692.773 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.773 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'fft_stages' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 692.773 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 692.773 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages_Pipeline_VITIS_LOOP_21_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'fft_stages_Pipeline_VITIS_LOOP_21_1' pipeline 'VITIS_LOOP_21_1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 3 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages_Pipeline_VITIS_LOOP_21_1'.
INFO: [RTMG 210-279] Implementing memory 'fft_stages_fft_stages_Pipeline_VITIS_LOOP_21_1_W_real_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'fft_stages_fft_stages_Pipeline_VITIS_LOOP_21_1_W_imag_ROM_AUTO_1R' using auto ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.18 seconds; current allocated memory: 692.777 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'fft_stages' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'fft_stages/X_R' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft_stages/X_I' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft_stages/stage' to 'ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft_stages/OUT_R' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'fft_stages/OUT_I' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'fft_stages' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Finished creating RTL model for 'fft_stages'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.17 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.29 seconds; current allocated memory: 693.363 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.34 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.74 seconds; current allocated memory: 696.566 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.58 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.88 seconds; current allocated memory: 699.246 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for fft_stages.
INFO: [VLOG 209-307] Generating Verilog RTL for fft_stages.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:21; Allocated memory: 56.012 MB.
INFO: [HLS 200-112] Total CPU user time: 13.41 seconds. Total CPU system time: 4.18 seconds. Total elapsed time: 34.72 seconds; peak allocated memory: 699.262 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 37s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch fft_stages.comp/.csynth
cp -f fft_stages.comp/hls/syn/report/fft_stages_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project4/FFT/HLS/1_Subcomponents/fft_stages


================================================================
== Vitis HLS Report for 'fft_stages'
================================================================
* Date:           Wed Nov 18 00:56:18 2026

* Version:        2024.2 (Build 5238294 on Nov  8 2024)
* Project:        fft_stages.comp
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
    |      534|      534|  5.340 us|  5.340 us|  535|  535|       no|
    +---------+---------+----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------------+-------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                                               |                                     |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |                    Instance                   |                Module               |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-----------------------------------------------+-------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_fft_stages_Pipeline_VITIS_LOOP_21_1_fu_48  |fft_stages_Pipeline_VITIS_LOOP_21_1  |      532|      532|  5.320 us|  5.320 us|  512|  512|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-----------------------------------------------+-------------------------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|    192|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        2|   24|    2722|   4127|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|     20|    -|
|Register         |        -|    -|     128|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        2|   24|    2850|   4339|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       ~0|   10|       2|      8|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------------+-------------------------------------+---------+----+------+------+-----+
    |                    Instance                   |                Module               | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +-----------------------------------------------+-------------------------------------+---------+----+------+------+-----+
    |grp_fft_stages_Pipeline_VITIS_LOOP_21_1_fu_48  |fft_stages_Pipeline_VITIS_LOOP_21_1  |        2|  24|  2722|  4127|    0|
    +-----------------------------------------------+-------------------------------------+---------+----+------+------+-----+
    |Total                                          |                                     |        2|  24|  2722|  4127|    0|
    +-----------------------------------------------+-------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +-------------------+----------+----+---+-----+------------+------------+
    |   Variable Name   | Operation| DSP| FF| LUT | Bitwidth P0| Bitwidth P1|
    +-------------------+----------+----+---+-----+------------+------------+
    |add_ln17_fu_69_p2  |         +|   0|  0|   39|          32|           2|
    |sub3_fu_95_p2      |         +|   0|  0|   14|           9|           2|
    |shift_fu_89_p2     |         -|   0|  0|   39|           4|          32|
    |half_fu_75_p2      |       shl|   0|  0|  100|           1|          32|
    +-------------------+----------+----+---+-----+------------+------------+
    |Total              |          |   0|  0|  192|          46|          68|
    +-------------------+----------+----+---+-----+------------+------------+

    * Multiplexer: 
    +-----------+----+-----------+-----+-----------+
    |    Name   | LUT| Input Size| Bits| Total Bits|
    +-----------+----+-----------+-----+-----------+
    |ap_NS_fsm  |  20|          4|    1|          4|
    +-----------+----+-----------+-----+-----------+
    |Total      |  20|          4|    1|          4|
    +-----------+----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------------+----+----+-----+-----------+
    |                            Name                            | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------------+----+----+-----+-----------+
    |add_ln17_reg_107                                            |  32|   0|   32|          0|
    |ap_CS_fsm                                                   |   3|   0|    3|          0|
    |grp_fft_stages_Pipeline_VITIS_LOOP_21_1_fu_48_ap_start_reg  |   1|   0|    1|          0|
    |shift_reg_122                                               |  32|   0|   32|          0|
    |stage_read_reg_101                                          |  32|   0|   32|          0|
    |sub3_reg_127                                                |   9|   0|    9|          0|
    |trunc_ln17_1_reg_117                                        |   9|   0|    9|          0|
    |trunc_ln17_reg_112                                          |  10|   0|   10|          0|
    +------------------------------------------------------------+----+----+-----+-----------+
    |Total                                                       | 128|   0|  128|          0|
    +------------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+----------------+-----+-----+------------+--------------+--------------+
|    RTL Ports   | Dir | Bits|  Protocol  | Source Object|    C Type    |
+----------------+-----+-----+------------+--------------+--------------+
|ap_clk          |   in|    1|  ap_ctrl_hs|    fft_stages|  return value|
|ap_rst          |   in|    1|  ap_ctrl_hs|    fft_stages|  return value|
|ap_start        |   in|    1|  ap_ctrl_hs|    fft_stages|  return value|
|ap_done         |  out|    1|  ap_ctrl_hs|    fft_stages|  return value|
|ap_idle         |  out|    1|  ap_ctrl_hs|    fft_stages|  return value|
|ap_ready        |  out|    1|  ap_ctrl_hs|    fft_stages|  return value|
|X_R_address0    |  out|   10|   ap_memory|           X_R|         array|
|X_R_ce0         |  out|    1|   ap_memory|           X_R|         array|
|X_R_q0          |   in|   32|   ap_memory|           X_R|         array|
|X_R_address1    |  out|   10|   ap_memory|           X_R|         array|
|X_R_ce1         |  out|    1|   ap_memory|           X_R|         array|
|X_R_q1          |   in|   32|   ap_memory|           X_R|         array|
|X_I_address0    |  out|   10|   ap_memory|           X_I|         array|
|X_I_ce0         |  out|    1|   ap_memory|           X_I|         array|
|X_I_q0          |   in|   32|   ap_memory|           X_I|         array|
|X_I_address1    |  out|   10|   ap_memory|           X_I|         array|
|X_I_ce1         |  out|    1|   ap_memory|           X_I|         array|
|X_I_q1          |   in|   32|   ap_memory|           X_I|         array|
|stage           |   in|   32|     ap_none|         stage|        scalar|
|OUT_R_address0  |  out|   10|   ap_memory|         OUT_R|         array|
|OUT_R_ce0       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_we0       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_d0        |  out|   32|   ap_memory|         OUT_R|         array|
|OUT_R_address1  |  out|   10|   ap_memory|         OUT_R|         array|
|OUT_R_ce1       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_we1       |  out|    1|   ap_memory|         OUT_R|         array|
|OUT_R_d1        |  out|   32|   ap_memory|         OUT_R|         array|
|OUT_I_address0  |  out|   10|   ap_memory|         OUT_I|         array|
|OUT_I_ce0       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_we0       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_d0        |  out|   32|   ap_memory|         OUT_I|         array|
|OUT_I_address1  |  out|   10|   ap_memory|         OUT_I|         array|
|OUT_I_ce1       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_we1       |  out|    1|   ap_memory|         OUT_I|         array|
|OUT_I_d1        |  out|   32|   ap_memory|         OUT_I|         array|
+----------------+-----+-----+------------+--------------+--------------+

rm fft_stages_test.bin
