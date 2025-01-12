RM=del

l805300o=L805_300.o L805_300test.o
L805300.exe: $(l805300o)
	$(CXX) -o L805300.exe $(l805300o)

L805_300.o: L805_300.cpp L802_296.hpp
	$(CXX) -c L805_300.cpp

L805_300test.o: L805_300test.cpp L805_300.hpp
	$(CXX) -c L805_300test.cpp

.PHONY: clean
clean:
	$(RM) $(l805300o) L805300.exe