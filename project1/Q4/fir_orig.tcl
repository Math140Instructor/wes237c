open_component fir_orig.comp -reset
add_files [list fir_orig.cpp]
add_files -tb [list fir_orig-top.cpp]
set_top fir_orig
puts "Running: set_top fir_orig"
set_part xc7z020-clg400-1
puts "Running: set_part xc7z020-clg400-1"
create_clock -period 10
csynth_design

exit