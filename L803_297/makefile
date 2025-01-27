ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l803297o=L803_297.o L803_297test.o
L803297.exe: $(l803297o)
	$(CXX) -o L803297.exe $(l803297o)

L803_297.o: L803_297.cpp
	$(CXX) -c L803_297.cpp

L803_297test.o: L803_297test.cpp L803_297.hpp
	$(CXX) -c L803_297test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l803297o) m.exe L803297.exe
