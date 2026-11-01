----------------------------------------------
   RMSE(R)           RMSE(I)
0.002167032565922 0.005604852456599
----------------------------------------------
*******************************************
PASS: The output matches the golden output!
*******************************************
python3 /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/__hls_config__.ini -i dft.cpp -o dft.tcl --part xc7z020clg400-1 --component dft.comp 
sh /home/linux/ieng6/students/519/gam009/wes237c/scripts/run_checked.sh "dft.comp/hls/syn/report/dft_csynth.rpt" "HLS synthesis" vitis-run --mode hls --tcl dft.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Sun Nov  1 12:22:11 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.tcl'
INFO: [HLS 200-1510] Running: open_component dft.comp -reset 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.13 seconds. CPU system time: 0.05 seconds. Elapsed time: 2.73 seconds; current allocated memory: 659.223 MB.
INFO: [HLS 200-10] Analyzing design file 'dft.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 4.43 seconds. CPU system time: 0.95 seconds. Elapsed time: 5.56 seconds; current allocated memory: 660.562 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 22,090 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,686 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 919 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 890 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 606 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 690 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 586 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 586 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 580 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 688 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 618 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 630 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 661 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6/dft.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::fp_struct(double)' into 'void range_redux_payne_hanek_hotbm<61, double, 63, 63>(double, ap_uint<3>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_int<fp_struct<double>::EXP_BITS>&)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_range_redux.h:437:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::expv() const' into 'void range_redux_payne_hanek_hotbm<61, double, 63, 63>(double, ap_uint<3>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_int<fp_struct<double>::EXP_BITS>&)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_range_redux.h:437:0)
INFO: [HLS 214-178] Inlining function 'ap_uint<(((2) * ((52) + (1))) + (61)) + (3)> table_lookup_4oPi_hotbm<52, 61>(int, double)' into 'void range_redux_payne_hanek_hotbm<61, double, 63, 63>(double, ap_uint<3>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_int<fp_struct<double>::EXP_BITS>&)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_range_redux.h:437:0)
INFO: [HLS 214-178] Inlining function 'unsigned int clz<61, 124, 0>(ap_ufixed<124, 0, (ap_q_mode)5, (ap_o_mode)3, 0>)' into 'void range_redux_payne_hanek_hotbm<61, double, 63, 63>(double, ap_uint<3>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_int<fp_struct<double>::EXP_BITS>&)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_range_redux.h:437:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::data() const (.47.56.67.76)' into 'fp_struct<double>::to_double() const (.44.53.64.73)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:494:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::to_double() const (.44.53.64.73)' into 'fp_struct<double>::to_ieee() const' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:509:0)
INFO: [HLS 214-178] Inlining function 'clz(int) (.39412)' into 'void scaled_fixed2ieee<63, 1>(ap_ufixed<63, 1, (ap_q_mode)5, (ap_o_mode)3, 0>, double&, int)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:390:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::set_mantissa(ap_ufixed<53, 1, (ap_q_mode)5, (ap_o_mode)3, 0>)' into 'void scaled_fixed2ieee<63, 1>(ap_ufixed<63, 1, (ap_q_mode)5, (ap_o_mode)3, 0>, double&, int)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:390:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::to_ieee() const' into 'void scaled_fixed2ieee<63, 1>(ap_ufixed<63, 1, (ap_q_mode)5, (ap_o_mode)3, 0>, double&, int)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:390:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::fp_struct(double)' into 'double hotbm_::sin_or_cos<double>(double, bool, bool)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:210:0)
INFO: [HLS 214-178] Inlining function 'void range_redux_payne_hanek_hotbm<61, double, 63, 63>(double, ap_uint<3>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_int<fp_struct<double>::EXP_BITS>&)' into 'double hotbm_::sin_or_cos<double>(double, bool, bool)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:210:0)
INFO: [HLS 214-178] Inlining function 'ap_ufixed<63, 1, (ap_q_mode)5, (ap_o_mode)3, 0> hotbm_::value_list<double>::sin_or_cos_approximation<63, 63>(bool, ap_uint<3>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_ufixed<63, 0, (ap_q_mode)5, (ap_o_mode)3, 0>&, ap_int<11>&)' into 'double hotbm_::sin_or_cos<double>(double, bool, bool)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:210:0)
INFO: [HLS 214-178] Inlining function 'void scaled_fixed2ieee<63, 1>(ap_ufixed<63, 1, (ap_q_mode)5, (ap_o_mode)3, 0>, double&, int)' into 'double hotbm_::sin_or_cos<double>(double, bool, bool)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:210:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<double>::to_ieee() const' into 'double hotbm_::sin_or_cos<double>(double, bool, bool)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:210:0)
INFO: [HLS 214-178] Inlining function 'hotbm_::cos(double)' into 'cos' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/sincosdouble.cpp:12:0)
INFO: [HLS 214-178] Inlining function 'hotbm_::sin(double)' into 'sin' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/sincosdouble.cpp:7:0)
INFO: [HLS 214-178] Inlining function 'cos' into 'dft(float*, float*, float*, float*)' (dft.cpp:6:0)
INFO: [HLS 214-178] Inlining function 'sin' into 'dft(float*, float*, float*, float*)' (dft.cpp:6:0)
INFO: [HLS 214-248] Applying array_partition to '_ZZN6hotbm_10value_listIdE24sin_or_cos_approximationILi63ELi63EEE9ap_ufixedIXT_ELi1EL9ap_q_mode5EL9ap_o_mode3ELi0EEbR7ap_uintILi3EERS3_IXT_ELi0ELS4_5ELS5_3ELi0EERS3_IXT0_ELi0ELS4_5ELS5_3ELi0EER6ap_intILi11EEE10swap_table': Complete partitioning on dimension 1. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/common/hls_hotbm_double.cpp:14:0)
INFO: [HLS 214-248] Applying array_partition to '_ZZN6hotbm_10sin_or_cosIdEET_S1_bbE13neg_cos_table': Complete partitioning on dimension 1. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:217:0)
INFO: [HLS 214-248] Applying array_partition to '_ZZN6hotbm_10sin_or_cosIdEET_S1_bbE13neg_sin_table': Complete partitioning on dimension 1. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:216:0)
INFO: [HLS 214-248] Applying array_partition to '_ZZN6hotbm_10sin_or_cosIdEET_S1_bbE10swap_table': Complete partitioning on dimension 1. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:215:0)
WARNING: [HLS 214-358] Array transformation on index using bit extension logic may lead to poor performance. Please use int or long for array index computation to benefit from optimizations. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:242:30)
WARNING: [HLS 214-358] Array transformation on index using bit extension logic may lead to poor performance. Please use int or long for array index computation to benefit from optimizations. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/common/hls_hotbm_double.cpp:29:67)
WARNING: [HLS 214-358] Array transformation on index using bit extension logic may lead to poor performance. Please use int or long for array index computation to benefit from optimizations. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:267:8)
INFO: [HLS 214-376] automatically set the pipeline for Loop< unknown> at /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:421:5 
INFO: [HLS 214-376] automatically set the pipeline for Loop< unknown> at /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:414:5 
INFO: [HLS 214-376] automatically set the pipeline for Loop< unknown> at /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:401:5 
INFO: [HLS 214-376] automatically set the pipeline for Loop< unknown> at /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:41 
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_22_3> at dft.cpp:22:20 
INFO: [HLS 214-421] Automatically partitioning small array 'out_bits' completely based on array size. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:17)
INFO: [HLS 214-421] Automatically partitioning small array 'c' completely based on array size. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:413:9)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=1' for array 'out_bits.i' due to pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:17)
INFO: [HLS 214-270] Inferring pragma 'array_partition type=complete dim=1' for array 'c.i' due to pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:413:9)
INFO: [HLS 214-248] Applying array_partition to 'out_bits.i': Complete partitioning on dimension 1. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:17)
INFO: [HLS 214-248] Applying array_partition to 'c.i': Complete partitioning on dimension 1. (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:413:9)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 5.7 seconds. CPU system time: 1.16 seconds. Elapsed time: 10.6 seconds; current allocated memory: 671.652 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0.01 seconds. Elapsed time: 0 seconds; current allocated memory: 671.652 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 674.426 MB.
INFO: [HLS 200-10] Checking synthesizability ...
WARNING: [SYNCHK 200-23] /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:403: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 678.191 MB.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:17) to (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:41) in function 'hotbm_::sin_or_cos<double>'... converting 5 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:209:18) to (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:400:41) in function 'hotbm_::sin_or_cos<double>'... converting 3 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:252:40) to (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:287:5) in function 'hotbm_::sin_or_cos<double>'... converting 9 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.19 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.25 seconds; current allocated memory: 702.535 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.17 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.21 seconds; current allocated memory: 753.789 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'dft' ...
WARNING: [SYN 201-103] Legalizing function name 'sin_or_cos<double>_Pipeline_1' to 'sin_or_cos_double_Pipeline_1'.
WARNING: [SYN 201-103] Legalizing function name 'sin_or_cos<double>_Pipeline_2' to 'sin_or_cos_double_Pipeline_2'.
WARNING: [SYN 201-103] Legalizing function name 'sin_or_cos<double>_Pipeline_3' to 'sin_or_cos_double_Pipeline_3'.
WARNING: [SYN 201-103] Legalizing function name 'sin_or_cos<double>_Pipeline_4' to 'sin_or_cos_double_Pipeline_4'.
WARNING: [SYN 201-103] Legalizing function name 'sin_or_cos<double>' to 'sin_or_cos_double_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'sin_or_cos_double_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.2 seconds; current allocated memory: 754.746 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 754.746 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'sin_or_cos_double_Pipeline_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 754.762 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 754.762 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'sin_or_cos_double_Pipeline_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 754.762 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 754.762 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'sin_or_cos_double_Pipeline_4' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'Loop 1'.
WARNING: [HLS 200-880] The II Violation in module 'sin_or_cos_double_Pipeline_4' (loop 'Loop 1'): Unable to enforce a carried dependence constraint (II = 1, distance = 1, offset = 1) between 'store' operation 0 bit ('in_shift_1_write_ln419', /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:419->/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:252) of variable 'in_shift', /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:423->/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:252 on local variable 'in_shift', /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:419->/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:252 and 'select' operation 63 bit ('in_shift', /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_float_utils.h:423->/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_hotbm.h:252).
Resolution: For help on HLS 200-880 see docs.xilinx.com/access/sources/dita/topic?Doc_Version=2024.2%20English&url=ug1448-hls-guidance&resourceid=200-880.html
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 2, Depth = 3, loop 'Loop 1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 754.770 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 754.770 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'sin_or_cos_double_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.2 seconds; current allocated memory: 756.035 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 756.035 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft_Pipeline_VITIS_LOOP_22_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_22_3'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 2, loop 'VITIS_LOOP_22_3'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 756.578 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 756.578 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 757.082 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.1 seconds; current allocated memory: 757.082 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'sin_or_cos_double_Pipeline_1' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'sin_or_cos_double_Pipeline_1'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.12 seconds; current allocated memory: 757.145 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'sin_or_cos_double_Pipeline_2' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'partselect_16ns_63ns_32ns_16_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'sin_or_cos_double_Pipeline_2'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.17 seconds; current allocated memory: 758.000 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'sin_or_cos_double_Pipeline_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'ctlz_32_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_2_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'sin_or_cos_double_Pipeline_3'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.1 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.2 seconds; current allocated memory: 759.000 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'sin_or_cos_double_Pipeline_4' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'sin_or_cos_double_Pipeline_4' pipeline 'Loop 1' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_2_32_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'sin_or_cos_double_Pipeline_4'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.2 seconds; current allocated memory: 760.188 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'sin_or_cos_double_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'ctlz_62_62_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_170s_53ns_170_5_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_35ns_25ns_60_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_42ns_33ns_75_2_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_49ns_44s_93_5_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_49ns_49ns_98_5_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_56ns_52s_108_5_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'mul_64s_63ns_126_5_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_17_3_1_1_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_33_4_1_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'sin_or_cos_double_s'.
INFO: [RTMG 210-279] Implementing memory 'dft_sin_or_cos_double_s_ref_4oPi_table_256_ROM_AUTO_1R' using auto ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_sin_or_cos_double_s_fourth_order_double_sin_cos_K0_ROM_1P_LUTRAM_1R' using distributed ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_sin_or_cos_double_s_fourth_order_double_sin_cos_K1_ROM_1P_LUTRAM_1R' using distributed ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_sin_or_cos_double_s_fourth_order_double_sin_cos_K2_ROM_1P_LUTRAM_1R' using distributed ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_sin_or_cos_double_s_fourth_order_double_sin_cos_K3_ROM_1P_LUTRAM_1R' using distributed ROMs.
INFO: [RTMG 210-279] Implementing memory 'dft_sin_or_cos_double_s_fourth_order_double_sin_cos_K4_ROM_1P_LUTRAM_1R' using distributed ROMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.23 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.49 seconds; current allocated memory: 764.277 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft_Pipeline_VITIS_LOOP_22_3' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'dft_Pipeline_VITIS_LOOP_22_3' pipeline 'VITIS_LOOP_22_3' pipeline type 'loop pipeline'
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft_Pipeline_VITIS_LOOP_22_3'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.27 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.42 seconds; current allocated memory: 767.027 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'dft' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_sample' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/real_op' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on port 'dft/imag_op' to 'ap_memory'.
INFO: [RTGEN 206-500] Setting interface mode on function 'dft' to 'ap_ctrl_hs'.
INFO: [RTGEN 206-100] Generating core module 'dadd_64ns_64ns_64_7_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'dadddsub_64ns_64ns_64_7_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'dmul_64ns_64ns_64_7_max_dsp_1': 4 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fpext_32ns_64_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fptrunc_64ns_32_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sitodp_32ns_64_6_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'dft'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.18 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.41 seconds; current allocated memory: 769.750 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.43 seconds. CPU system time: 0.21 seconds. Elapsed time: 1.64 seconds; current allocated memory: 772.285 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 0.61 seconds. CPU system time: 0.1 seconds. Elapsed time: 0.95 seconds; current allocated memory: 777.113 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for dft.
INFO: [VLOG 209-307] Generating Verilog RTL for dft.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.04 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:25; Allocated memory: 134.164 MB.
INFO: [HLS 200-112] Total CPU user time: 20.72 seconds. Total CPU system time: 4.67 seconds. Total elapsed time: 41.63 seconds; peak allocated memory: 777.387 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 0m 43s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
touch dft.comp/.csynth
cp -f dft.comp/hls/syn/report/dft_csynth.rpt /home/linux/ieng6/students/519/gam009/wes237c/project3/Q6


================================================================
== Vitis HLS Report for 'dft'
================================================================
* Date:           Sun Nov  1 12:22:51 2026

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
    |ap_clk  |  10.00 ns|  7.297 ns|     2.70 ns|
    +--------+----------+----------+------------+

+ Latency: 
    * Summary: 
    +----------+-----------+-----------+-----------+----------+-----------+---------+
    |   Latency (cycles)   |   Latency (absolute)  |       Interval       | Pipeline|
    |    min   |    max    |    min    |    max    |    min   |    max    |   Type  |
    +----------+-----------+-----------+-----------+----------+-----------+---------+
    |  98588676|  104880132|  0.986 sec|  1.049 sec|  98588677|  104880133|       no|
    +----------+-----------+-----------+-----------+----------+-----------+---------+

    + Detail: 
        * Instance: 
        +-----------------------------------------+------------------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |                                         |                              |  Latency (cycles) |   Latency (absolute)  |   Interval  |                    Pipeline                    |
        |                 Instance                |            Module            |   min   |   max   |    min    |    max    |  min |  max |                      Type                      |
        +-----------------------------------------+------------------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |grp_dft_Pipeline_VITIS_LOOP_22_3_fu_168  |dft_Pipeline_VITIS_LOOP_22_3  |     1026|     1026|  10.260 us|  10.260 us|  1025|  1025|  loop auto-rewind stp (delay=0 clock cycles(s))|
        |grp_sin_or_cos_double_s_fu_180           |sin_or_cos_double_s           |       56|       62|   0.560 us|   0.620 us|    56|    62|                                              no|
        |grp_sin_or_cos_double_s_fu_199           |sin_or_cos_double_s           |       56|       62|   0.560 us|   0.620 us|    56|    62|                                              no|
        +-----------------------------------------+------------------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+

        * Loop: 
        +--------------------+----------+-----------+----------------+-----------+-----------+------+----------+
        |                    |   Latency (cycles)   |    Iteration   |  Initiation Interval  | Trip |          |
        |      Loop Name     |    min   |    max    |     Latency    |  achieved |   target  | Count| Pipelined|
        +--------------------+----------+-----------+----------------+-----------+-----------+------+----------+
        |- VITIS_LOOP_7_1    |  98587648|  104879104|  96277 ~ 102421|          -|          -|  1024|        no|
        | + VITIS_LOOP_13_2  |     96256|     102400|        94 ~ 100|          -|          -|  1024|        no|
        +--------------------+----------+-----------+----------------+-----------+-----------+------+----------+



================================================================
== Utilization Estimates
================================================================
* Summary: 
+-----------------+---------+-----+--------+-------+-----+
|       Name      | BRAM_18K| DSP |   FF   |  LUT  | URAM|
+-----------------+---------+-----+--------+-------+-----+
|DSP              |        -|    -|       -|      -|    -|
|Expression       |        -|    -|       0|     52|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |       16|  220|   13777|  17416|    -|
|Memory           |        -|    -|       -|      -|    -|
|Multiplexer      |        -|    -|       0|    544|    -|
|Register         |        -|    -|    1014|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       16|  220|   14791|  18012|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        5|  100|      13|     33|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-----------------------------------------+------------------------------------+---------+----+------+------+-----+
    |                 Instance                |               Module               | BRAM_18K| DSP|  FF  |  LUT | URAM|
    +-----------------------------------------+------------------------------------+---------+----+------+------+-----+
    |dadd_64ns_64ns_64_7_full_dsp_1_U73       |dadd_64ns_64ns_64_7_full_dsp_1      |        0|   3|   630|  1141|    0|
    |dadddsub_64ns_64ns_64_7_full_dsp_1_U72   |dadddsub_64ns_64ns_64_7_full_dsp_1  |        0|   3|   630|  1141|    0|
    |grp_dft_Pipeline_VITIS_LOOP_22_3_fu_168  |dft_Pipeline_VITIS_LOOP_22_3        |        0|   0|    25|    62|    0|
    |dmul_64ns_64ns_64_7_max_dsp_1_U74        |dmul_64ns_64ns_64_7_max_dsp_1       |        0|  11|   342|   586|    0|
    |dmul_64ns_64ns_64_7_max_dsp_1_U75        |dmul_64ns_64ns_64_7_max_dsp_1       |        0|  11|   342|   586|    0|
    |dmul_64ns_64ns_64_7_max_dsp_1_U76        |dmul_64ns_64ns_64_7_max_dsp_1       |        0|  11|   342|   586|    0|
    |dmul_64ns_64ns_64_7_max_dsp_1_U77        |dmul_64ns_64ns_64_7_max_dsp_1       |        0|  11|   342|   586|    0|
    |fpext_32ns_64_2_no_dsp_1_U70             |fpext_32ns_64_2_no_dsp_1            |        0|   0|     0|     0|    0|
    |fpext_32ns_64_2_no_dsp_1_U71             |fpext_32ns_64_2_no_dsp_1            |        0|   0|     0|     0|    0|
    |fptrunc_64ns_32_2_no_dsp_1_U68           |fptrunc_64ns_32_2_no_dsp_1          |        0|   0|     0|     0|    0|
    |fptrunc_64ns_32_2_no_dsp_1_U69           |fptrunc_64ns_32_2_no_dsp_1          |        0|   0|     0|     0|    0|
    |grp_sin_or_cos_double_s_fu_180           |sin_or_cos_double_s                 |        8|  85|  5562|  6364|    0|
    |grp_sin_or_cos_double_s_fu_199           |sin_or_cos_double_s                 |        8|  85|  5562|  6364|    0|
    |sitodp_32ns_64_6_no_dsp_1_U78            |sitodp_32ns_64_6_no_dsp_1           |        0|   0|     0|     0|    0|
    +-----------------------------------------+------------------------------------+---------+----+------+------+-----+
    |Total                                    |                                    |       16| 220| 13777| 17416|    0|
    +-----------------------------------------+------------------------------------+---------+----+------+------+-----+

    * DSP: 
    N/A

    * Memory: 
    N/A

    * FIFO: 
    N/A

    * Expression: 
    +----------------------------------+----------+----+---+----+------------+------------+
    |           Variable Name          | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +----------------------------------+----------+----+---+----+------------+------------+
    |add_ln13_fu_343_p2                |         +|   0|  0|  12|          11|           1|
    |add_ln7_fu_319_p2                 |         +|   0|  0|  12|          11|           1|
    |icmp_ln13_fu_337_p2               |      icmp|   0|  0|  12|          11|          12|
    |icmp_ln7_fu_313_p2                |      icmp|   0|  0|  12|          11|          12|
    |ap_block_state36_on_subcall_done  |        or|   0|  0|   2|           1|           1|
    |xor_ln15_fu_398_p2                |       xor|   0|  0|   2|           1|           2|
    +----------------------------------+----------+----+---+----+------------+------------+
    |Total                             |          |   0|  0|  52|          46|          29|
    +----------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +----------------------+-----+-----------+-----+-----------+
    |         Name         | LUT | Input Size| Bits| Total Bits|
    +----------------------+-----+-----------+-----+-----------+
    |ap_NS_fsm             |  261|         61|    1|         61|
    |conv234_reg_156       |    9|          2|   32|         64|
    |conv375_reg_144       |    9|          2|   32|         64|
    |grp_fu_224_p0         |   14|          3|   32|         96|
    |grp_fu_227_p0         |   14|          3|   32|         96|
    |grp_fu_232_opcode     |   14|          3|    2|          6|
    |grp_fu_232_p0         |   14|          3|   64|        192|
    |grp_fu_232_p1         |   14|          3|   64|        192|
    |grp_fu_236_p0         |   14|          3|   64|        192|
    |grp_fu_236_p1         |   14|          3|   64|        192|
    |grp_fu_240_p0         |   20|          4|   64|        256|
    |grp_fu_240_p1         |   25|          5|   64|        320|
    |grp_fu_258_p0         |   14|          3|   32|         96|
    |imag_op_address0      |    9|          2|   10|         20|
    |imag_op_ce0           |    9|          2|    1|          2|
    |imag_sample_address0  |    9|          2|   10|         20|
    |imag_sample_ce0       |    9|          2|    1|          2|
    |imag_sample_we0       |    9|          2|    1|          2|
    |k_fu_76               |    9|          2|   11|         22|
    |n_reg_132             |    9|          2|   11|         22|
    |real_op_address0      |    9|          2|   10|         20|
    |real_op_ce0           |    9|          2|    1|          2|
    |real_sample_address0  |    9|          2|   10|         20|
    |real_sample_ce0       |    9|          2|    1|          2|
    |real_sample_we0       |    9|          2|    1|          2|
    +----------------------+-----+-----------+-----+-----------+
    |Total                 |  544|        122|  615|       1963|
    +----------------------+-----+-----------+-----+-----------+

    * Register: 
    +------------------------------------------------------+----+----+-----+-----------+
    |                         Name                         | FF | LUT| Bits| Const Bits|
    +------------------------------------------------------+----+----+-----+-----------+
    |add_ln13_reg_452                                      |  11|   0|   11|          0|
    |add_ln7_reg_433                                       |  11|   0|   11|          0|
    |ap_CS_fsm                                             |  60|   0|   60|          0|
    |c_reg_492                                             |  64|   0|   64|          0|
    |conv234_reg_156                                       |  32|   0|   32|          0|
    |conv375_reg_144                                       |  32|   0|   32|          0|
    |grp_dft_Pipeline_VITIS_LOOP_22_3_fu_168_ap_start_reg  |   1|   0|    1|          0|
    |grp_sin_or_cos_double_s_fu_180_ap_start_reg           |   1|   0|    1|          0|
    |grp_sin_or_cos_double_s_fu_199_ap_start_reg           |   1|   0|    1|          0|
    |imag_sample_load_reg_477                              |  32|   0|   32|          0|
    |k_fu_76                                               |  11|   0|   11|          0|
    |mul2_reg_514                                          |  64|   0|   64|          0|
    |mul3_reg_519                                          |  64|   0|   64|          0|
    |mul4_reg_524                                          |  64|   0|   64|          0|
    |n_reg_132                                             |  11|   0|   11|          0|
    |real_sample_load_reg_472                              |  32|   0|   32|          0|
    |reg_261                                               |  64|   0|   64|          0|
    |reg_266                                               |  64|   0|   64|          0|
    |reg_272                                               |  64|   0|   64|          0|
    |reg_279                                               |  64|   0|   64|          0|
    |reg_286                                               |  64|   0|   64|          0|
    |reg_293                                               |  64|   0|   64|          0|
    |reg_299                                               |  64|   0|   64|          0|
    |trunc_ln15_reg_503                                    |  63|   0|   63|          0|
    |xor_ln15_reg_498                                      |   1|   0|    1|          0|
    |zext_ln7_reg_443                                      |  11|   0|   64|         53|
    +------------------------------------------------------+----+----+-----+-----------+
    |Total                                                 |1014|   0| 1067|         53|
    +------------------------------------------------------+----+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+----------------------+-----+-----+------------+--------------+--------------+
|       RTL Ports      | Dir | Bits|  Protocol  | Source Object|    C Type    |
+----------------------+-----+-----+------------+--------------+--------------+
|ap_clk                |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_rst                |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_start              |   in|    1|  ap_ctrl_hs|           dft|  return value|
|ap_done               |  out|    1|  ap_ctrl_hs|           dft|  return value|
|ap_idle               |  out|    1|  ap_ctrl_hs|           dft|  return value|
|ap_ready              |  out|    1|  ap_ctrl_hs|           dft|  return value|
|real_sample_address0  |  out|   10|   ap_memory|   real_sample|         array|
|real_sample_ce0       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_we0       |  out|    1|   ap_memory|   real_sample|         array|
|real_sample_d0        |  out|   32|   ap_memory|   real_sample|         array|
|real_sample_q0        |   in|   32|   ap_memory|   real_sample|         array|
|imag_sample_address0  |  out|   10|   ap_memory|   imag_sample|         array|
|imag_sample_ce0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_we0       |  out|    1|   ap_memory|   imag_sample|         array|
|imag_sample_d0        |  out|   32|   ap_memory|   imag_sample|         array|
|imag_sample_q0        |   in|   32|   ap_memory|   imag_sample|         array|
|real_op_address0      |  out|   10|   ap_memory|       real_op|         array|
|real_op_ce0           |  out|    1|   ap_memory|       real_op|         array|
|real_op_we0           |  out|    1|   ap_memory|       real_op|         array|
|real_op_d0            |  out|   32|   ap_memory|       real_op|         array|
|real_op_q0            |   in|   32|   ap_memory|       real_op|         array|
|imag_op_address0      |  out|   10|   ap_memory|       imag_op|         array|
|imag_op_ce0           |  out|    1|   ap_memory|       imag_op|         array|
|imag_op_we0           |  out|    1|   ap_memory|       imag_op|         array|
|imag_op_d0            |  out|   32|   ap_memory|       imag_op|         array|
|imag_op_q0            |   in|   32|   ap_memory|       imag_op|         array|
+----------------------+-----+-----+------------+--------------+--------------+

