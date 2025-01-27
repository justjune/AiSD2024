ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l819325o=L819_325.o L819_325test.o
L819325.exe: $(l819325o)
	$(CXX) -o L819325.exe $(l819325o)

L819_325.o: L819_325.cpp
	$(CXX) -c L819_325.cpp

L819_325test.o: L819_325test.cpp L819_325.hpp
	$(CXX) -c L819_325test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l819325o) m.exe L819325.exe
