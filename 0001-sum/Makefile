CXX := g++
CXXSTD = 11

CXXWARNS := -Wall -Wextra -Wno-unused-variable -Wno-unused-parameter
CXXFLAGS := -std=c++$(CXXSTD) -O2 $(CXXWARNS)

FPC := fpc
FPCFLAGS := -O2 -XXs -v0w -l- -Mobjpas

INPUT    := sum.in
OUTPUT   := sum.out
EXPECTED := expected.txt
DIFFOPTS := -uZa

.PHONY: all cpp pas clean help

MAKEFLAGS += --silent

all: check_input cpp pas compare_output
check_input:
	@echo "Checking if input exists..."
	@if [ -e "input.txt" ]; then \
		echo "The input file exists..."; \
		if [ -s "input.txt" ]; then \
			echo "The input file is not empty!"; \
			cp "input.txt" "cpp/$(INPUT)"; \
			cp "input.txt" "pas/$(INPUT)"; \
		else \
			echo "The input file is empty!"; \
			exit 1; \
		fi \
	else \
		echo "The input file doesn't exist!"; \
		exit 1; \
	fi; 


cpp: check_cpp check_input cpp/main
	@echo "Running C++ program:"
	(cd cpp && ./main)
	@if [ $$? -eq 0 ]; then \
		echo "C++ program ran successfully."; \
		echo "Here's the output:"; \
		cat cpp/$(OUTPUT); \
	else \
		echo "C++ program encountered an error"; \
	fi
	@echo;

pas: check_cpp check_input pas/main
	@echo "Running Pascal program:"
	(cd pas && ./main)
	@if [ $$? -eq 0 ]; then \
		echo "Pascal program ran successfully."; \
		echo "Here's the output:"; \
		cat pas/$(OUTPUT); \
	else \
		echo "Pascal program encountered an error"; \
	fi
	@echo;

cpp/main: cpp/main.cpp cpp/sum.in
	@echo "Compiling C++ program..."
	$(CXX) $(CXXFLAGS) -o $@ cpp/main.cpp

pas/main: pas/main.pas pas/sum.in
	@echo "Compiling Pascal program..."
	$(FPC) $(FPCFLAGS) -o$@ $<

clean:
	@echo "Cleaning..."
	rm -f cpp/main pas/main pas/main.o cpp/$(OUTPUT) cpp/$(INPUT) pas/$(OUTPUT) pas/$(INPUT)

help:
	@echo "Available targets:"
	@echo "  - cpp: Compile and run the C++ program"
	@echo "  - pas: Compile and run the Pascal program"
	@echo "  - clean: Remove compiled binaries"
	@echo "  - help: Display this help message"

check_cpp:
	@if ! which $(CXX) > /dev/null; then \
		echo "Error: C++ compiler (g++) not found in PATH"; \
		exit 1; \
	fi

check_pas:
	@if ! which $(FPC) > /dev/null; then \
		echo "Error: Pascal compiler (fpc) not found in PATH"; \
		exit 1; \
	fi

compare_output: cpp pas
	@make compare_cpp_output
	@echo
	@make compare_pas_output

compare_cpp_output:
	@echo "Comparing C++ output..."
	@if [ -e cpp/$(OUTPUT) ]; then \
        if diff $(DIFFOPTS) cpp/$(OUTPUT) $(EXPECTED) &>/dev/null; then \
            echo "The C++ output matches the expected result!"; \
        else \
            echo "The C++ output does not match the expected result!"; \
            echo "Diff: "; \
            diff $(DIFFOPTS) cpp/$(OUTPUT) $(EXPECTED); \
        fi; \
    fi

compare_pas_output:
	@echo "Comparing Pascal output..."
	@if [ -e pas/$(OUTPUT) ]; then \
        if diff $(DIFFOPTS) pas/$(OUTPUT) $(EXPECTED) &>/dev/null; then \
            echo "The Pascal output matches the expected result!"; \
        else \
            echo "The Pascal output does not match the expected result!"; \
            echo "Diff: "; \
            diff $(DIFFOPTS) pas/$(OUTPUT) $(EXPECTED); \
        fi; \
    fi