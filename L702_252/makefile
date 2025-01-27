ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l702252o=L702_252.o L702_252test.o
L702252.exe: $(l702252o)
	$(CXX) -o L702252.exe $(l702252o)

L702_252.o: L702_252.cpp
	$(CXX) -c L702_252.cpp

L702_252test.o: L702_252test.cpp L702_252.hpp
	$(CXX) -c L702_252test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l702252o) m.exe L702252.exe
