CXX := g++
CXXSTD = 11

CXXWARNS := -Wall -Wextra -Wno-unused-variable -Wno-unused-parameter
CXXFLAGS := -std=c++$(CXXSTD) -O2 -march=native $(CXXWARNS)

INPUT    := input.txt
EXPECTED := expected.txt
DIFFOPTS := -Za --side-by-side

.PHONY: all cpp pas clean help

MAKEFLAGS += --silent

all: cpp pas compare_output

cpp: check_cpp input.txt cpp/main 
	@echo "Running C++ program:"
	(cd cpp && ./main < ../input.txt) > cpp/output.txt;
	@if [ $$? -eq 0 ]; then \
		echo "C++ program ran successfully."; \
	else \
		echo "C++ program encountered an error"; \
	fi
	@echo;

cpp/main: cpp/main.cpp $(INPUT)
	@echo "Compiling C++ program..."
	$(CXX) $(CXXFLAGS) -o $@ cpp/main.cpp

clean:
	@echo "Cleaning..."
	rm -f cpp/main cpp/output.txt

help:
	@echo "Available targets:"
	@echo "  - cpp: Compile and run the C++ program"
	@echo "  - clean: Remove compiled binaries"
	@echo "  - help: Display this help message"

check_cpp:
	@if ! which $(CXX) > /dev/null; then \
		echo "Error: C++ compiler (g++) not found in PATH"; \
		exit 1; \
	fi

compare_output: cpp
	@make compare_cpp_output

compare_cpp_output:
	@echo "Comparing C++ output..."
	@if [ -e cpp/output.txt ]; then \
        if diff $(DIFFOPTS) cpp/output.txt $(EXPECTED) &>/dev/null; then \
            echo "The C++ output matches the expected result!"; \
        else \
            echo "The C++ output does not match the expected result!"; \
            echo "Diff: "; \
            diff $(DIFFOPTS) cpp/output.txt $(EXPECTED); \
        fi; \
    fi
