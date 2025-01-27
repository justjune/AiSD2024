ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l717275o=L717_275.o L717_275test.o
L717275.exe: $(l717275o)
	$(CXX) -o L717275.exe $(l717275o)

L717_275.o: L717_275.cpp
	$(CXX) -c L717_275.cpp

L717_275test.o: L717_275test.cpp L717_275.hpp
	$(CXX) -c L717_275test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l717275o) m.exe L717275.exe
