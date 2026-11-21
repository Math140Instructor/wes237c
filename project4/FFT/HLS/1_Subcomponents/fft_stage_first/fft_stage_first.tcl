open_component fft_stage_first.comp -reset
add_files [list fft_stage_first.cpp fft_stage_first.h]
add_files -tb [list fft_stage_first_test.cpp out.gold.dat]
set_top fft_stage_first
puts "Running: set_top fft_stage_first"
set_part xc7z020clg400-1
puts "Running: set_part xc7z020clg400-1"
create_clock -period 10

source directives.tcl
csynth_design

exit