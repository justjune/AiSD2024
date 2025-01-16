CXX = g++
CXXFLAGS = -Wall -std=c++17

all: L801_294

L801_294: L801_294.o shok.o
	$(CXX) $(CXXFLAGS) -o L801_294 L801_294.o shok.o

L801_294.o: L801_294.cpp shok.h
	$(CXX) $(CXXFLAGS) -c L801_294.cpp

shok.o: shok.cpp shok.h
	$(CXX) $(CXXFLAGS) -c shok.cpp

clean:
	rm -f *.o L801_294