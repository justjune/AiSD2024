RM = del
CXX = g++

L810_307o = L810_307.o auk.o


L810_307.exe: $(L810_307o)
	$(CXX) -o L810_307.exe $(L810_307o)


L810_307.o: L810_307.cpp
	$(CXX) -c L810_307.cpp


auk.o: auk.cpp
	$(CXX) -c auk.cpp


.PHONY: clean
clean:
	$(RM) $(L810_307o) L810_307.exe
