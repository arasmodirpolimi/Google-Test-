# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -I/usr/include/gtest -pthread

# Google Test library
GTEST_LIBS = -lgtest -lgtest_main

# Target executable
TARGET = test

# Source file
SRCS = test.cpp

# Build target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(GTEST_LIBS)

# Clean target
clean:
	rm -f $(TARGET)
