# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L610_229.o L610_229test.o graph.o
L610_229.exe: $(objects)
	$(CXX) -o L610_229.exe $(objects) 

L610_229.o: L610_229.cpp
	$(CXX) -c L610_229.cpp 

L610_229test.o: L610_229test.cpp L610_229.hpp
	${CXX} -c L610_229test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	rm -f ${objects} L610_229.exe
