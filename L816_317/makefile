ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l81617o=L816_317.o L816_317test.o
L816317.exe: $(l816317o)
	$(CXX) -o L816317.exe $(l816317o)

L816_317.o: L816_317.cpp
	$(CXX) -c L816_317.cpp

L816_317test.o: L816_317test.cpp L816_317.hpp
	$(CXX) -c L816_317test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l816317o) m.exe L816317.exe
