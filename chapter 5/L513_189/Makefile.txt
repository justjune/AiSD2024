CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L513189.exe: L513_189.o
	$(CXX) -o L513189.exe L513_189.o

L513_189.o: L513_189.cpp
	$(CXX) -c 513_189.cpp

clean:
	$(RM) L513_189.o L513189.exe
