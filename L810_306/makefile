ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l810306o=L810_306.o L810_306test.o
L810306.exe: $(l810306o)
	$(CXX) -o L810306.exe $(l810306o)

L810_306.o: L810_306.cpp
	$(CXX) -c L810_306.cpp

L810_306test.o: L810_306test.cpp L810_306.hpp
	$(CXX) -c L810_306test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l810306o) m.exe L810306.exe
