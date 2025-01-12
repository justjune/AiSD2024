RM=del

l804298o=L804_298.o L804_298test.o
L804298.exe: $(l804298o)
	$(CXX) -o L804298.exe $(l804298o)

L804_298.o: L804_298.cpp
	$(CXX) -c L804_298.cpp

L804_298test.o: L804_298test.cpp L804_298.hpp
	$(CXX) -c L804_298test.cpp

.PHONY: clean
clean:
	$(RM) $(l804298o) L804298.exe