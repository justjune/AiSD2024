CXX = g++
CXXFLAGS = -Wall -std=c++17

all: ll559_187

ll559_187: ll559_187.o ffff.o
	$(CXX) $(CXXFLAGS) -o ll559_187 ll559_187.o ffff.o

ll559_187.o: ll559_187.cpp ffff.h
	$(CXX) $(CXXFLAGS) -c ll559_187.cpp

ffff.o: ffff.cpp ffff.h
	$(CXX) $(CXXFLAGS) -c ffff.cpp

clean:
	rm -f *.o ll559_187
