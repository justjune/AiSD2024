
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


objects=L204_070.o L204_070test.o
L204_070.exe: $(objects)
	$(CXX) -o L204_070.exe $(objects) 

L204_070.o: L204_070.cpp
	$(CXX) -c L204_070.cpp 

L204_070test.o: L204_070test.cpp L204_070.hpp
	${CXX} -c L204_070test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L204_070.exe
