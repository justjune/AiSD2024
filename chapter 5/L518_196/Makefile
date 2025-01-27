CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L518196.exe: L518_196.o
	$(CXX) -o L518196.exe L518_196.o

L518_196.o: L518_196.cpp
	$(CXX) -c 518_196.cpp

clean:
	$(RM) L518_196.o L518196.exe
