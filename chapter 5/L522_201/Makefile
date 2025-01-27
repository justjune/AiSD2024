CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L522201.exe: L522_201.o
	$(CXX) -o L522201.exe L522_201.o

L522_201.o: L522_201.cpp
	$(CXX) -c 522_201.cpp

clean:
	$(RM) L522_201.o L522201.exe
