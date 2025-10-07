
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++




objects=L402_147.o L402_147test.o
L402_147.exe: $(objects)
	$(CXX) -o L402_147.exe $(objects) 

L402_147.o: L402_147.cpp
	$(CXX) -c L402_147.cpp 

L402_147test.o: L402_147test.cpp L402_147.hpp
	${CXX} -c L402_147test.cpp


.PHONY: clean
clean:
	rm -f ${objects} L402_147.exe
