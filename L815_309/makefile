ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l815309o=L815_309.o L815_309test.o
L815309.exe: $(l815309o)
	$(CXX) -o L815309.exe $(l815309o)

L815_309.o: L815_309.cpp
	$(CXX) -c L815_309.cpp

L815_309test.o: L815_309test.cpp L815_309.hpp
	$(CXX) -c L815_309test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l815309o) m.exe L815309.exe
