
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L205_075.o L205_075test.o
L205_075.exe: $(objects)
	$(CXX) -o L205_075.exe $(objects) 

L205_075.o: L205_075.cpp
	$(CXX) -c L205_075.cpp 

L205_075test.o: L205_075test.cpp L205_075.hpp
	${CXX} -c L205_075test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L205_075.exe
