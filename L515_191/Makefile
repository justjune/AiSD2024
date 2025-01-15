# Определение команды удаления и расширение файла в зависимости от ОС
RM=del


l513189o= L513_189.o graph.o
L513_189.exe: $(l513189o)
	$(CXX) -o L513_189.exe $(l513189o)

L513_189.o: L513_189.cpp
	$(CXX) -c L513_189.cpp

# Компиляция graph.o
graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp
