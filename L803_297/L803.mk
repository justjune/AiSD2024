CXX = g++
CXXFLAGS = -Wall -std=c++17



all: L803_297

L803_297: L803_297.o dog.o
	$(CXX) $(CXXFLAGS) -o L803_297 L803_297.o dog.o

L803_297.o: L803_297.cpp dog.h
	$(CXX) $(CXXFLAGS) -c L803_297.cpp

dog.o: dog.cpp dog.h
	$(CXX) $(CXXFLAGS) -c dog.cpp

clean:
	rm -f *.o L803_297