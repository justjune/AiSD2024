CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L526206.exe: L526_205.o
	$(CXX) -o L526205.exe L526_205.o

L526_205.o: L526_205.cpp
	$(CXX) -c 526_205.cpp

clean:
	$(RM) L526_205.o L526205.exe
