LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu::/home/linux/ieng6/students/519/gam009/xlnx_compat_fix:/home/linux/ieng6/students/519/gam009/xlnx_compat_fix g++ -I/software/common/Xilinx_Vitis/Vitis_HLS/2024.2/bin/../../../Vitis/2024.2/include fir_test.cpp fir_orig.cpp -g -o fir_test.bin
./fir_test.bin > fir_test.log 2>&1 || { s=$?; echo "./fir_test.bin > fir_test.log failed $s" >&2; exit $s; }
/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/../../scripts/gen_hls_runner_script.py -c /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/__hls_config__.ini -i fir_orig.cpp -o fir_orig.tcl
vitis-run --mode hls --tcl fir_orig.tcl || { s=$?; echo "vitis-run --mode hls --tcl fir_orig.tcl failed $s" >&2; exit $s; }

****** vitis-run v2024.2 (64-bit)
  **** SW Build 5239630 on 2024-11-10-11:19:46
  **** Start of session at: Thu Oct  8 18:49:06 2026
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
INFO: [HLS 200-1510] Running: add_files -tb fir_orig-top.cpp 
WARNING: [HLS 200-40] Cannot find test bench file 'fir_orig-top.cpp'
INFO: [HLS 200-1510] Running: set_top fir_orig 
Running: set_top fir_orig
INFO: [HLS 200-1510] Running: set_part xc7z020-clg400-1 
INFO: [HLS 200-1611] Setting target device to 'xc7z020-clg400-1'
Running: set_part xc7z020-clg400-1
INFO: [HLS 200-1510] Running: create_clock -period 10 
INFO: [SYN 201-201] Setting up clock 'default' with a period of 10ns.
INFO: [HLS 200-1510] Running: csynth_design 
WARNING: [HLS 200-1998] cannot find relative file path '../../fir_orig-top.cpp' in directory(s): /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/solution /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4
WARNING: [HLS 200-1998] cannot find relative file path '../../fir_orig-top.cpp' in directory(s): /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.comp/solution /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4
INFO: [HLS 200-111] Finished File checks and directory preparation: CPU user time: 0.15 seconds. CPU system time: 0.05 seconds. Elapsed time: 7.78 seconds; current allocated memory: 659.141 MB.
INFO: [HLS 200-10] Analyzing design file 'fir_orig.cpp' ... 
WARNING: [HLS 200-1986] Could not apply TOP directive, invalid function, label, or variable (/home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.tcl:9)
INFO: [HLS 200-111] Finished Source Code Analysis and Preprocessing: CPU user time: 0.49 seconds. CPU system time: 0.76 seconds. Elapsed time: 1.63 seconds; current allocated memory: 660.043 MB.
ERROR: [HLS 214-157] Top function not found: there is no function named 'fir_orig'
error: Top function not found: there is no function named 'fir_orig'
INFO: [HLS 200-2161] Finished Command csynth_design Elapsed time: 00:00:13; Allocated memory: 17.516 MB.
Error in opt
    while executing
"source /home/linux/ieng6/students/519/gam009/wes237c/project1/Q4/fir_orig.tcl"
    ("uplevel" body line 1)
    invoked from within
"uplevel \#0 [list source $tclfile] "

INFO: [HLS 200-112] Total CPU user time: 12.37 seconds. Total CPU system time: 2.58 seconds. Total elapsed time: 27.92 seconds; peak allocated memory: 660.656 MB.
INFO: [vitis-run 60-1662] Stopping dispatch session having empty uuid.
rm fir_test.bin
