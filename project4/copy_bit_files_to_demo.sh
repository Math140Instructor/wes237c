#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
XPR=$(find "$SCRIPT_DIR/vivado" -type f -name "*.xpr" -print -quit)
# Find the Vivado project (.xpr)

if [[ -z "$XPR" ]]; then
    echo "Error: No Vivado project found."
    exit 1
fi

# Get the Vivado project directory and name
PROJECT_DIR=$(dirname "$XPR")
PROJECT_NAME=$(basename "$XPR" .xpr)

NAME="fft"
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

cp "$BIT" Demo/"$NAME".bit
cp "$HWH" Demo/"$NAME".hwh

echo "Successfully copied:"
echo "BIT: $BIT"
echo "HWH: $HWH"

ls -lh Demo/"$NAME".bit Demo/"$NAME".hwh