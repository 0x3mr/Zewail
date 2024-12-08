# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -g

# Executable name
TARGET = program

# Source files
SRCS = main.cpp MatrixGraph.cpp

# Object files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Rule to build the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# PHONY target to prevent conflicts with files named 'clean'
.PHONY: clean
