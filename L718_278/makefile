ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l7182678o=L718_278.o L718_278test.o
L718278.exe: $(l718278o)
	$(CXX) -o L718278.exe $(l718278o)

L718_278.o: L718_278.cpp
	$(CXX) -c L718_278.cpp

L718_278test.o: L718_278test.cpp L718_278.hpp
	$(CXX) -c L718_278test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l718278o) m.exe L718278.exe
