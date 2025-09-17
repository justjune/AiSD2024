
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


objects=L205_075.o L205_075test.o
L205_075.exe: $(objects)
	$(CXX) -o L205_075.exe $(objects) 

L205_075.o: L205_075.cpp
	$(CXX) -c L205_075.cpp 

L205_075test.o: L205_075test.cpp L205_075.hpp
	${CXX} -c L205_075test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L205_075.exe
