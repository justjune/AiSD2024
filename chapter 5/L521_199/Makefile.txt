CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L521199.exe: L521_199.o
	$(CXX) -o L521199.exe L521_199.o

L521_199.o: L521_199.cpp
	$(CXX) -c 521_199.cpp

clean:
	$(RM) L521_199.o L521199.exe
