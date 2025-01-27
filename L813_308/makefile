ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l813308o=L813_308.o L813_308test.o
L813308.exe: $(l813308o)
	$(CXX) -o L813308.exe $(l813308o)

L813_308.o: L813_308.cpp
	$(CXX) -c L813_308.cpp

L813_308test.o: L813_308test.cpp L813_308.hpp
	$(CXX) -c L813_308test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l813308o) m.exe L813308.exe
