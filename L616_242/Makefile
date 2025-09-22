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


objects=L616_242.o L616_242test.o
L616_242.exe: $(objects)
	$(CXX) -o L616_242.exe $(objects) 

L616_242.o: L616_242.cpp
	$(CXX) -c L616_242.cpp 

L616_242test.o: L616_242test.cpp L616_242.hpp
	${CXX} -c L616_242test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L616_242.exe
