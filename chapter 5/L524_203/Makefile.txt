CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L524203.exe: L524_203.o
	$(CXX) -o L524203.exe L524_203.o

L524_203.o: L524_203.cpp
	$(CXX) -c 524_203.cpp

clean:
	$(RM) L524_203.o L524203.exe
