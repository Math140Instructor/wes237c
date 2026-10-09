open_component fir_loop_partition.comp -reset
add_files [list fir_loop_partition.cpp]
add_files -tb fir_test.cpp
set_top fir
puts "Running: set_top fir_loop_partition"
set_part xc7z020-clg400-1
puts "Running: set_part xc7z020-clg400-1"
create_clock -period 10
csynth_design

exit