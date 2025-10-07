
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++


objects=L110_039.o L110_039test.o
L110_039.exe: $(objects)
	$(CXX) -o L110_039.exe $(objects) 

L110_039.o: L110_039.cpp
	$(CXX) -c L110_039.cpp 

L110_039test.o: L110_039test.cpp L110_039.hpp
	${CXX} -c L110_039test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L110_039.exe
