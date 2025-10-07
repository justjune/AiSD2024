
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L509_187.o L617_243.o L617_243test.o graph.o
L617_243.exe: $(objects)
	$(CXX) -o L617_243.exe $(objects) 

L509_187.o: ../L509_187/L509_187.cpp
	$(CXX) -c ../L509_187/L509_187.cpp

L617_243.o: L617_243.cpp ../L509_187/L509_187.hpp
	$(CXX) -c L617_243.cpp
	
L617_243test.o: L617_243test.cpp L617_243.hpp
	${CXX} -c L617_243test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	rm -f ${objects} L617_243.exe
