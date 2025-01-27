CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L507185.exe: L507_185.o
	$(CXX) -o L507185.exe L507_185.o

L507_185.o: L507_185.cpp
	$(CXX) -c 507_185.cpp

clean:
	$(RM) L507_185.o L507185.exe
