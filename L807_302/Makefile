# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L807_302.o L807_302test.o
L807_302.exe: $(objects)
	$(CXX) -o L807_302.exe $(objects) 

L807_302.o: L807_302.cpp
	$(CXX) -c L807_302.cpp 

L807_302test.o: L807_302test.cpp L807_302.hpp
	${CXX} -c L807_302test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L807_302.exe
