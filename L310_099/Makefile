ifeq ($(OS), Windows_NT)
    RM = del
    EXT = .exe
else
    RM = rm
    EXT =
endif

l310099o = L310_099.o L310_099_test.o

L310099$(EXT): $(l310099o)
	$(CXX) -o L310099$(EXT) $(l310099o)

L310_099.o: L310_099.cpp
	$(CXX) -c L310_099.cpp

L310_099test.o: L310_099_test.cpp L310_099.hpp
	$(CXX) -c L310_099_test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l310099o) L310099$(EXT)
