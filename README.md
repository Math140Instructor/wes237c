# WES 237C - Hardware for Embedded Systems 

This repository contains all lab assignments and corresponding PDF outputs for the WES 237C class.

## Bio

My name is Gabriel Martinez, a Software Engineer at NIWC Pacific focused on researching and developing real-time signal assurance software for common data links using software defined radios (SDRs). I hold a B.S. in Computer Science with a minor in Physics and an M.S. in Applied Mathematics from Cal Poly Pomona.

## Main Resource

https://pp4fpgas.readthedocs.io/

## Run once (from home directory)
mkdir xlnx_compat_fix
ln -s /usr/lib/x86_64-linux-gnu/libtinfo.so.6 ~/xlnx_compat_fix/libtinfo.so.5

Append to .bashrc (maybe have to chmod +w ~/.bashrc)
module load xilinx-vitis
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$HOME/xlnx_compat_fix

## Weekly Assignments

| Lab Reports | Assignments|
|------|-------------|
| [Lab #1](./project-1/) | [Assignment #1](./project-1/) |

Additional weeks will be added as the course progresses.
