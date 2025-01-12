RM=del

l806301o=L806_301.o L806_301test.o
L806301.exe: $(l806301o)
	$(CXX) -o L806301.exe $(l806301o)

L806_301.o: L806_301.cpp L808_303.hpp L811_307.hpp
	$(CXX) -c L806_301.cpp

L806_301test.o: L806_301test.cpp L806_301.hpp
	$(CXX) -c L806_301test.cpp

.PHONY: clean
clean:
	$(RM) $(l806301o) L806301.exe