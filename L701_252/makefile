ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l701252o=L701_252.o L701_252test.o
L701252.exe: $(l701252o)
	$(CXX) -o L701252.exe $(l701252o)

L701_252.o: L701_252.cpp
	$(CXX) -c L701_252.cpp

L701_252test.o: L701_252test.cpp L701_252.hpp
	$(CXX) -c L701_252test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l701252o) m.exe L701252.exe
