CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L512188.exe: L512_188.o
	$(CXX) -o L512188.exe L512_188.o

L512_188.o: L512_188.cpp
	$(CXX) -c 512_188.cpp

clean:
	$(RM) L512_188.o L512188.exe
