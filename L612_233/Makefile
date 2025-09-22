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


objects=L612_233.o L612_233test.o graph.o
L612_233.exe: $(objects)
	$(CXX) -o L612_233.exe $(objects) 

L612_233.o: L612_233.cpp
	$(CXX) -c L612_233.cpp 

L612_233test.o: L612_233test.cpp L612_233.hpp
	${CXX} -c L612_233test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	${RM} ${objects} L612_233.exe
