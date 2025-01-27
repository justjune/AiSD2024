ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l817318o=L817_318.o L817_318test.o
L817318.exe: $(l817318o)
	$(CXX) -o L817318.exe $(l817318o)

L817_318.o: L817_318.cpp
	$(CXX) -c L817_318.cpp

L817_318test.o: L817_318test.cpp L817_318.hpp
	$(CXX) -c L817_318test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l817318o) m.exe L817318.exe
