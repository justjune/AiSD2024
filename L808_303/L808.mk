CXX = g++
CXXFLAGS = -Wall -std=c++17

all: L808_303

L808_303: L808_303.o ant.o
	$(CXX) $(CXXFLAGS) -o L808_303 L808_303.o ant.o
	

L808_303.o: L808_303.cpp ant.h
	$(CXX) $(CXXFLAGS) -c L808_303.cpp

ant.o: ant.cpp ant.h
	$(CXX) $(CXXFLAGS) -c ant.cpp

clean:
	rm -f *.o L808_303