## N=4
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
Testbench min_theta=-3.1316, max_theta=3.1416
Testbench min_r=0.0000, max_r=1.4142
   RMSE(R)           RMSE(Theta)
0.289403885602951 0.595246791839600
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 22:34:38 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.22 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.88 seconds; current allocated memory: 659.211 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 7.58 seconds. CPU system time: 1.48 seconds. Elapsed time: 12.7 seconds; current allocated memory: 660.672 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 33,193 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,395 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,700 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,638 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 930 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 862 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,087 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 3,834 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_53_1' (cordiccart2pol.cpp:53:20) in function 'cordiccart2pol' completely with a factor of 4 (cordiccart2pol.cpp:37:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isnan<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isnan.h:16:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'fp_struct<float>::to_float() const (.33.42.51.60)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:322:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_float() const (.33.42.51.60)' into 'fp_struct<float>::to_ieee() const' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:346:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_nan<float>(char const*)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_nan.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isinf<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isinf.h:16:0)
INFO: [HLS 214-178] Inlining function 'float generic_copysign<float>(float, float)' into 'float generic_abs<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_abs.h:13:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::mantissa() const' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isnan<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_nan<float>(char const*)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::__signbit() const' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isinf<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_abs<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'atan2f' into 'init_cart2pol_LUTs(ap_fixed<4, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*, ap_fixed<4, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*)' (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_13_1> at cordiccart2pol.cpp:13:20 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_19_2' is marked as complete unroll implied by the pipeline pragma (cordiccart2pol.cpp:19:22)
INFO: [HLS 214-291] Loop 'anonymous' is marked as complete unroll implied by the pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_19_2' (cordiccart2pol.cpp:19:22) in function 'init_cart2pol_LUTs' completely with a factor of 4 (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-186] Unrolling loop 'anonymous' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2) in function 'cordic_::atan2_generic<float>' completely with a factor of 42 (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 8.31 seconds. CPU system time: 1.69 seconds. Elapsed time: 14.18 seconds; current allocated memory: 671.156 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 671.156 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.11 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.15 seconds; current allocated memory: 674.074 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
WARNING: [SYNCHK 200-23] /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:702: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.16 seconds. CPU system time: 0 seconds. Elapsed time: 0.21 seconds; current allocated memory: 678.605 MB.
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:13:29) to (cordiccart2pol.cpp:27:19) in function 'init_cart2pol_LUTs'... converting 5 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/atan2float.cpp:6:22) in function 'init_cart2pol_LUTs'... converting 13 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock in function 'cordic_::atan2_generic<float>'... converting 8 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.51 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.59 seconds; current allocated memory: 704.125 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.45 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.52 seconds; current allocated memory: 756.879 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_generic<float>' to 'atan2_generic_float_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_cordic<float>' to 'atan2_cordic_float_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.07 seconds. Elapsed time: 0.28 seconds; current allocated memory: 756.879 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 756.879 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 756.879 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 756.879 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 756.934 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 756.988 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_generic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 48, function 'atan2_generic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.76 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.87 seconds; current allocated memory: 767.266 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.15 seconds. CPU system time: 0 seconds. Elapsed time: 0.28 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_cordic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 63, function 'atan2_cordic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.23 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.36 seconds; current allocated memory: 767.266 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_13_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 73, loop 'VITIS_LOOP_13_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.28 seconds. CPU system time: 0 seconds. Elapsed time: 0.36 seconds; current allocated memory: 767.266 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 767.266 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.16 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 767.266 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'bitselect_1ns_40ns_32s_1_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'ctlz_40_40_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fdiv_32ns_32ns_32_16_no_dsp_0': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_generic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.51 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.76 seconds; current allocated memory: 778.496 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-104] Estimated max fanout for 'atan2_cordic_float_s' is 9028 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp119)
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_cordic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.87 seconds. CPU system time: 0.16 seconds. Elapsed time: 1.29 seconds; current allocated memory: 788.023 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'init_cart2pol_LUTs' pipeline 'VITIS_LOOP_13_1' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] RTL name 'fcmp_32ns_32ns_1_2_no_dsp_1' is changed to 'fcmp_32ns_32ns_1_2_no_dsp_1_x' due to conflict.
INFO: [RTGEN 206-100] Generating core module 'ctlz_4_4_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1_x': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fpext_32ns_64_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsqrt_32ns_32ns_32_16_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_4_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'init_cart2pol_LUTs'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.44 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.71 seconds; current allocated memory: 793.605 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 's_axilite & ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Register 'initialized' is power-on initialization.
INFO: [RTGEN 206-100] Bundling port 'x', 'y', 'r', 'theta' and 'return' to AXI-Lite port CTRL.
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [RTMG 210-278] Implementing memory 'cordiccart2pol_my_LUT_th_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.33 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.54 seconds; current allocated memory: 796.723 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.55 seconds. CPU system time: 0.11 seconds. Elapsed time: 1.85 seconds; current allocated memory: 799.570 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 1.5 seconds. CPU system time: 0.11 seconds. Elapsed time: 2.17 seconds; current allocated memory: 809.398 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:47; Allocated memory: 166.188 MB.
INFO: [HLS 200-112] Total CPU user time: 33.14 seconds. Total CPU system time: 5.61 seconds. Total elapsed time: 65.31 seconds; peak allocated memory: 809.398 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 8s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 22:35:41 2026

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
    +---------+---------+-----------+----------+-----+-----+---------+
    |  Latency (cycles) |  Latency (absolute)  |  Interval | Pipeline|
    |   min   |   max   |    min    |    max   | min | max |   Type  |
    +---------+---------+-----------+----------+-----+-----+---------+
    |        3|      332|  30.000 ns|  3.320 us|    4|  333|       no|
    +---------+---------+-----------+----------+-----+-----+---------+

    + Detail: 
        * Instance: 
        +-------------------------------+--------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |                               |                    |  Latency (cycles) |  Latency (absolute) |  Interval |                    Pipeline                    |
        |            Instance           |       Module       |   min   |   max   |    min   |    max   | min | max |                      Type                      |
        +-------------------------------+--------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+
        |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |      329|      329|  3.290 us|  3.290 us|  257|  257|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-------------------------------+--------------------+---------+---------+----------+----------+-----+-----+------------------------------------------------+

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
|Expression       |        -|    -|       0|      2|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   12|   16385|  23604|    -|
|Memory           |        2|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    115|    -|
|Register         |        -|    -|      15|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        2|   12|   16400|  23721|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       ~0|    5|      15|     44|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |            Instance           |       Module       | BRAM_18K| DSP|   FF  |  LUT  | URAM|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |CTRL_s_axi_U                   |CTRL_s_axi          |        0|   0|     76|     72|    0|
    |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |        0|  12|  16309|  23532|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |Total                          |                    |        0|  12|  16385|  23604|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |    Memory   |          Module         | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |my_LUT_th_U  |my_LUT_th_RAM_AUTO_1R1W  |        1|  0|   0|    0|   256|    4|     1|         1024|
    |my_LUT_r_U   |my_LUT_th_RAM_AUTO_1R1W  |        1|  0|   0|    0|   256|    4|     1|         1024|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total        |                         |        2|  0|   0|    0|   512|    8|     2|         2048|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +---------------------------------+----------+----+---+----+------------+------------+
    |          Variable Name          | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |ap_block_state2_on_subcall_done  |       and|   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |Total                            |          |   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +--------------------+----+-----------+-----+-----------+
    |        Name        | LUT| Input Size| Bits| Total Bits|
    +--------------------+----+-----------+-----+-----------+
    |ap_NS_fsm           |  25|          5|    1|          5|
    |my_LUT_r_address0   |   9|          2|    8|         16|
    |my_LUT_r_ce0        |   9|          2|    1|          2|
    |my_LUT_r_ce1        |   9|          2|    1|          2|
    |my_LUT_r_we0        |   9|          2|    1|          2|
    |my_LUT_r_we1        |   9|          2|    1|          2|
    |my_LUT_th_address0  |   9|          2|    8|         16|
    |my_LUT_th_ce0       |   9|          2|    1|          2|
    |my_LUT_th_ce1       |   9|          2|    1|          2|
    |my_LUT_th_we0       |   9|          2|    1|          2|
    |my_LUT_th_we1       |   9|          2|    1|          2|
    +--------------------+----+-----------+-----+-----------+
    |Total               | 115|         25|   25|         53|
    +--------------------+----+-----------+-----+-----------+

    * Register: 
    +--------------------------------------------+---+----+-----+-----------+
    |                    Name                    | FF| LUT| Bits| Const Bits|
    +--------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                   |  4|   0|    4|          0|
    |grp_init_cart2pol_LUTs_fu_110_ap_start_reg  |  1|   0|    1|          0|
    |initialized                                 |  1|   0|    1|          0|
    |initialized_load_reg_150                    |  1|   0|    1|          0|
    |x_read_reg_145                              |  4|   0|    4|          0|
    |y_read_reg_140                              |  4|   0|    4|          0|
    +--------------------------------------------+---+----+-----+-----------+
    |Total                                       | 15|   0|   15|          0|
    +--------------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+----------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------------+-----+-----+------------+----------------+--------------+
|s_axi_CTRL_AWVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WVALID   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WREADY   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WDATA    |   in|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WSTRB    |   in|    4|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RDATA    |  out|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|ap_clk              |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst_n            |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|interrupt           |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
+--------------------+-----+-----+------------+----------------+--------------+
## N=5
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
Testbench min_theta=-3.1316, max_theta=3.1416
Testbench min_r=0.0000, max_r=1.4142
   RMSE(R)           RMSE(Theta)
0.163360938429832 0.317522197961807
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 22:36:24 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.16 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.83 seconds; current allocated memory: 659.199 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 6.69 seconds. CPU system time: 1.4 seconds. Elapsed time: 10.64 seconds; current allocated memory: 660.660 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 33,193 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,399 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,704 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,638 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 930 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 862 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,087 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 3,834 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_53_1' (cordiccart2pol.cpp:53:20) in function 'cordiccart2pol' completely with a factor of 5 (cordiccart2pol.cpp:37:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isnan<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isnan.h:16:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'fp_struct<float>::to_float() const (.33.42.51.60)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:322:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_float() const (.33.42.51.60)' into 'fp_struct<float>::to_ieee() const' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:346:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_nan<float>(char const*)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_nan.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isinf<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isinf.h:16:0)
INFO: [HLS 214-178] Inlining function 'float generic_copysign<float>(float, float)' into 'float generic_abs<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_abs.h:13:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::mantissa() const' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isnan<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_nan<float>(char const*)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::__signbit() const' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isinf<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_abs<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'atan2f' into 'init_cart2pol_LUTs(ap_fixed<5, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*, ap_fixed<5, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*)' (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_13_1> at cordiccart2pol.cpp:13:20 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_19_2' is marked as complete unroll implied by the pipeline pragma (cordiccart2pol.cpp:19:22)
INFO: [HLS 214-291] Loop 'anonymous' is marked as complete unroll implied by the pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_19_2' (cordiccart2pol.cpp:19:22) in function 'init_cart2pol_LUTs' completely with a factor of 5 (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-186] Unrolling loop 'anonymous' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2) in function 'cordic_::atan2_generic<float>' completely with a factor of 42 (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 10.03 seconds. CPU system time: 1.77 seconds. Elapsed time: 18.09 seconds; current allocated memory: 671.195 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 671.195 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 674.152 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
WARNING: [SYNCHK 200-23] /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:702: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 678.680 MB.
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:13:29) to (cordiccart2pol.cpp:27:19) in function 'init_cart2pol_LUTs'... converting 5 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/atan2float.cpp:6:22) in function 'init_cart2pol_LUTs'... converting 13 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock in function 'cordic_::atan2_generic<float>'... converting 8 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.51 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.62 seconds; current allocated memory: 704.238 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.51 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.73 seconds; current allocated memory: 756.992 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_generic<float>' to 'atan2_generic_float_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_cordic<float>' to 'atan2_cordic_float_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.08 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.32 seconds; current allocated memory: 756.992 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 756.992 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 756.992 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 756.992 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.06 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 757.027 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 757.094 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_generic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 48, function 'atan2_generic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.63 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.8 seconds; current allocated memory: 767.426 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.15 seconds. CPU system time: 0 seconds. Elapsed time: 0.29 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_cordic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 63, function 'atan2_cordic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.22 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.36 seconds; current allocated memory: 767.426 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.18 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_13_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 73, loop 'VITIS_LOOP_13_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.3 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.53 seconds; current allocated memory: 767.426 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.26 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 767.426 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.15 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.22 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.2 seconds; current allocated memory: 767.426 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'bitselect_1ns_40ns_32s_1_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'ctlz_40_40_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fdiv_32ns_32ns_32_16_no_dsp_0': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_generic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.7 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.96 seconds; current allocated memory: 778.523 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-104] Estimated max fanout for 'atan2_cordic_float_s' is 9028 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp119)
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_cordic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.78 seconds. CPU system time: 0.18 seconds. Elapsed time: 1.16 seconds; current allocated memory: 788.035 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'init_cart2pol_LUTs' pipeline 'VITIS_LOOP_13_1' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] RTL name 'fcmp_32ns_32ns_1_2_no_dsp_1' is changed to 'fcmp_32ns_32ns_1_2_no_dsp_1_x' due to conflict.
INFO: [RTGEN 206-100] Generating core module 'ctlz_5_5_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1_x': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fpext_32ns_64_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsqrt_32ns_32ns_32_16_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_5_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'init_cart2pol_LUTs'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.48 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.87 seconds; current allocated memory: 793.590 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 's_axilite & ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Register 'initialized' is power-on initialization.
INFO: [RTGEN 206-100] Bundling port 'x', 'y', 'r', 'theta' and 'return' to AXI-Lite port CTRL.
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [RTMG 210-278] Implementing memory 'cordiccart2pol_my_LUT_th_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.37 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.69 seconds; current allocated memory: 796.609 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.8 seconds. CPU system time: 0.12 seconds. Elapsed time: 2.72 seconds; current allocated memory: 799.445 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 1.74 seconds. CPU system time: 0.11 seconds. Elapsed time: 2.71 seconds; current allocated memory: 809.203 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:52; Allocated memory: 166.004 MB.
INFO: [HLS 200-112] Total CPU user time: 34.79 seconds. Total CPU system time: 5.53 seconds. Total elapsed time: 65.59 seconds; peak allocated memory: 809.203 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 8s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 22:37:27 2026

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
    +---------+---------+-----------+-----------+-----+------+---------+
    |  Latency (cycles) |   Latency (absolute)  |  Interval  | Pipeline|
    |   min   |   max   |    min    |    max    | min |  max |   Type  |
    +---------+---------+-----------+-----------+-----+------+---------+
    |        3|     1100|  30.000 ns|  11.000 us|    4|  1101|       no|
    +---------+---------+-----------+-----------+-----+------+---------+

    + Detail: 
        * Instance: 
        +-------------------------------+--------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |                               |                    |  Latency (cycles) |   Latency (absolute)  |   Interval  |                    Pipeline                    |
        |            Instance           |       Module       |   min   |   max   |    min    |    max    |  min |  max |                      Type                      |
        +-------------------------------+--------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |     1097|     1097|  10.970 us|  10.970 us|  1025|  1025|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-------------------------------+--------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+

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
|Expression       |        -|    -|       0|      2|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   12|   16415|  23441|    -|
|Memory           |        2|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    115|    -|
|Register         |        -|    -|      17|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        2|   12|   16432|  23558|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       ~0|    5|      15|     44|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |            Instance           |       Module       | BRAM_18K| DSP|   FF  |  LUT  | URAM|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |CTRL_s_axi_U                   |CTRL_s_axi          |        0|   0|     80|     80|    0|
    |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |        0|  12|  16335|  23361|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |Total                          |                    |        0|  12|  16415|  23441|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |    Memory   |          Module         | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |my_LUT_th_U  |my_LUT_th_RAM_AUTO_1R1W  |        1|  0|   0|    0|  1024|    5|     1|         5120|
    |my_LUT_r_U   |my_LUT_th_RAM_AUTO_1R1W  |        1|  0|   0|    0|  1024|    5|     1|         5120|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total        |                         |        2|  0|   0|    0|  2048|   10|     2|        10240|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +---------------------------------+----------+----+---+----+------------+------------+
    |          Variable Name          | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |ap_block_state2_on_subcall_done  |       and|   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |Total                            |          |   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +--------------------+----+-----------+-----+-----------+
    |        Name        | LUT| Input Size| Bits| Total Bits|
    +--------------------+----+-----------+-----+-----------+
    |ap_NS_fsm           |  25|          5|    1|          5|
    |my_LUT_r_address0   |   9|          2|   10|         20|
    |my_LUT_r_ce0        |   9|          2|    1|          2|
    |my_LUT_r_ce1        |   9|          2|    1|          2|
    |my_LUT_r_we0        |   9|          2|    1|          2|
    |my_LUT_r_we1        |   9|          2|    1|          2|
    |my_LUT_th_address0  |   9|          2|   10|         20|
    |my_LUT_th_ce0       |   9|          2|    1|          2|
    |my_LUT_th_ce1       |   9|          2|    1|          2|
    |my_LUT_th_we0       |   9|          2|    1|          2|
    |my_LUT_th_we1       |   9|          2|    1|          2|
    +--------------------+----+-----------+-----+-----------+
    |Total               | 115|         25|   29|         61|
    +--------------------+----+-----------+-----+-----------+

    * Register: 
    +--------------------------------------------+---+----+-----+-----------+
    |                    Name                    | FF| LUT| Bits| Const Bits|
    +--------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                   |  4|   0|    4|          0|
    |grp_init_cart2pol_LUTs_fu_110_ap_start_reg  |  1|   0|    1|          0|
    |initialized                                 |  1|   0|    1|          0|
    |initialized_load_reg_150                    |  1|   0|    1|          0|
    |x_read_reg_145                              |  5|   0|    5|          0|
    |y_read_reg_140                              |  5|   0|    5|          0|
    +--------------------------------------------+---+----+-----+-----------+
    |Total                                       | 17|   0|   17|          0|
    +--------------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+----------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------------+-----+-----+------------+----------------+--------------+
|s_axi_CTRL_AWVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WVALID   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WREADY   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WDATA    |   in|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WSTRB    |   in|    4|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RDATA    |  out|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|ap_clk              |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst_n            |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|interrupt           |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
+--------------------+-----+-----+------------+----------------+--------------+

## N=6
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
Testbench min_theta=-3.1316, max_theta=3.1416
Testbench min_r=0.0000, max_r=1.4142
   RMSE(R)           RMSE(Theta)
0.086298309266567 0.170881450176239
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 22:38:16 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.21 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.86 seconds; current allocated memory: 659.199 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 5.96 seconds. CPU system time: 1.22 seconds. Elapsed time: 8.22 seconds; current allocated memory: 660.660 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 33,193 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,403 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,708 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,638 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 924 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 930 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 862 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,081 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,087 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 3,834 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_53_1' (cordiccart2pol.cpp:53:20) in function 'cordiccart2pol' completely with a factor of 6 (cordiccart2pol.cpp:37:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isnan<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isnan.h:16:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'fp_struct<float>::to_float() const (.33.42.51.60)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:322:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_float() const (.33.42.51.60)' into 'fp_struct<float>::to_ieee() const' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:346:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_nan<float>(char const*)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_nan.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isinf<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isinf.h:16:0)
INFO: [HLS 214-178] Inlining function 'float generic_copysign<float>(float, float)' into 'float generic_abs<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_abs.h:13:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::mantissa() const' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isnan<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_nan<float>(char const*)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::__signbit() const' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isinf<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_abs<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'atan2f' into 'init_cart2pol_LUTs(ap_fixed<6, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*, ap_fixed<6, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*)' (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_13_1> at cordiccart2pol.cpp:13:20 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_19_2' is marked as complete unroll implied by the pipeline pragma (cordiccart2pol.cpp:19:22)
INFO: [HLS 214-291] Loop 'anonymous' is marked as complete unroll implied by the pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_19_2' (cordiccart2pol.cpp:19:22) in function 'init_cart2pol_LUTs' completely with a factor of 6 (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-186] Unrolling loop 'anonymous' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2) in function 'cordic_::atan2_generic<float>' completely with a factor of 42 (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 19.65 seconds. CPU system time: 1.84 seconds. Elapsed time: 27.94 seconds; current allocated memory: 671.188 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0.01 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 671.188 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.15 seconds; current allocated memory: 674.078 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
WARNING: [SYNCHK 200-23] /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:702: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.13 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 678.660 MB.
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:13:29) to (cordiccart2pol.cpp:27:19) in function 'init_cart2pol_LUTs'... converting 5 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/atan2float.cpp:6:22) in function 'init_cart2pol_LUTs'... converting 13 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock in function 'cordic_::atan2_generic<float>'... converting 8 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.42 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.49 seconds; current allocated memory: 704.785 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.4 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.45 seconds; current allocated memory: 756.855 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_generic<float>' to 'atan2_generic_float_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_cordic<float>' to 'atan2_cordic_float_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.07 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.32 seconds; current allocated memory: 756.855 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.02 seconds. CPU system time: 0 seconds. Elapsed time: 0.05 seconds; current allocated memory: 756.918 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 757.102 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 757.133 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 757.305 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.07 seconds; current allocated memory: 757.363 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_generic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 48, function 'atan2_generic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.58 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.69 seconds; current allocated memory: 767.676 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.24 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_cordic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 63, function 'atan2_cordic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.19 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.33 seconds; current allocated memory: 767.676 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_13_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 73, loop 'VITIS_LOOP_13_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.35 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.53 seconds; current allocated memory: 767.676 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.23 seconds; current allocated memory: 767.676 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.06 seconds. CPU system time: 0 seconds. Elapsed time: 0.11 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.17 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 767.676 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'bitselect_1ns_40ns_32s_1_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'ctlz_40_40_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fdiv_32ns_32ns_32_16_no_dsp_0': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_generic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.48 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.7 seconds; current allocated memory: 778.797 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-104] Estimated max fanout for 'atan2_cordic_float_s' is 9028 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp119)
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_cordic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.69 seconds. CPU system time: 0.14 seconds. Elapsed time: 1.03 seconds; current allocated memory: 788.332 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'init_cart2pol_LUTs' pipeline 'VITIS_LOOP_13_1' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] RTL name 'fcmp_32ns_32ns_1_2_no_dsp_1' is changed to 'fcmp_32ns_32ns_1_2_no_dsp_1_x' due to conflict.
INFO: [RTGEN 206-100] Generating core module 'ctlz_6_6_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1_x': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fpext_32ns_64_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsqrt_32ns_32ns_32_16_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_6_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'init_cart2pol_LUTs'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.44 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.7 seconds; current allocated memory: 793.945 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 's_axilite & ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Register 'initialized' is power-on initialization.
INFO: [RTGEN 206-100] Bundling port 'x', 'y', 'r', 'theta' and 'return' to AXI-Lite port CTRL.
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [RTMG 210-278] Implementing memory 'cordiccart2pol_my_LUT_th_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.42 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.66 seconds; current allocated memory: 797.004 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.53 seconds. CPU system time: 0.13 seconds. Elapsed time: 1.66 seconds; current allocated memory: 799.832 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 1.28 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.77 seconds; current allocated memory: 809.594 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:55; Allocated memory: 166.395 MB.
INFO: [HLS 200-112] Total CPU user time: 41.34 seconds. Total CPU system time: 5.39 seconds. Total elapsed time: 70.22 seconds; peak allocated memory: 809.594 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 13s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 22:39:25 2026

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
    +---------+---------+-----------+-----------+-----+------+---------+
    |  Latency (cycles) |   Latency (absolute)  |  Interval  | Pipeline|
    |   min   |   max   |    min    |    max    | min |  max |   Type  |
    +---------+---------+-----------+-----------+-----+------+---------+
    |        3|     4172|  30.000 ns|  41.720 us|    4|  4173|       no|
    +---------+---------+-----------+-----------+-----+------+---------+

    + Detail: 
        * Instance: 
        +-------------------------------+--------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |                               |                    |  Latency (cycles) |   Latency (absolute)  |   Interval  |                    Pipeline                    |
        |            Instance           |       Module       |   min   |   max   |    min    |    max    |  min |  max |                      Type                      |
        +-------------------------------+--------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+
        |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |     4169|     4169|  41.690 us|  41.690 us|  4097|  4097|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-------------------------------+--------------------+---------+---------+-----------+-----------+------+------+------------------------------------------------+

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
|Expression       |        -|    -|       0|      2|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   12|   16503|  23480|    -|
|Memory           |        4|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    115|    -|
|Register         |        -|    -|      19|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |        4|   12|   16522|  23597|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        1|    5|      15|     44|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |            Instance           |       Module       | BRAM_18K| DSP|   FF  |  LUT  | URAM|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |CTRL_s_axi_U                   |CTRL_s_axi          |        0|   0|     84|     88|    0|
    |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |        0|  12|  16419|  23392|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |Total                          |                    |        0|  12|  16503|  23480|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |    Memory   |          Module         | BRAM_18K| FF| LUT| URAM| Words| Bits| Banks| W*Bits*Banks|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |my_LUT_th_U  |my_LUT_th_RAM_AUTO_1R1W  |        2|  0|   0|    0|  4096|    6|     1|        24576|
    |my_LUT_r_U   |my_LUT_th_RAM_AUTO_1R1W  |        2|  0|   0|    0|  4096|    6|     1|        24576|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+
    |Total        |                         |        4|  0|   0|    0|  8192|   12|     2|        49152|
    +-------------+-------------------------+---------+---+----+-----+------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +---------------------------------+----------+----+---+----+------------+------------+
    |          Variable Name          | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |ap_block_state2_on_subcall_done  |       and|   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |Total                            |          |   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +--------------------+----+-----------+-----+-----------+
    |        Name        | LUT| Input Size| Bits| Total Bits|
    +--------------------+----+-----------+-----+-----------+
    |ap_NS_fsm           |  25|          5|    1|          5|
    |my_LUT_r_address0   |   9|          2|   12|         24|
    |my_LUT_r_ce0        |   9|          2|    1|          2|
    |my_LUT_r_ce1        |   9|          2|    1|          2|
    |my_LUT_r_we0        |   9|          2|    1|          2|
    |my_LUT_r_we1        |   9|          2|    1|          2|
    |my_LUT_th_address0  |   9|          2|   12|         24|
    |my_LUT_th_ce0       |   9|          2|    1|          2|
    |my_LUT_th_ce1       |   9|          2|    1|          2|
    |my_LUT_th_we0       |   9|          2|    1|          2|
    |my_LUT_th_we1       |   9|          2|    1|          2|
    +--------------------+----+-----------+-----+-----------+
    |Total               | 115|         25|   33|         69|
    +--------------------+----+-----------+-----+-----------+

    * Register: 
    +--------------------------------------------+---+----+-----+-----------+
    |                    Name                    | FF| LUT| Bits| Const Bits|
    +--------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                   |  4|   0|    4|          0|
    |grp_init_cart2pol_LUTs_fu_110_ap_start_reg  |  1|   0|    1|          0|
    |initialized                                 |  1|   0|    1|          0|
    |initialized_load_reg_150                    |  1|   0|    1|          0|
    |x_read_reg_145                              |  6|   0|    6|          0|
    |y_read_reg_140                              |  6|   0|    6|          0|
    +--------------------------------------------+---+----+-----+-----------+
    |Total                                       | 19|   0|   19|          0|
    +--------------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+----------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------------+-----+-----+------------+----------------+--------------+
|s_axi_CTRL_AWVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WVALID   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WREADY   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WDATA    |   in|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WSTRB    |   in|    4|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RDATA    |  out|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|ap_clk              |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst_n            |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|interrupt           |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
+--------------------+-----+-----+------------+----------------+--------------+

## N=7
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
Testbench min_theta=-3.1316, max_theta=3.1416
Testbench min_r=0.0000, max_r=1.4142
   RMSE(R)           RMSE(Theta)
0.045045133680105 0.094583891332150
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 22:42:00 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.04 seconds. Elapsed time: 7.77 seconds; current allocated memory: 659.199 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 5.64 seconds. CPU system time: 1.28 seconds. Elapsed time: 7.53 seconds; current allocated memory: 660.660 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 33,193 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,381 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,654 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,578 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 864 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 864 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 864 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 864 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 864 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 870 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 802 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,021 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,021 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,021 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,027 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 3,774 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_53_1' (cordiccart2pol.cpp:53:20) in function 'cordiccart2pol' completely with a factor of 7 (cordiccart2pol.cpp:37:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isnan<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isnan.h:16:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'fp_struct<float>::to_float() const (.33.42.51.60)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:322:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_float() const (.33.42.51.60)' into 'fp_struct<float>::to_ieee() const' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:346:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_nan<float>(char const*)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_nan.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isinf<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isinf.h:16:0)
INFO: [HLS 214-178] Inlining function 'float generic_copysign<float>(float, float)' into 'float generic_abs<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_abs.h:13:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::mantissa() const' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isnan<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_nan<float>(char const*)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::__signbit() const' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isinf<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_abs<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'atan2f' into 'init_cart2pol_LUTs(ap_fixed<7, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*, ap_fixed<7, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*)' (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_13_1> at cordiccart2pol.cpp:13:20 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_19_2' is marked as complete unroll implied by the pipeline pragma (cordiccart2pol.cpp:19:22)
INFO: [HLS 214-291] Loop 'anonymous' is marked as complete unroll implied by the pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_19_2' (cordiccart2pol.cpp:19:22) in function 'init_cart2pol_LUTs' completely with a factor of 7 (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-186] Unrolling loop 'anonymous' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2) in function 'cordic_::atan2_generic<float>' completely with a factor of 42 (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 53.59 seconds. CPU system time: 2.12 seconds. Elapsed time: 61.93 seconds; current allocated memory: 671.195 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 671.195 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 674.121 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
WARNING: [SYNCHK 200-23] /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:702: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.12 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.18 seconds; current allocated memory: 678.598 MB.
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:13:29) to (cordiccart2pol.cpp:27:19) in function 'init_cart2pol_LUTs'... converting 5 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/atan2float.cpp:6:22) in function 'init_cart2pol_LUTs'... converting 13 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock in function 'cordic_::atan2_generic<float>'... converting 8 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.51 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.6 seconds; current allocated memory: 704.207 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.64 seconds. CPU system time: 0.04 seconds. Elapsed time: 0.99 seconds; current allocated memory: 756.961 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_generic<float>' to 'atan2_generic_float_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_cordic<float>' to 'atan2_cordic_float_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.34 seconds; current allocated memory: 756.961 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.04 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 756.961 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.1 seconds; current allocated memory: 756.961 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.07 seconds; current allocated memory: 756.961 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 757.055 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.08 seconds; current allocated memory: 757.125 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_generic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 48, function 'atan2_generic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.55 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.65 seconds; current allocated memory: 767.449 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.16 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_cordic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 63, function 'atan2_cordic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.19 seconds. CPU system time: 0 seconds. Elapsed time: 0.3 seconds; current allocated memory: 767.449 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.21 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_13_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 73, loop 'VITIS_LOOP_13_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.27 seconds. CPU system time: 0 seconds. Elapsed time: 0.49 seconds; current allocated memory: 767.449 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.14 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.1 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 767.449 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.12 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.2 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.23 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 767.449 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'bitselect_1ns_40ns_32s_1_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'ctlz_40_40_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fdiv_32ns_32ns_32_16_no_dsp_0': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_generic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.48 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.69 seconds; current allocated memory: 778.535 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-104] Estimated max fanout for 'atan2_cordic_float_s' is 9028 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp119)
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_cordic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.73 seconds. CPU system time: 0.14 seconds. Elapsed time: 1.08 seconds; current allocated memory: 788.090 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'init_cart2pol_LUTs' pipeline 'VITIS_LOOP_13_1' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] RTL name 'fcmp_32ns_32ns_1_2_no_dsp_1' is changed to 'fcmp_32ns_32ns_1_2_no_dsp_1_x' due to conflict.
INFO: [RTGEN 206-100] Generating core module 'ctlz_7_7_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1_x': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fpext_32ns_64_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsqrt_32ns_32ns_32_16_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_7_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'init_cart2pol_LUTs'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.39 seconds. CPU system time: 0.06 seconds. Elapsed time: 0.66 seconds; current allocated memory: 793.680 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 's_axilite & ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Register 'initialized' is power-on initialization.
INFO: [RTGEN 206-100] Bundling port 'x', 'y', 'r', 'theta' and 'return' to AXI-Lite port CTRL.
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [RTMG 210-278] Implementing memory 'cordiccart2pol_my_LUT_th_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.35 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.64 seconds; current allocated memory: 796.688 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.63 seconds. CPU system time: 0.14 seconds. Elapsed time: 1.77 seconds; current allocated memory: 799.543 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 1.25 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.79 seconds; current allocated memory: 809.250 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:01:29; Allocated memory: 166.051 MB.
INFO: [HLS 200-112] Total CPU user time: 75.62 seconds. Total CPU system time: 5.56 seconds. Total elapsed time: 101.65 seconds; peak allocated memory: 809.250 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 1m 45s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 22:43:41 2026

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
    +---------+---------+-----------+----------+-----+-------+---------+
    |  Latency (cycles) |  Latency (absolute)  |   Interval  | Pipeline|
    |   min   |   max   |    min    |    max   | min |  max  |   Type  |
    +---------+---------+-----------+----------+-----+-------+---------+
    |        3|    16460|  30.000 ns|  0.165 ms|    4|  16461|       no|
    +---------+---------+-----------+----------+-----+-------+---------+

    + Detail: 
        * Instance: 
        +-------------------------------+--------------------+---------+---------+----------+----------+-------+-------+------------------------------------------------+
        |                               |                    |  Latency (cycles) |  Latency (absolute) |    Interval   |                    Pipeline                    |
        |            Instance           |       Module       |   min   |   max   |    min   |    max   |  min  |  max  |                      Type                      |
        +-------------------------------+--------------------+---------+---------+----------+----------+-------+-------+------------------------------------------------+
        |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |    16457|    16457|  0.165 ms|  0.165 ms|  16385|  16385|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-------------------------------+--------------------+---------+---------+----------+----------+-------+-------+------------------------------------------------+

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
|Expression       |        -|    -|       0|      2|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   12|   16525|  23516|    -|
|Memory           |       14|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    115|    -|
|Register         |        -|    -|      21|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       14|   12|   16546|  23633|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |        5|    5|      15|     44|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |            Instance           |       Module       | BRAM_18K| DSP|   FF  |  LUT  | URAM|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |CTRL_s_axi_U                   |CTRL_s_axi          |        0|   0|     88|     96|    0|
    |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |        0|  12|  16437|  23420|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |Total                          |                    |        0|  12|  16525|  23516|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+
    |    Memory   |          Module         | BRAM_18K| FF| LUT| URAM| Words | Bits| Banks| W*Bits*Banks|
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+
    |my_LUT_th_U  |my_LUT_th_RAM_AUTO_1R1W  |        7|  0|   0|    0|  16384|    7|     1|       114688|
    |my_LUT_r_U   |my_LUT_th_RAM_AUTO_1R1W  |        7|  0|   0|    0|  16384|    7|     1|       114688|
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+
    |Total        |                         |       14|  0|   0|    0|  32768|   14|     2|       229376|
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +---------------------------------+----------+----+---+----+------------+------------+
    |          Variable Name          | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |ap_block_state2_on_subcall_done  |       and|   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |Total                            |          |   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +--------------------+----+-----------+-----+-----------+
    |        Name        | LUT| Input Size| Bits| Total Bits|
    +--------------------+----+-----------+-----+-----------+
    |ap_NS_fsm           |  25|          5|    1|          5|
    |my_LUT_r_address0   |   9|          2|   14|         28|
    |my_LUT_r_ce0        |   9|          2|    1|          2|
    |my_LUT_r_ce1        |   9|          2|    1|          2|
    |my_LUT_r_we0        |   9|          2|    1|          2|
    |my_LUT_r_we1        |   9|          2|    1|          2|
    |my_LUT_th_address0  |   9|          2|   14|         28|
    |my_LUT_th_ce0       |   9|          2|    1|          2|
    |my_LUT_th_ce1       |   9|          2|    1|          2|
    |my_LUT_th_we0       |   9|          2|    1|          2|
    |my_LUT_th_we1       |   9|          2|    1|          2|
    +--------------------+----+-----------+-----+-----------+
    |Total               | 115|         25|   37|         77|
    +--------------------+----+-----------+-----+-----------+

    * Register: 
    +--------------------------------------------+---+----+-----+-----------+
    |                    Name                    | FF| LUT| Bits| Const Bits|
    +--------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                   |  4|   0|    4|          0|
    |grp_init_cart2pol_LUTs_fu_110_ap_start_reg  |  1|   0|    1|          0|
    |initialized                                 |  1|   0|    1|          0|
    |initialized_load_reg_150                    |  1|   0|    1|          0|
    |x_read_reg_145                              |  7|   0|    7|          0|
    |y_read_reg_140                              |  7|   0|    7|          0|
    +--------------------------------------------+---+----+-----+-----------+
    |Total                                       | 21|   0|   21|          0|
    +--------------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+----------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------------+-----+-----+------------+----------------+--------------+
|s_axi_CTRL_AWVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WVALID   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WREADY   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WDATA    |   in|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WSTRB    |   in|    4|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RDATA    |  out|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|ap_clk              |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst_n            |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|interrupt           |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
+--------------------+-----+-----+------------+----------------+--------------+

## N=8
LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include cordiccart2pol_test.cpp cordiccart2pol.cpp -g -o cordiccart2pol_test.bin
Running cordiccart2pol_test.bin with cordiccart2pol.cpp
Testbench min_theta=-3.1316, max_theta=3.1416
Testbench min_r=0.0000, max_r=1.4142
   RMSE(R)           RMSE(Theta)
0.023094084113836 0.051045734435320
/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/../../../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/__hls_config__.ini -i cordiccart2pol.cpp -o cordiccart2pol.tcl
sed -i -E \
	-e 's/^[[:space:]]*set_top[[:space:]]+.*/set_top cordiccart2pol/' \
	-e 's/^[[:space:]]*open_component[[:space:]]+.*/open_component cordiccart2pol.comp/' \
	-e 's/^[[:space:]]*open_project[[:space:]]+.*/open_project cordiccart2pol.comp/' \
	cordiccart2pol.tcl
vitis-run --mode hls --tcl cordiccart2pol.tcl

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct 22 22:44:23 2026
    ** Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
    ** Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.

  **** HLS Build v2024.2 5238294
Sourcing Tcl script '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.tcl'
INFO: [HLS 200-1510] Running: open_component cordiccart2pol.comp 
INFO: [HLS 200-10] Creating and opening project '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp'.
INFO: [HLS 200-10] Creating and opening solution '/home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls'.
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
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.18 seconds. CPU system time: 0.06 seconds. Elapsed time: 7.83 seconds; current allocated memory: 659.211 MB.
INFO: [HLS 200-10] Analyzing design file 'cordiccart2pol.cpp' ... 
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 5.83 seconds. CPU system time: 1.35 seconds. Elapsed time: 8.08 seconds; current allocated memory: 660.672 MB.
INFO: [HLS 200-777] Using interface defaults for 'Vivado' flow target.
INFO: [HLS 200-1995] There were 33,193 instructions in the design after the 'Compile/Link' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 2,403 instructions in the design after the 'Unroll/Inline (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,710 instructions in the design after the 'Unroll/Inline (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 1,632 instructions in the design after the 'Unroll/Inline (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 920 instructions in the design after the 'Unroll/Inline (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 920 instructions in the design after the 'Array/Struct (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 920 instructions in the design after the 'Array/Struct (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 920 instructions in the design after the 'Array/Struct (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 920 instructions in the design after the 'Array/Struct (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 926 instructions in the design after the 'Array/Struct (step 5)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 858 instructions in the design after the 'Performance (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,077 instructions in the design after the 'Performance (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,077 instructions in the design after the 'Performance (step 3)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,077 instructions in the design after the 'Performance (step 4)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 4,083 instructions in the design after the 'HW Transforms (step 1)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 200-1995] There were 3,830 instructions in the design after the 'HW Transforms (step 2)' phase of compilation. See the Design Size Report for more details: /home/linux/ieng6/students/519/gam009/wes237c/project2/cordic/HLS/cordic_LUT/cordiccart2pol.comp/hls/syn/report/csynth_design_size.rpt
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_53_1' (cordiccart2pol.cpp:53:20) in function 'cordiccart2pol' completely with a factor of 8 (cordiccart2pol.cpp:37:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isnan<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isnan.h:16:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'fp_struct<float>::to_float() const (.33.42.51.60)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:322:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_float() const (.33.42.51.60)' into 'fp_struct<float>::to_ieee() const' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/src/hls/utils/x_hls_utils.h:346:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_nan<float>(char const*)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_nan.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float generic_copysign<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_copysign.h:10:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'int generic_isinf<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_isinf.h:16:0)
INFO: [HLS 214-178] Inlining function 'float generic_copysign<float>(float, float)' into 'float generic_abs<float>(float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_abs.h:13:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::mantissa() const' into 'float cordic_::atan2_generic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::data() const (.27.36.45.54.63)' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::to_ieee() const' into 'float cordic_::atan2_cordic_Q1<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:711:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::fp_struct(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isnan<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_nan<float>(char const*)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'fp_struct<float>::__signbit() const' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'int generic_isinf<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'float generic_abs<float>(float)' into 'float cordic_::atan2_cordic<float>(float, float)' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:725:0)
INFO: [HLS 214-178] Inlining function 'atan2f' into 'init_cart2pol_LUTs(ap_fixed<8, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*, ap_fixed<8, 3, (ap_q_mode)5, (ap_o_mode)3, 0>*)' (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-376] automatically set the pipeline for Loop< VITIS_LOOP_13_1> at cordiccart2pol.cpp:13:20 
INFO: [HLS 214-291] Loop 'VITIS_LOOP_19_2' is marked as complete unroll implied by the pipeline pragma (cordiccart2pol.cpp:19:22)
INFO: [HLS 214-291] Loop 'anonymous' is marked as complete unroll implied by the pipeline pragma (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2)
INFO: [HLS 214-186] Unrolling loop 'VITIS_LOOP_19_2' (cordiccart2pol.cpp:19:22) in function 'init_cart2pol_LUTs' completely with a factor of 8 (cordiccart2pol.cpp:12:0)
INFO: [HLS 214-186] Unrolling loop 'anonymous' (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:138:2) in function 'cordic_::atan2_generic<float>' completely with a factor of 42 (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:648:0)
INFO: [HLS 200-111] Finished Compiling Optimization and Transform: CPU user time: 193.77 seconds. CPU system time: 4.47 seconds. Elapsed time: 202.3 seconds; current allocated memory: 671.145 MB.
INFO: [HLS 200-111] Finished Checking Pragmas: CPU user time: 0 seconds. CPU system time: 0 seconds. Elapsed time: 0 seconds; current allocated memory: 671.145 MB.
INFO: [HLS 200-10] Starting code transformations ...
INFO: [HLS 200-111] Finished Standard Transforms: CPU user time: 0.11 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.13 seconds; current allocated memory: 674.055 MB.
INFO: [HLS 200-10] Checking synthesizability ...
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
WARNING: [SYNCHK 200-23] /wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/include/FloatingPoint/hls_cordic.h:702: variable-indexed range selection may cause suboptimal QoR.
INFO: [SYNCHK 200-10] 0 error(s), 1 warning(s).
INFO: [HLS 200-111] Finished Checking Synthesizability: CPU user time: 0.11 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 678.609 MB.
INFO: [XFORM 203-602] Inlining function 'fp_struct<float>::to_ieee' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-602] Inlining function 'generic_copysign<float>' into 'cordic_::atan2_cordic<float>' () automatically.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (cordiccart2pol.cpp:13:29) to (cordiccart2pol.cpp:27:19) in function 'init_cart2pol_LUTs'... converting 5 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock from (/wrk/ci/prod/2024.2/hls_product/continuous/495/2024.2/src/shared/hls/clib/hlsmath/src/c/atan2float.cpp:6:22) in function 'init_cart2pol_LUTs'... converting 13 basic blocks.
INFO: [XFORM 203-401] Performing if-conversion on hyperblock in function 'cordic_::atan2_generic<float>'... converting 8 basic blocks.
INFO: [HLS 200-111] Finished Loop, function and other optimizations: CPU user time: 0.44 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.51 seconds; current allocated memory: 704.176 MB.
INFO: [HLS 200-111] Finished Architecture Synthesis: CPU user time: 0.41 seconds. CPU system time: 0.03 seconds. Elapsed time: 0.51 seconds; current allocated memory: 756.930 MB.
INFO: [HLS 200-10] Starting hardware synthesis ...
INFO: [HLS 200-10] Synthesizing 'cordiccart2pol' ...
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>' to 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
WARNING: [SYN 201-103] Legalizing function name 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >' to 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_generic<float>' to 'atan2_generic_float_s'.
WARNING: [SYN 201-103] Legalizing function name 'atan2_cordic<float>' to 'atan2_cordic_float_s'.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0.09 seconds. Elapsed time: 0.32 seconds; current allocated memory: 756.930 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.08 seconds; current allocated memory: 756.930 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<43, 4, 5, 3, 0>, ap_fixed<43, 4, 5, 3, 0>, bool>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.04 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.09 seconds; current allocated memory: 756.930 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 756.930 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 1, function 'addsub<0, 0, ap_fixed<40, 1, 5, 3, 0>, ap_fixed<40, 1, 0, 3, 0>, ap_uint<1> >'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 756.996 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.03 seconds. CPU system time: 0 seconds. Elapsed time: 0.09 seconds; current allocated memory: 757.055 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_generic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 48, function 'atan2_generic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.55 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.62 seconds; current allocated memory: 767.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.15 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.26 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining function 'atan2_cordic<float>'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 63, function 'atan2_cordic<float>'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.2 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.3 seconds; current allocated memory: 767.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.1 seconds. CPU system time: 0 seconds. Elapsed time: 0.19 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-61] Pipelining loop 'VITIS_LOOP_13_1'.
INFO: [HLS 200-1470] Pipelining result : Target II = NA, Final II = 1, Depth = 73, loop 'VITIS_LOOP_13_1'
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.33 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.41 seconds; current allocated memory: 767.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.09 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.17 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-42] -- Implementing module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [SCHED 204-11] Starting scheduling ...
INFO: [SCHED 204-11] Finished scheduling.
INFO: [HLS 200-111] Finished Scheduling: CPU user time: 0.09 seconds. CPU system time: 0 seconds. Elapsed time: 0.16 seconds; current allocated memory: 767.355 MB.
INFO: [BIND 205-100] Starting micro-architecture generation ...
INFO: [BIND 205-101] Performing variable lifetime analysis.
INFO: [BIND 205-101] Exploring resource sharing.
INFO: [BIND 205-101] Binding ...
INFO: [BIND 205-100] Finished micro-architecture generation.
INFO: [HLS 200-111] Finished Binding: CPU user time: 0.05 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.11 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.07 seconds. CPU system time: 0 seconds. Elapsed time: 0.13 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_43_4_5_3_0_ap_fixed_43_4_5_3_0_bool_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.08 seconds. CPU system time: 0.01 seconds. Elapsed time: 0.16 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Finished creating RTL model for 'addsub_0_0_ap_fixed_40_1_5_3_0_ap_fixed_40_1_0_3_0_ap_uint_1_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.09 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.19 seconds; current allocated memory: 767.355 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_generic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-100] Generating core module 'bitselect_1ns_40ns_32s_1_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'ctlz_40_40_1_0': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fdiv_32ns_32ns_32_16_no_dsp_0': 1 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_generic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.44 seconds. CPU system time: 0.02 seconds. Elapsed time: 0.6 seconds; current allocated memory: 778.516 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'atan2_cordic_float_s' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [RTGEN 206-104] Estimated max fanout for 'atan2_cordic_float_s' is 9028 from HDL expression: (1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp119)
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsub_32ns_32ns_32_5_full_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'atan2_cordic_float_s'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.72 seconds. CPU system time: 0.12 seconds. Elapsed time: 1.05 seconds; current allocated memory: 788.043 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'init_cart2pol_LUTs' 
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-1030] Apply Unified Pipeline Control on module 'init_cart2pol_LUTs' pipeline 'VITIS_LOOP_13_1' pipeline type 'loop pipeline'
WARNING: [RTGEN 206-101] RTL name 'fcmp_32ns_32ns_1_2_no_dsp_1' is changed to 'fcmp_32ns_32ns_1_2_no_dsp_1_x' due to conflict.
INFO: [RTGEN 206-100] Generating core module 'ctlz_8_8_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fadd_32ns_32ns_32_5_full_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fcmp_32ns_32ns_1_2_no_dsp_1_x': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fmul_32ns_32ns_32_4_max_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fpext_32ns_64_2_no_dsp_1': 2 instance(s).
INFO: [RTGEN 206-100] Generating core module 'fsqrt_32ns_32ns_32_16_no_dsp_1': 1 instance(s).
INFO: [RTGEN 206-100] Generating core module 'sparsemux_9_3_8_1_1': 2 instance(s).
INFO: [RTGEN 206-100] Finished creating RTL model for 'init_cart2pol_LUTs'.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.4 seconds. CPU system time: 0.05 seconds. Elapsed time: 0.71 seconds; current allocated memory: 793.660 MB.
INFO: [HLS 200-10] ----------------------------------------------------------------
INFO: [HLS 200-10] -- Generating RTL for module 'cordiccart2pol' 
INFO: [HLS 200-10] ----------------------------------------------------------------
WARNING: [RTGEN 206-101] Design contains AXI ports. Reset is fixed to synchronous and active low.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/x' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/y' to 's_axilite & ap_none'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/r' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on port 'cordiccart2pol/theta' to 's_axilite & ap_vld'.
INFO: [RTGEN 206-500] Setting interface mode on function 'cordiccart2pol' to 's_axilite & ap_ctrl_hs'.
WARNING: [RTGEN 206-101] Register 'initialized' is power-on initialization.
INFO: [RTGEN 206-100] Bundling port 'x', 'y', 'r', 'theta' and 'return' to AXI-Lite port CTRL.
INFO: [RTGEN 206-100] Finished creating RTL model for 'cordiccart2pol'.
INFO: [RTMG 210-278] Implementing memory 'cordiccart2pol_my_LUT_th_RAM_AUTO_1R1W' using auto RAMs.
INFO: [HLS 200-111] Finished Creating RTL model: CPU user time: 0.53 seconds. CPU system time: 0.08 seconds. Elapsed time: 0.9 seconds; current allocated memory: 796.812 MB.
INFO: [HLS 200-111] Finished Generating all RTL models: CPU user time: 0.59 seconds. CPU system time: 0.1 seconds. Elapsed time: 1.8 seconds; current allocated memory: 799.605 MB.
INFO: [HLS 200-111] Finished Updating report files: CPU user time: 1.56 seconds. CPU system time: 0.1 seconds. Elapsed time: 2.13 seconds; current allocated memory: 809.145 MB.
INFO: [VHDL 208-304] Generating VHDL RTL for cordiccart2pol.
INFO: [VLOG 209-307] Generating Verilog RTL for cordiccart2pol.
INFO: [HLS 200-790] **** Loop Constraint Status: All loop constraints were satisfied.
INFO: [HLS 200-789] **** Estimated Fmax: 137.82 MHz
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:03:50; Allocated memory: 165.934 MB.
INFO: [HLS 200-112] Total CPU user time: 215.11 seconds. Total CPU system time: 8.15 seconds. Total elapsed time: 246.3 seconds; peak allocated memory: 809.145 MB.
INFO: [vitis-run 60-791] Total elapsed time: 0h 4m 8s
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
cp -f cordiccart2pol.comp/hls/syn/report/cordiccart2pol_csynth.rpt cordiccart2pol_csynth.rpt


================================================================
== Vitis HLS Report for 'cordiccart2pol'
================================================================
* Date:           Thu Oct 22 22:48:27 2026

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
    +---------+---------+-----------+----------+-----+-------+---------+
    |  Latency (cycles) |  Latency (absolute)  |   Interval  | Pipeline|
    |   min   |   max   |    min    |    max   | min |  max  |   Type  |
    +---------+---------+-----------+----------+-----+-------+---------+
    |        3|    65612|  30.000 ns|  0.656 ms|    4|  65613|       no|
    +---------+---------+-----------+----------+-----+-------+---------+

    + Detail: 
        * Instance: 
        +-------------------------------+--------------------+---------+---------+----------+----------+-------+-------+------------------------------------------------+
        |                               |                    |  Latency (cycles) |  Latency (absolute) |    Interval   |                    Pipeline                    |
        |            Instance           |       Module       |   min   |   max   |    min   |    max   |  min  |  max  |                      Type                      |
        +-------------------------------+--------------------+---------+---------+----------+----------+-------+-------+------------------------------------------------+
        |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |    65609|    65609|  0.656 ms|  0.656 ms|  65537|  65537|  loop auto-rewind stp (delay=0 clock cycles(s))|
        +-------------------------------+--------------------+---------+---------+----------+----------+-------+-------+------------------------------------------------+

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
|Expression       |        -|    -|       0|      2|    -|
|FIFO             |        -|    -|       -|      -|    -|
|Instance         |        0|   12|   16551|  23562|    -|
|Memory           |       64|    -|       0|      0|    0|
|Multiplexer      |        -|    -|       0|    115|    -|
|Register         |        -|    -|      23|      -|    -|
+-----------------+---------+-----+--------+-------+-----+
|Total            |       64|   12|   16574|  23679|    0|
+-----------------+---------+-----+--------+-------+-----+
|Available        |      280|  220|  106400|  53200|    0|
+-----------------+---------+-----+--------+-------+-----+
|Utilization (%)  |       22|    5|      15|     44|    0|
+-----------------+---------+-----+--------+-------+-----+

+ Detail: 
    * Instance: 
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |            Instance           |       Module       | BRAM_18K| DSP|   FF  |  LUT  | URAM|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |CTRL_s_axi_U                   |CTRL_s_axi          |        0|   0|     92|    104|    0|
    |grp_init_cart2pol_LUTs_fu_110  |init_cart2pol_LUTs  |        0|  12|  16459|  23458|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+
    |Total                          |                    |        0|  12|  16551|  23562|    0|
    +-------------------------------+--------------------+---------+----+-------+-------+-----+

    * DSP: 
    N/A

    * Memory: 
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+
    |    Memory   |          Module         | BRAM_18K| FF| LUT| URAM| Words | Bits| Banks| W*Bits*Banks|
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+
    |my_LUT_th_U  |my_LUT_th_RAM_AUTO_1R1W  |       32|  0|   0|    0|  65536|    8|     1|       524288|
    |my_LUT_r_U   |my_LUT_th_RAM_AUTO_1R1W  |       32|  0|   0|    0|  65536|    8|     1|       524288|
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+
    |Total        |                         |       64|  0|   0|    0| 131072|   16|     2|      1048576|
    +-------------+-------------------------+---------+---+----+-----+-------+-----+------+-------------+

    * FIFO: 
    N/A

    * Expression: 
    +---------------------------------+----------+----+---+----+------------+------------+
    |          Variable Name          | Operation| DSP| FF| LUT| Bitwidth P0| Bitwidth P1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |ap_block_state2_on_subcall_done  |       and|   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+
    |Total                            |          |   0|  0|   2|           1|           1|
    +---------------------------------+----------+----+---+----+------------+------------+

    * Multiplexer: 
    +--------------------+----+-----------+-----+-----------+
    |        Name        | LUT| Input Size| Bits| Total Bits|
    +--------------------+----+-----------+-----+-----------+
    |ap_NS_fsm           |  25|          5|    1|          5|
    |my_LUT_r_address0   |   9|          2|   16|         32|
    |my_LUT_r_ce0        |   9|          2|    1|          2|
    |my_LUT_r_ce1        |   9|          2|    1|          2|
    |my_LUT_r_we0        |   9|          2|    1|          2|
    |my_LUT_r_we1        |   9|          2|    1|          2|
    |my_LUT_th_address0  |   9|          2|   16|         32|
    |my_LUT_th_ce0       |   9|          2|    1|          2|
    |my_LUT_th_ce1       |   9|          2|    1|          2|
    |my_LUT_th_we0       |   9|          2|    1|          2|
    |my_LUT_th_we1       |   9|          2|    1|          2|
    +--------------------+----+-----------+-----+-----------+
    |Total               | 115|         25|   41|         85|
    +--------------------+----+-----------+-----+-----------+

    * Register: 
    +--------------------------------------------+---+----+-----+-----------+
    |                    Name                    | FF| LUT| Bits| Const Bits|
    +--------------------------------------------+---+----+-----+-----------+
    |ap_CS_fsm                                   |  4|   0|    4|          0|
    |grp_init_cart2pol_LUTs_fu_110_ap_start_reg  |  1|   0|    1|          0|
    |initialized                                 |  1|   0|    1|          0|
    |initialized_load_reg_150                    |  1|   0|    1|          0|
    |x_read_reg_145                              |  8|   0|    8|          0|
    |y_read_reg_140                              |  8|   0|    8|          0|
    +--------------------------------------------+---+----+-----+-----------+
    |Total                                       | 23|   0|   23|          0|
    +--------------------------------------------+---+----+-----+-----------+



================================================================
== Interface
================================================================
* Summary: 
+--------------------+-----+-----+------------+----------------+--------------+
|      RTL Ports     | Dir | Bits|  Protocol  |  Source Object |    C Type    |
+--------------------+-----+-----+------------+----------------+--------------+
|s_axi_CTRL_AWVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_AWADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WVALID   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WREADY   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WDATA    |   in|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_WSTRB    |   in|    4|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARVALID  |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARREADY  |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_ARADDR   |   in|    6|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RDATA    |  out|   32|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_RRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BVALID   |  out|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BREADY   |   in|    1|       s_axi|            CTRL|       pointer|
|s_axi_CTRL_BRESP    |  out|    2|       s_axi|            CTRL|       pointer|
|ap_clk              |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|ap_rst_n            |   in|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
|interrupt           |  out|    1|  ap_ctrl_hs|  cordiccart2pol|  return value|
+--------------------+-----+-----+------------+----------------+--------------+

