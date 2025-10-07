
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++



objects=L201_065.o L201_065test.o
L201_065.exe: $(objects)
	$(CXX) -o L201_065.exe $(objects) 

L201_065.o: L201_065.cpp
	$(CXX) -c L201_065.cpp 

L201_065test.o: L201_065test.cpp L201_065.hpp
	${CXX} -c L201_065test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L201_065.exe
