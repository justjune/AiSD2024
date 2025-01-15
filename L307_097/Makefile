ifeq ($(OS), Windows_NT)
    RM = del
    EXT = .exe
else
    RM = rm
    EXT =
endif

l307097o = L307_097.o L307_097_test.o

L307097$(EXT): $(l307097o)
	$(CXX) -o L307097$(EXT) $(l307097o)

L307_097.o: L307_097.cpp
	$(CXX) -c L307_097.cpp

L307_097test.o: L307_097_test.cpp L307_097.hpp
	$(CXX) -c L307_097_test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l307097o) L307097$(EXT)
