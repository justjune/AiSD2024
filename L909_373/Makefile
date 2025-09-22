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


objects=L909_373.o L909_373test.o
L909_373.exe: $(objects)
	$(CXX) -o L909_373.exe $(objects) 

L909_373.o: L909_373.cpp
	$(CXX) -c L909_373.cpp 

L909_373test.o: L909_373test.cpp L909_373.hpp
	${CXX} -c L909_373test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L909_373.exe
