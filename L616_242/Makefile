# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L616_242.o L616_242test.o
L616_242.exe: $(objects)
	$(CXX) -o L616_242.exe $(objects) 

L616_242.o: L616_242.cpp
	$(CXX) -c L616_242.cpp 

L616_242test.o: L616_242test.cpp L616_242.hpp
	${CXX} -c L616_242test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L616_242.exe
