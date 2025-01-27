ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l808303o=L808_303.o L808_303test.o
L808303.exe: $(l808303o)
	$(CXX) -o L808303.exe $(l808303o)

L808_303.o: L808_303.cpp
	$(CXX) -c L808_303.cpp

L808_303test.o: L808_303test.cpp L808_303.hpp
	$(CXX) -c L808_303test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l808303o) m.exe L808303.exe
