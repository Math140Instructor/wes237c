# Project 2 

Please see the `cordic` and `phase_detector` folders.

## Below are notes to self

![alt text](image.png)

make -k test hls report >> README.md 

modified Makefile in 2b folder to cat the output of test log and report

## AXI4-Lite Interface Configuration

pragmas create an AXI4-Lite interface that allows the Zynq processor to control the CORDIC function and read/write its inputs (x, y) and outputs (r, theta) through memory-mapped registers.
`
void cordiccart2pol(data_t x, data_t y, data_t *r, data_t *theta) {
#pragma HLS INTERFACE s_axilite port = x bundle = CTRL
#pragma HLS INTERFACE s_axilite port = y bundle = CTRL
#pragma HLS INTERFACE s_axilite port = r bundle = CTRL
#pragma HLS INTERFACE s_axilite port = theta bundle = CTRL
#pragma HLS INTERFACE s_axilite port = return bundle = CTRL
...
}`

## Make RTL
make hls
## Make IP
vitis-run --mode hls --tcl export_ip.tcl

## Vivado
IP repo hls/impl/ip
datasources hls/impl/verilog

block design
processing system
IP

run synth
run impl
run bitream

## Locate your bitstream at:
vivado.runs/impl_1/design_2_wrapper.bit

Locate the hardware handoff file (.hwh), typically under:

vivado.gen/sources_1/bd/design_2/hw_handoff/

Copy both files to your PYNQ-Z2 and rename them to:
- cordic.bit
- cordic.hwh

Place both files alongside your Jupyter notebook.


## misc
set_property top design_2_wrapper [get_filesets sources_1]
update_compile_order -fileset sources_1
puts "TOP = [get_property top [get_filesets sources_1]]"