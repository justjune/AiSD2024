# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L612_233.o L612_233test.o graph.o
L612_233.exe: $(objects)
	$(CXX) -o L612_233.exe $(objects) 

L612_233.o: L612_233.cpp
	$(CXX) -c L612_233.cpp 

L612_233test.o: L612_233test.cpp L612_233.hpp
	${CXX} -c L612_233test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	rm -f ${objects} L612_233.exe
