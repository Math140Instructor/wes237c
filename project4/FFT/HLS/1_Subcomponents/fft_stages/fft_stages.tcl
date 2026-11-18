open_component fft_stages.comp -reset
add_files [list fft_stages.cpp fft_stages.h]
add_files -tb [list fft_stages_test.cpp out2.gold.dat out3.gold.dat out4.gold.dat out5.gold.dat out6.gold.dat out7.gold.dat out8.gold.dat out9.gold.dat]
set_top fft_stages
puts "Running: set_top fft_stages"
set_part xc7z020clg400-1
puts "Running: set_part xc7z020clg400-1"
create_clock -period 10

source directives.tcl
csynth_design

exit