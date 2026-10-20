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

## Export IP
make hls
vitis-run --mode hls --tcl export_ip.tcl