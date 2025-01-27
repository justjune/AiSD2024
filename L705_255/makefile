ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l705255o=L705_255.o L705_255test.o
L705255.exe: $(l705255o)
	$(CXX) -o L705255.exe $(l705255o)

L705_255.o: L705_255.cpp
	$(CXX) -c L705_255.cpp

L705_255test.o: L705_255test.cpp L705_255.hpp
	$(CXX) -c L705_255test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l705255o) m.exe L705255.exe
