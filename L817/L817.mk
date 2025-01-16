# Makefile for L817 Project

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

TARGET = L817_318

SRC = L817.cpp L817_318.cpp
HEADERS = l817.h

# Default target
$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up build artifacts
clean:
	rm -f $(TARGET)
