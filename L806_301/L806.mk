CXX = g++
CXXFLAGS = -Wall -std=c++17

all: L806_301

L806_301: L806_301.o anet.o
	$(CXX) $(CXXFLAGS) -o L806_301 L806_301.o anet.o



L806_301.o: L806_301.cpp anet.h
	$(CXX) $(CXXFLAGS) -c L806_301.cpp

anet.o: anet.cpp anet.h
	$(CXX) $(CXXFLAGS) -c anet.cpp

clean:
	rm -f *.o L806_301