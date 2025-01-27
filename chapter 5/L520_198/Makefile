CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L520198.exe: L520_198.o
	$(CXX) -o L520198.exe L520_198.o

L520_198.o: L520_198.cpp
	$(CXX) -c 520_198.cpp

clean:
	$(RM) L520_198.o L520198.exe
