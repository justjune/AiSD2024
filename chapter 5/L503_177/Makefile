CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L503177.exe: L503_177.o
	$(CXX) -o L503177.exe L503_177.o

L501_176.o: L503_177.cpp
	$(CXX) -c 503_177.cpp

clean:
	$(RM) L503_177.o L503177.exe
