#include <ap_int.h>
#include <hls_stream.h>
#include <ap_axi_sdata.h>

typedef float DTYPE;
#define SIZE 1024 /* SIZE OF DFT */

typedef hls::axis<DTYPE, 0, 0, 0> transPkt;

void dft(hls::stream<transPkt> &real_in,
         hls::stream<transPkt> &imag_in,
         hls::stream<transPkt> &real_out,
         hls::stream<transPkt> &imag_out);