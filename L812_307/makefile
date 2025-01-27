ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l812307o=L812_307.o L812_307test.o
L812307.exe: $(l812307o)
	$(CXX) -o L812307.exe $(l820307o)

L812_307.o: L812_307.cpp
	$(CXX) -c L812_307.cpp

L812_307test.o: L812_307test.cpp L812_307.hpp
	$(CXX) -c L812_307test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l812307o) m.exe L812307.exe
