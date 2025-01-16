CXX = g++
CXXFLAGS = -Wall -std=c++17



all: L802_295

L802_295: L802_295.o cat.o
	$(CXX) $(CXXFLAGS) -o L802_295 L802_295.o cat.o

L802_295.o: L802_295.cpp cat.h
	$(CXX) $(CXXFLAGS) -c L802_295.cpp

cat.o: cat.cpp cat.h
	$(CXX) $(CXXFLAGS) -c cat.cpp

clean:
	rm -f *.o L802_295