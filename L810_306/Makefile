RM=del

l810306o=L810_306.o L810_306test.o
L810306.exe: $(l810306o)
	$(CXX) -o L810306.exe $(l810306o)

L810_306.o: L810_306.cpp L806_301.hpp L807_302.hpp
	$(CXX) -c L810_306.cpp

L810_306test.o: L810_306test.cpp L810_306.hpp
	$(CXX) -c L810_306test.cpp

.PHONY: clean
clean:
	$(RM) $(l810306o) L810306.exe