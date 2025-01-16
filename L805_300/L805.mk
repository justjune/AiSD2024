CXX = g++
CXXFLAGS = -Wall -std=c++17

all: L805_300


L805_300: L805_300.o anka.o
	$(CXX) $(CXXFLAGS) -o L805_300 L805_300.o anka.o

L805_300.o: L805_300.cpp anka.h
	$(CXX) $(CXXFLAGS) -c L805_300.cpp

anka.o: anka.cpp anka.h
	$(CXX) $(CXXFLAGS) -c anka.cpp

clean:
	rm -f *.o L805_300