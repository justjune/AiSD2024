ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l716272o=L716_272.o L716_272test.o
L716272.exe: $(l716272o)
	$(CXX) -o L716272.exe $(l716272o)

L716_272.o: L716_272.cpp
	$(CXX) -c L716_272.cpp

L716_272test.o: L716_272test.cpp L716_272.hpp
	$(CXX) -c L716_272test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l716272o) m.exe L716272.exe
