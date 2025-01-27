ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l806301o=L806_301.o L806_301test.o
L806301.exe: $(l806301o)
	$(CXX) -o L806301.exe $(l806301o)

L806_301.o: L806_301.cpp
	$(CXX) -c L806_301.cpp

L806_301test.o: L806_301test.cpp L806_301.hpp
	$(CXX) -c L806_301test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l806301o) m.exe L806301.exe
