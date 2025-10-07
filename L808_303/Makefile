# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L808_303.o L808_303test.o
L808_303.exe: $(objects)
	$(CXX) -o L808_303.exe $(objects) 

L808_303.o: L808_303.cpp
	$(CXX) -c L808_303.cpp 

L808_303test.o: L808_303test.cpp L808_303.hpp
	${CXX} -c L808_303test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L808_303.exe
