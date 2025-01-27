ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l818322o=L818_322.o L818_322test.o
L818322.exe: $(l818322o)
	$(CXX) -o L818322.exe $(l81832o)

L818_322.o: L818_322.cpp
	$(CXX) -c L818_322.cpp

L818_322test.o: L818_322test.cpp L818_322.hpp
	$(CXX) -c L818_322test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l818322o) m.exe L818322.exe
