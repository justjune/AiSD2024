RM=del
CXX=g++


L804_298o = L804_298.o lak.o

L804_298.exe: $(L804_298o)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -c $< -o $@

.PHONY: clean
clean:
	$(RM) $(L804_298o) L804_298.exe