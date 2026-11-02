#include <ap_int.h>
#include <hls_stream.h>

typedef float DTYPE;
#define SIZE 1024 /* SIZE OF DFT */

void dft(hls::stream<DTYPE> &real_in, hls::stream<DTYPE> &imag_in, hls::stream<DTYPE> &real_out, hls::stream<DTYPE> &imag_out);
