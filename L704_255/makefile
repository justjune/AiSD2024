ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l704255o=L704_255.o L704_255test.o
L704255.exe: $(l704255o)
	$(CXX) -o L704255.exe $(l704255o)

L704_255.o: L704_255.cpp
	$(CXX) -c L704_255.cpp

L704_255test.o: L704_255test.cpp L704_255.hpp
	$(CXX) -c L704_255test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l704255o) m.exe L704255.exe
