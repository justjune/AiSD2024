RM=del

l801294o=L801_294.o L801_294test.o
L806294.exe: $(l801294o)
	$(CXX) -o L801294.exe $(l801294o)

L801_294.o: L801_294.cpp
	$(CXX) -c L801_294.cpp

L801_294test.o: L801_294test.cpp L801_294.hpp
	$(CXX) -c L801_294test.cpp

.PHONY: clean
clean:
	$(RM) $(l801294o) L801294.exe