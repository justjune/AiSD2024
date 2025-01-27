CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L527306.exe: L527_206.o
	$(CXX) -o L527206.exe L527_206.o

L527_206.o: L527_206.cpp
	$(CXX) -c 527_206.cpp

clean:
	$(RM) L527_206.o L527206.exe
