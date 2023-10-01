CXX := g++
CXXSTD = 11

CXXWARNS := -Wall -Wextra -Wno-unused-variable -Wno-unused-parameter
CXXFLAGS := -std=c++$(CXXSTD) -O2 $(CXXWARNS)

FPC := fpc
FPCFLAGS := -O2 -XXs -v0w -l- -Mobjpas

INPUT    := input.txt
EXPECTED := expected.txt
DIFFOPTS := -uZa

.PHONY: all cpp pas clean help

MAKEFLAGS += --silent

all: check_input cpp pas compare_output

check_input:
	@if [ "$(INTERACTIVE)" = "1" ]; then \
		echo "Checking if input exists..."; \
		if [ -e "$(INPUT)" ]; then \
			echo "The input file exists..."; \
			if [ -s "$(INPUT)" ]; then \
				echo "The input file is not empty!"; \
			else \
				echo "The input file is empty!"; \
			fi \
		else \
			echo "The input file doesn't exist!"; \
		fi; \
	fi
cpp: check_cpp check_input cpp/main 
	@echo "Running C++ program:"
	@if [ "$(INTERACTIVE)" = "1" ]; then \
		(cd cpp && ./main) > cpp/output.txt; \
	else \
		(cd cpp && ./main < ../input.txt) > cpp/output.txt; \
	fi
	@if [ $$? -eq 0 ]; then \
		echo "C++ program ran successfully."; \
	else \
		echo "C++ program encountered an error"; \
	fi
	@echo;

pas: check_pas check_input pas/main
	@echo "Running Pascal program:"
	@if [ "$(INTERACTIVE)" = "1" ]; then \
		(cd pas && ./main) > pas/output.txt; \
	else \
		(cd pas && ./main < ../input.txt) > pas/output.txt; \
	fi
	@if [ $$? -eq 0 ]; then \
		echo "Pascal program ran successfully."; \
	else \
		echo "Pascal program encountered an error"; \
	fi
	@echo;

cpp/main: cpp/main.cpp $(INPUT)
	@echo "Compiling C++ program..."
	$(CXX) $(CXXFLAGS) -o $@ cpp/main.cpp

pas/main: pas/main.pas $(INPUT)
	@echo "Compiling Pascal program..."
	$(FPC) $(FPCFLAGS) -o$@ $<

clean:
	@echo "Cleaning..."
	rm cpp/main pas/main pas/main.o cpp/output.txt pas/output.txt

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
	@if [ -e cpp/output.txt ]; then \
        if diff $(DIFFOPTS) cpp/output.txt $(EXPECTED) &>/dev/null; then \
            echo "The C++ output matches the expected result!"; \
        else \
            echo "The C++ output does not match the expected result!"; \
            echo "Diff: "; \
            diff $(DIFFOPTS) cpp/output.txt $(EXPECTED); \
        fi; \
    fi

compare_pas_output:
	@echo "Comparing Pascal output..."	
	@if [ -e pas/output.txt ]; then \
        if diff $(DIFFOPTS) pas/output.txt $(EXPECTED) &>/dev/null; then \
            echo "The Pascal output matches the expected result!"; \
        else \
            echo "The Pascal output does not match the expected result!"; \
            echo "Diff: "; \
            diff $(DIFFOPTS) pas/output.txt $(EXPECTED); \
        fi; \
    fi
