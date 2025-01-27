CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L525205.exe: L525_205.o
	$(CXX) -o L525205.exe L525_205.o

L525_205.o: L525_205.cpp
	$(CXX) -c 525_205.cpp

clean:
	$(RM) L525_205.o L525205.exe
