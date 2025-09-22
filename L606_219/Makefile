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


objects=L606_219.o L606_219test.o graph.o set_union.o
L606_219.exe: $(objects)
	$(CXX) -o L606_219.exe $(objects) 

L606_219.o: L606_219.cpp
	$(CXX) -c L606_219.cpp 

L606_219test.o: L606_219test.cpp L606_219.hpp
	${CXX} -c L606_219test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp
set_union.o: ../L608_221/set_union.cpp
	$(CXX) -c ../L608_221/set_union.cpp

.PHONY: clean
clean:
	${RM} ${objects} L606_219.exe
