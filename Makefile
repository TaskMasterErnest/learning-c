# # Makefile

# # Compiler (default clang, override with CC=gcc)
# CC = clang

# # Flags
# CFLAGS = -O -Wall -Wpedantic -std=c99

# # Source file passed in (e.g., make SRC=01-fundamentals/pun.c)
# SRC ?= 01-fundamentals/pun.c

# # Target executable name = source file name without .c
# TARGET = $(basename $(notdir $(SRC)))

# # Output directory (root-level bin)
# BINDIR = bin

# # Build rule
# $(BINDIR)/$(TARGET): $(SRC)
# 	@mkdir -p $(BINDIR)
# 	$(CC) $(CFLAGS) -o $(BINDIR)/$(TARGET) $(SRC)

# # Default target
# all: $(BINDIR)/$(TARGET)

# # Clean rule
# clean:
# 	rm -f $(BINDIR)/*

# # This is an example of how to run this Makefile
# # make SRC=02-printing/addfrac.c

# --- Compiler Selection ---
# Default to gcc, but allows overriding via 'make CC=clang'
CC = gcc

# --- Flags ---
# -Wall: Basic warnings
# -Wextra: Extra warnings (highly recommended for C)
# -Wpedantic: Strict ISO C compliance
# -std=c99: Use C99 standard
# -g: Include debug symbols (essential for GDB)
CFLAGS = -Wall -Wextra -Wpedantic -std=c99 -g -O2

# --- File Logic ---
# Usage: make SRC=path/to/file.c
SRC ?= 01-fundamentals/pun.c

# Extract name without extension (e.g., 'pun')
TARGET = $(basename $(notdir $(SRC)))

# Root-level output directory
BINDIR = bin

# --- Targets ---

.PHONY: all clean

# Default target
all: $(BINDIR)/$(TARGET)

# Build rule
$(BINDIR)/$(TARGET): $(SRC)
	@mkdir -p $(BINDIR)
	@echo "Compiling $(SRC) with $(CC)..."
	$(CC) $(CFLAGS) -o $(BINDIR)/$(TARGET) $(SRC)
	@echo "Build successful: ./$(BINDIR)/$(TARGET)"

# Clean rule
clean:
	rm -rf $(BINDIR)