CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L515191.exe: L515_191.o
	$(CXX) -o L515191.exe L515_191.o

L515_191.o: L515_191.cpp
	$(CXX) -c 515_191.cpp

clean:
	$(RM) L515_191.o L515191.exe
