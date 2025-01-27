ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l801294o=L801_294.o L801_294test.o
L801294.exe: $(l801294o)
	$(CXX) -o L801294.exe $(l801294o)

L801_294.o: L801_294.cpp
	$(CXX) -c L801_294.cpp

L801_294test.o: L801_294test.cpp L801_294.hpp
	$(CXX) -c L801_294test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l801294o) m.exe L801294.exe
