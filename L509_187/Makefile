
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L509_187.o L509_187test.o graph.o
L509_187.exe: $(objects)
	$(CXX) -o L509_187.exe $(objects) 

L509_187.o: L509_187.cpp
	$(CXX) -c L509_187.cpp 

L509_187test.o: L509_187test.cpp L509_187.hpp
	${CXX} -c L509_187test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	rm -f ${objects} L509_187.exe
