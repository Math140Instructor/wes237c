# This makefile was tested with Vivado HLS 2019.2
# and Vitis v2024.1
# 
#

# select the HLS compiler to use (vivado_hls or vitis)
TOP = fir
SRC ?= $(TOP).cpp
SRC_NAME = $(basename $(notdir $(SRC)))

USE_VITIS = 1

ifeq ($(USE_VITIS),1)

VITIS_HLS_PATH := $(shell which vitis_hls 2>/dev/null)

ifeq ($(strip $(VITIS_HLS_PATH)),)
  $(error Could not find "vitis_hls" on PATH.)
endif

VITIS_COMPILER := $(shell dirname "$(VITIS_HLS_PATH)")

ifneq (,$(findstring 2024.2,$(VITIS_HLS_PATH)))
  VHLS := $(VITIS_COMPILER)/../../../Vitis/2024.2
else
  VHLS := $(VITIS_COMPILER)/../../../Vitis_HLS/2024.1
endif

HLS_COMPILER = vitis-run --mode hls --tcl

else

VHLS := $(shell vivado_hls -r)
HLS_COMPILER = vivado_hls -f

endif


# Compiler
CC = gcc
CXX = g++


# Library path
LD_PATH_NEW = /usr/lib/x86_64-linux-gnu

LD_LIBRARY_PATH := $(shell echo $(value LD_LIBRARY_PATH) | grep -q $(LD_PATH_NEW) || echo $(LD_PATH_NEW):)$(value LD_LIBRARY_PATH)


# HLS configuration
GEN_TCL = $(CURDIR)/../../scripts/gen_hls_runner_script.py
HLS_CONFIG_FILE = $(CURDIR)/__hls_config__.ini


# Testbench files
EXAMPLES_CPP = $(wildcard *_test.cpp)
EXAMPLES_BIN = $(patsubst %.cpp,%.bin,$(EXAMPLES_CPP))


# HLS targets
HLS_TARGET = $(SRC_NAME).comp
HLS_TCL = $(SRC_NAME).tcl


# Default target
.DEFAULT_GOAL := test


# Compile object files
%.o: %.cpp
	$(CXX) -I$(VHLS)/include -c $< -o $@


# Force recompilation when changing SRC
.PHONY: FORCE
FORCE:


# Build testbench using selected source
%_test.bin: %_test.cpp $(SRC) FORCE
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH) $(CXX) -I$(VHLS)/include $(filter %.cpp,$^) -g -o $@


# Run testbench
.PHONY: test
test: $(EXAMPLES_BIN)
	@set -e; for bin in $(EXAMPLES_BIN); do \
		echo "Running $$bin with $(SRC)"; \
		LD_LIBRARY_PATH=$(LD_LIBRARY_PATH) ./$$bin > $${bin%.bin}.log 2>&1; \
	done


# Generate Tcl for selected source, always synthesize fir()
$(HLS_TCL): $(SRC) $(HLS_CONFIG_FILE) FORCE
	$(GEN_TCL) -c $(HLS_CONFIG_FILE) -i $(SRC) -o $@
	sed -i -E 's/^[[:space:]]*set_top[[:space:]]+.*/set_top $(TOP)/; s/^[[:space:]]*add_files[[:space:]]+-tb[[:space:]]+.*/add_files -tb $(TOP)-top.cpp/' $@
	@grep -qE '^[[:space:]]*set_top[[:space:]]+$(TOP)[[:space:]]*$$' $@ || { echo "ERROR: HLS top function is not $(TOP)"; exit 1; }

# Run HLS synthesis
# Phony target ensures synthesis runs when requested.
.PHONY: hls
hls: $(HLS_TCL)
	$(HLS_COMPILER) $(HLS_TCL)


# Copy synthesis report using selected source name
.PHONY: report
report: hls
	cp -f $(SRC_NAME).comp/hls/syn/report/$(TOP)_csynth.rpt $(SRC_NAME)_csynth.rpt


# Clean generated files
.PHONY: clean
clean:
	rm -rf *.o *.log *.bin *.tcl *.comp *.rpt logs hls out.dat


# Prevent deletion of intermediate files
.PRECIOUS: %.bin %.tcl