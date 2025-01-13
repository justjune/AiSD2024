# Определение команды удаления и расширение файла в зависимости от ОС
RM=del


l610229o= L610_229.o graph.o
L610_229.exe: $(l610229o)
	$(CXX) -o L610_229.exe $(l610229o)

L610_229.o: L610_229.cpp
	$(CXX) -c L610_229.cpp

# Компиляция graph.o
graph.o: ../graph.cpp
	$(CXX) -c ../graph.cpp
