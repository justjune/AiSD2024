CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L519198.exe: L519_198.o
	$(CXX) -o L519198.exe L519_198.o

L519_198.o: L519_198.cpp
	$(CXX) -c 519_198.cpp

clean:
	$(RM) L519_198.o L519198.exe
