ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l706256o=L706_256.o L706_256test.o
L706256.exe: $(l706256o)
	$(CXX) -o L706256.exe $(l706256o)

L706_256.o: L706_256.cpp
	$(CXX) -c L706_256.cpp

L706_256test.o: L706_256test.cpp L706_256.hpp
	$(CXX) -c L706_256test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l706256o) m.exe L706256.exe
