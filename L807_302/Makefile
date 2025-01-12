RM=del

l807302o=L807_302.o L807_302test.o
L807302.exe: $(l807302o)
	$(CXX) -o L807302.exe $(l807302o)

L807_302.o: L807_302.cpp
	$(CXX) -c L807_302.cpp

L807_302test.o: L807_302test.cpp L807_302.hpp
	$(CXX) -c L807_302test.cpp

.PHONY: clean
clean:
	$(RM) $(l807302o) L807302.exe