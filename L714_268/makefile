ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l714268o=L714_268.o L714_268test.o
L714268.exe: $(l714268o)
	$(CXX) -o L714268.exe $(l714268o)

L714_268.o: L714_268.cpp
	$(CXX) -c L714_268.cpp

L714_268test.o: L714_268test.cpp L714_268.hpp
	$(CXX) -c L714_268test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l714268o) m.exe L714268.exe
