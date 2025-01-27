ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l703254o=L703_254.o L703_254test.o
L703254.exe: $(l703254o)
	$(CXX) -o L703254.exe $(l703254o)

L703_254.o: L703_254.cpp
	$(CXX) -c L703_254.cpp

L703_254test.o: L703_254test.cpp L703_254.hpp
	$(CXX) -c L703_254test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l703254o) m.exe L703254.exe
