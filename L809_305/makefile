ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l809305o=L809_305.o L809_305test.o
L809305.exe: $(l809305o)
	$(CXX) -o L809305.exe $(l809305o)

L809_305.o: L809_305.cpp
	$(CXX) -c L809_305.cpp

L809_305test.o: L809_305test.cpp L809_305.hpp
	$(CXX) -c L809_305test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l809305o) m.exe L809305.exe
