CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L517194.exe: L517_194.o
	$(CXX) -o L517194.exe L517_194.o

L517_194.o: L517_194.cpp
	$(CXX) -c 517_194.cpp

clean:
	$(RM) L517_194.o L517194.exe
