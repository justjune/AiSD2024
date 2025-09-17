
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


objects=L402_147.o L402_147test.o
L402_147.exe: $(objects)
	$(CXX) -o L402_147.exe $(objects) 

L402_147.o: L402_147.cpp
	$(CXX) -c L402_147.cpp 

L402_147test.o: L402_147test.cpp L402_147.hpp
	${CXX} -c L402_147test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L402_147.exe
