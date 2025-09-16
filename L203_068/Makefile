
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


objects=L203_068.o L203_068test.o
L203_068.exe: $(objects)
	$(CXX) -o L203_068.exe $(objects) 

L203_068.o: L203_068.cpp
	$(CXX) -c L203_068.cpp 

L203_068test.o: L203_068test.cpp L203_068.hpp
	${CXX} -c L203_068test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L203_068.exe
