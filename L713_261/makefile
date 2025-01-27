ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l713261o=L713_261.o L713_261test.o
L713261.exe: $(l713261o)
	$(CXX) -o L713261.exe $(l713261o)

L713_261.o: L713_261.cpp
	$(CXX) -c L713_261.cpp

L713_261test.o: L713_261test.cpp L713_261.hpp
	$(CXX) -c L713_261test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l713261o) m.exe L713261.exe
