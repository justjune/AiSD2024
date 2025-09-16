
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


objects=L110_039.o L110_039test.o
L110_039.exe: $(objects)
	$(CXX) -o L110_039.exe $(l110034o) 

L110_039.o: L110_039.cpp
	$(CXX) -c L110_039.cpp 

L110_039test.o: L110_039test.cpp L110_039.hpp
	${CXX} -c L110_039test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L110_039.exe
