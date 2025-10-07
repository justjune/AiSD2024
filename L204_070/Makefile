
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L204_070.o L204_070test.o
L204_070.exe: $(objects)
	$(CXX) -o L204_070.exe $(objects) 

L204_070.o: L204_070.cpp
	$(CXX) -c L204_070.cpp 

L204_070test.o: L204_070test.cpp L204_070.hpp
	${CXX} -c L204_070test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L204_070.exe
