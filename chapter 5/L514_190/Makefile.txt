CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L514190.exe: L514_190.o
	$(CXX) -o L514190.exe L514_190.o

L514_190.o: L514_190.cpp
	$(CXX) -c 514_190.cpp

clean:
	$(RM) L514_190.o L514190.exe
