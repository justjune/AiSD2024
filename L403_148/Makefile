
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


objects=L402_147.o L403_148.o L403_148test.o
L403_148.exe: $(objects)
	$(CXX) -o L403_148.exe $(objects) 

L402_147.o: ../L402_147/L402_147.cpp 
	$(CXX) -c ../L402_147/L402_147.cpp

L403_148.o: L403_148.cpp ../L402_147/L402_147.hpp
	$(CXX) -c L403_148.cpp 

L403_148test.o: L403_148test.cpp L403_148.hpp
	${CXX} -c L403_148test.cpp


.PHONY: clean
clean:
	${RM} ${objects} L403_148.exe
