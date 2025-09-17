
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


objects=L509_187.o L515_191.o L515_191test.o graph.o
L515_191.exe: $(objects)
	$(CXX) -o L515_191.exe $(objects) 

L509_187.o: ../L509_187/L509_187.cpp
	$(CXX) -c ../L509_187/L509_187.cpp

L515_191.o: L515_191.cpp ../L509_187/L509_187.hpp
	$(CXX) -c L515_191.cpp
	
L515_191test.o: L515_191test.cpp L515_191.hpp
	${CXX} -c L515_191test.cpp

graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp

.PHONY: clean
clean:
	${RM} ${objects} L515_191.exe
