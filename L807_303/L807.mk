RM=del
CXX=g++

L807_303o = L807_303.o lfuk.o

L807_303.exe: $(L807_303o)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -c $< -o $@

.PHONY: clean
clean:
	$(RM) $(L807_303o) L807_303.exe
