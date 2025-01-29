# Rei Hernandez
# ECS34 Winter 2025

# The Makefile you develop needs to implement the following:
# ● Must create obj directory for object files (if doesn’t exist)
# ● Must create bin directory for binary files (if doesn’t exist)
# ● Must compile string utils file and string utils tests using C++17
# ● Must link string utils and string utils tests object files to make teststrutils
# executable
# ● Must execute the teststrutils executable
# ● Must provide a clean that will remove the obj and bin directories


# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

# Directories
# SRC_DIR = src
OBJ_DIR = obj 
BIN_DIR = bin

# Source files and object files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Test executable
TEST_EXEC = $(BIN_DIR)/teststrutils

# Default rule
all: $(TEST_EXEC)

# Rule to create the test executable
$(TEST_EXEC): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Phony 
.PHONY: clean

# Mostly correct?
# Clean to remove obj and bin directories
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
