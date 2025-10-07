
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L517_194.o L517_194test.o graph.o
L517_194.exe: $(objects)
	$(CXX) -o L517_194.exe $(objects) 

L517_194.o: L517_194.cpp
	$(CXX) -c L517_194.cpp 

L517_194test.o: L517_194test.cpp L517_194.hpp
	${CXX} -c L517_194test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	rm -f ${objects} L517_194.exe
