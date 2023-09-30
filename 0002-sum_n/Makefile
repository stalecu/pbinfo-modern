CXX := g++
FPC := fpc
CXXFLAGS := -std=c++11 -Wall -Wextra -O2
FPCFLAGS := -O2 -XXs -v0w -l- -Mobjpas

.PHONY: all cpp pas clean help

MAKEFLAGS += --silent

all: cpp pas check_output

cpp: cpp/main
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

pas: pas/main
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

cpp/main: cpp/main.cpp input.txt
	@echo "Compiling C++ program..."
	$(CXX) $(CXXFLAGS) -o $@ cpp/main.cpp

pas/main: pas/main.pas input.txt
	@echo "Compiling Pascal program..."
	$(FPC) $(FPCFLAGS) -o$@ $<

clean:
	@echo "Cleaning..."
	rm -f cpp/main pas/main pas/main.o cpp/output.txt pas/output.txt

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

# Check if fpc is available in the system's PATH for Pascal
check_pas:
	@if ! which $(FPC) > /dev/null; then \
		echo "Error: Pascal compiler (fpc) not found in PATH"; \
		exit 1; \
	fi

check_output:
	@if [ -e cpp/output.txt ] && [ -e pas/output.txt ]; then \
		if cmp -s cpp/output.txt pas/output.txt; then \
			echo "The C++ and Pascal output files are the same!"; \
		else \
			echo "The C++ and Pascal output files are different!"; \
			echo "Diff: "; \
			diff cpp/output.txt pas/output.txt; \
		fi; \
	fi
