# Makefile

# Compiler (default clang, override with CC=gcc)
CC = clang

# Flags
CFLAGS = -O -Wall -Wpedantic -std=c99

# Source file passed in (e.g., make SRC=01-fundamentals/pun.c)
SRC ?= 01-fundamentals/pun.c

# Target executable name = source file name without .c
TARGET = $(basename $(notdir $(SRC)))

# Output directory (root-level bin)
BINDIR = bin

# Build rule
$(BINDIR)/$(TARGET): $(SRC)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/$(TARGET) $(SRC)

# Default target
all: $(BINDIR)/$(TARGET)

# Clean rule
clean:
	rm -f $(BINDIR)/*

# This is an example of how to run this Makefile
# make SRC=02-printing/addfrac.c