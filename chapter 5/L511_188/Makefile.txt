CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L511188.exe: L511_188.o
	$(CXX) -o L511188.exe L511_188.o

L511_188.o: L511_188.cpp
	$(CXX) -c 511_188.cpp

clean:
	$(RM) L511_188.o L511188.exe
