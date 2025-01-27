ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l814308o=L814_308.o L814_308test.o
L814308.exe: $(l814308o)
	$(CXX) -o L814308.exe $(l814308o)

L814_308.o: L814_308.cpp
	$(CXX) -c L814_308.cpp

L814_308test.o: L814_308test.cpp L814_308.hpp
	$(CXX) -c L814_308test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l814308o) m.exe L814308.exe
