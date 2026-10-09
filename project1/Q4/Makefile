# This makefile was tested with Vivado HLS 2019.2
# and Vitis v2024.1

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
EXAMPLES_CPP = $(shell ls *_test.cpp)
EXAMPLES_BIN = $(patsubst %.cpp,%.bin,$(EXAMPLES_CPP))
EXAMPLES_LOG = $(patsubst %.cpp,%.log,$(EXAMPLES_CPP))


# HLS targets
CXX_HLS_TARGET_FILES = $(SRC)
HLS_TARGETS = $(patsubst %.cpp,%.comp,$(CXX_HLS_TARGET_FILES))


# Compile object files
%.o: %.cpp
	$(CXX) -I$(VHLS)/include -c $< -o $@


# Force test recompilation when switching SRC
.PHONY: FORCE
FORCE:


# Build testbench using selected source
%_test.bin: %_test.cpp $(SRC) FORCE
	LD_LIBRARY_PATH=$(LD_LIBRARY_PATH) $(CXX) -I$(VHLS)/include $(filter %.cpp,$^) -g -o $@


# Generate HLS TCL script
%.tcl: %.cpp
	$(GEN_TCL) -c $(HLS_CONFIG_FILE) -i $< -o $@


# Run HLS synthesis
%.comp: %.tcl
	$(HLS_COMPILER) $< || { s=$$?; echo "$(HLS_COMPILER) $< failed $$s" >&2; exit $$s; }


# Execute testbench and save log
%.log: %.bin
	./$< > $@ 2>&1 || { s=$$?; echo "./$< > $@ failed $$s" >&2; exit $$s; }


# HLS target
hls: $(HLS_TARGETS)


# Test target
test: $(EXAMPLES_LOG)


# Copy synthesis report using selected source name
report: hls
	cp -f $(SRC_NAME).comp/hls/syn/report/$(TOP)_csynth.rpt $(SRC_NAME)_csynth.rpt


# Clean generated files
clean:
	rm -rf *.o *.log *.bin *.tcl *.comp *.rpt logs hls out.dat


.PHONY: clean hls test report

# Prevent make from deleting intermediate files
.PRECIOUS: %.bin %.tcl