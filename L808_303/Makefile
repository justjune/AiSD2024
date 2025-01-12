RM=del

l808303o=L808_303.o L808_303test.o
L808303.exe: $(l808303o)
	$(CXX) -o L808_303.exe $(l808303o)

L808_303.o: L808_303.cpp L812_307.hpp L807_302.hpp L811_307.hpp L806_301.hpp
	$(CXX) -c L808_303.cpp

L808_303test.o: L808_303test.cpp L808_303.hpp
	$(CXX) -c L808_303test.cpp

.PHONY: clean
clean:
	$(RM) $(l808303o) L808303.exe