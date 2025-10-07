# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L909_373.o L909_373test.o
L909_373.exe: $(objects)
	$(CXX) -o L909_373.exe $(objects) 

L909_373.o: L909_373.cpp
	$(CXX) -c L909_373.cpp 

L909_373test.o: L909_373test.cpp L909_373.hpp
	${CXX} -c L909_373test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L909_373.exe
