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


objects=L604_217.o L604_217test.o graph.o
L604_217.exe: $(objects)
	$(CXX) -o L604_217.exe $(objects) 

L604_217.o: L604_217.cpp
	$(CXX) -c L604_217.cpp 

L604_217test.o: L604_217test.cpp L604_217.hpp
	${CXX} -c L604_217test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	${RM} ${objects} L604_217.exe
