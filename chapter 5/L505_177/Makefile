CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L505177.exe: L505_177.o
	$(CXX) -o L505177.exe L505_177.o

L501_176.o: L505_177.cpp
	$(CXX) -c 505_177.cpp

clean:
	$(RM) L505_177.o L505177.exe
