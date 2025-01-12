RM=del

l811307o=L811_307.o L811_307test.o
L811307.exe: $(l811307o)
	$(CXX) -o L811307.exe $(l811307o)

L811_307.o: L811_307.cpp
	$(CXX) -c L811_307.cpp

L811_307test.o: L811_307test.cpp L811_307.hpp
	$(CXX) -c L811_307test.cpp

.PHONY: clean
clean:
	$(RM) $(l811307o) L811307.exe