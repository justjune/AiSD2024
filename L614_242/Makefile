# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L614_242.o L614_242test.o graph.o
L614_242.exe: $(objects)
	$(CXX) -o L614_242.exe $(objects) 

L614_242.o: L614_242.cpp
	$(CXX) -c L614_242.cpp 

L614_242test.o: L614_242test.cpp L614_242.hpp
	${CXX} -c L614_242test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	rm -f ${objects} L614_242.exe
