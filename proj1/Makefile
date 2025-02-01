# Rei Hernandez
# ECS34 Winter 2025

# Assignment: The Makefile you develop needs to implement the following:

# ● Must compile string utils file and string utils tests using C++17
# ● Must link string utils and string utils tests object files to make teststrutils
# executable



# Compiler and flags

CXX = g++ # This is to run C++
CXXFLAGS = -g -std=c++17 -Wall #for C++ compilier flags?

# ● Must create obj directory for object files (if doesn’t exist)
# ● Must create bin directory for binary files (if doesn’t exist)
OBJ_DIR = obj 
BIN_DIR = bin

# ● Must execute the teststrutils executable
TEST_EXEC = $(BIN_DIR)/teststrutils

# Default rule
all: $(TEST_EXEC)

$(TEST_EXEC): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $^ -o $@

# Mostly correct?
# ● Must provide a clean that will remove the obj and bin directories
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
