# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -g

# Executable name
TARGET = program

# Source directory
SRC_DIR = src

# Source files (located in the src folder)
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Object files (outside of src folder, replacing .cpp with .o)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, %.o, $(SRCS))

# Rule to build the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files
%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# PHONY target to prevent conflicts with files named 'clean'
.PHONY: clean
