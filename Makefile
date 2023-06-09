# Directories
SRCDIR := src
BUILDDIR := build
INCLDIR := include

# Compiler options
CC := C:\MinGW\bin\g++.exe
CFLAGS := -std=c++11 -Wall -Wextra -I$(INCLDIR) -g

# Source files and object files
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

# Binary output
TARGET := $(BUILDDIR)/myprogram.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	@if not exist $(subst /,\,$(BUILDDIR)) mkdir $(subst /,\,$(BUILDDIR))
	$(CC) $(CFLAGS) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@if not exist $(subst /,\,$(BUILDDIR)) mkdir $(subst /,\,$(BUILDDIR))
	@echo compiling $<
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del $(BUILDDIR)

.PHONY: all clean
