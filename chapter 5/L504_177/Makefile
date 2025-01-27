CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L504177.exe: L504_177.o
	$(CXX) -o L504177.exe L504_177.o

L504_177.o: L504_177.cpp
	$(CXX) -c 504_177.cpp

clean:
	$(RM) L504_177.o L504177.exe
