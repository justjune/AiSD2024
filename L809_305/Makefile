RM=del

l809305o=L809_305.o L809_305test.o
L809305.exe: $(l809305o)
	$(CXX) -o L809305.exe $(l809305o)

L809_305.o: L809_305.cpp L806_301.hpp L807_302.hpp L813_307.hpp
	$(CXX) -c L809_305.cpp

L809_305test.o: L809_305test.cpp L809_305.hpp L808_303.hpp
	$(CXX) -c L809_305test.cpp

.PHONY: clean
clean:
	$(RM) $(l809305o) L809305.exe