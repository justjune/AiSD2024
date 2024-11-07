ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l303088o=L303_088.o L303_088test.o
L303088.exe: $(l303088o)
	$(CXX) -o L303088.exe $(l303088o)

L303_088.o: L303_088.cpp
	$(CXX) -c L303_088.cpp

L303_088test.o: L303_088test.cpp L303_088.hpp
	$(CXX) -c L303_088test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l303088o) m.exe L303088.exe
