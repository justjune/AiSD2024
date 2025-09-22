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


objects=L807_302.o L807_302test.o
L807_302.exe: $(objects)
	$(CXX) -o L807_302.exe $(objects) 

L807_302.o: L807_302.cpp
	$(CXX) -c L807_302.cpp 

L807_302test.o: L807_302test.cpp L807_302.hpp
	${CXX} -c L807_302test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L807_302.exe
