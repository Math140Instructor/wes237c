#!/bin/bash
set -euo pipefail

# Find the Vivado project (.xpr)
XPR=$(find . -name "*.xpr" -type f -print -quit)

if [[ -z "$XPR" ]]; then
    echo "Error: No Vivado project found."
    exit 1
fi

# Get the Vivado project directory and name
PROJECT_DIR=$(dirname "$XPR")
PROJECT_NAME=$(basename "$XPR" .xpr)

# Find the bitstream and top-level hardware handoff
BIT="$PROJECT_DIR/$PROJECT_NAME.runs/impl_1/design_1_wrapper.bit"
HWH="$PROJECT_DIR/$PROJECT_NAME.gen/sources_1/bd/design_1/hw_handoff/design_1.hwh"

# Verify files exist
if [[ ! -f "$BIT" || ! -f "$HWH" ]]; then
    echo "Error: Missing bitstream or HWH file."
    echo "BIT: $BIT"
    echo "HWH: $HWH"
    exit 1
fi

# Copy to Demo directory
mkdir -p Demo

cp "$BIT" Demo/dft.bit
cp "$HWH" Demo/dft.hwh

echo "Successfully copied:"
echo "BIT: $BIT"
echo "HWH: $HWH"

ls -lh Demo/dft.bit Demo/dft.hwh