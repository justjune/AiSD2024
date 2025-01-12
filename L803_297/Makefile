RM=del

l803297o=L803_297.o L803_297test.o
L803297.exe: $(l803297o)
	$(CXX) -o L803297.exe $(l803297o)

L803_297.o: L803_297.cpp L802_296.hpp
	$(CXX) -c L803_297.cpp

L803_297test.o: L803_297test.cpp L803_297.hpp
	$(CXX) -c L803_297test.cpp

.PHONY: clean
clean:
	$(RM) $(l803297o) L803297.exe