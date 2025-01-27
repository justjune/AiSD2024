CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L502176.exe: L502_176.o
	$(CXX) -o L502176.exe L502_176.o

L502_176.o: L502_176.cpp
	$(CXX) -c 502_176.cpp

clean:
	$(RM) L502_176.o L502176.exe

