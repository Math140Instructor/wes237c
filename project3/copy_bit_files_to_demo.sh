
#!/bin/bash
set -e

# Find Vivado output files
BIT=$(find vivado -path "*/impl_1/*.bit" -type f -print -quit)
HWH=$(find vivado -path "*/hw_handoff/*.hwh" -type f -print -quit)

# Copy to Demo directory
cp "$BIT" Demo/dft.bit
cp "$HWH" Demo/dft.hwh

echo "Copied files to Demo/"
ls -lh Demo/dft.bit Demo/dft.hwh
