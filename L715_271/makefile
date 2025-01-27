ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l715271o=L715_271.o L715_271test.o
L715271.exe: $(l715271o)
	$(CXX) -o L715271.exe $(l715271o)

L715_271.o: L715_271.cpp
	$(CXX) -c L715_271.cpp

L715_271test.o: L715_271test.cpp L715_271.hpp
	$(CXX) -c L715_271test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l715271o) m.exe L715271.exe
