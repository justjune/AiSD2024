
# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=g++

# Определение команды удаления и расширение файла в зависимости от ОС
ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


objects=L202_067.o L202_067test.o
L202_067.exe: $(objects)
	$(CXX) -o L202_067.exe $(objects) 

L202_067.o: L202_067.cpp
	$(CXX) -c L202_067.cpp 

L202_067test.o: L202_067test.cpp L202_067.hpp
	${CXX} -c L202_067test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L202_067.exe
