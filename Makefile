
#Переопределение команды удаления файлов для Windows
RM=del
#Правило сборки исполняемого файла из объектных.
#CXX - переменная для команды компилятора. (По умолчанию g++.)
objects=m.o kva.o

# m.exe: $(objects)
# 	$(CXX) -o m.exe $(objects)

# #Правило компиляции исходного файла с завизимостью от заголовочного файла в объектный
# m.o: m.c kva.h
# 	$(CXX) -c m.c

# #Правило компиляции исходного файла в объектный
# kva.o: kva.c
# 	$(CXX) -c kva.c

# #Фиктивное правило для очистки каталога от созданных в процессе сборки файлов.
# #Для его вызова нужно указать clean после команды make.

# #Пример теста листинга 1.1 со стр. 22
# l101022o=L101_022.o L101_022test.o
# L101022.exe: $(l101022o)
# 	$(CXX) -o L101022.exe $(l101022o)

# L101_022.o: L101_022.c
# 	$(CXX) -c L101_022.c

# L101_022test.o: L101_022test.c L101_022.h
# 	$(CXX) -c L101_022test.c

# # Объекты для L604_217.exe
# l604217o=L604_217.cpp graph.cpp

# # Правило сборки L604_217.exe
# L604_217.exe: $(l604217o)
# 	$(CXX) -o L604_217.exe $(l604217o)

# # Компиляция L604_217.o с зависимостью от заголовочного файла graph.h
# L604_217.o: L604_217.o graph.o
# 	$(CXX) -c L604_217.cpp

# # Компиляция graph.o
# graph.o: graph.cpp
# 	$(CXX) -c graph.cpp

# l610229o=L610_229.o graph.o
# L610_229.exe: $(l610229o)
# 	$(CXX) -o L610_229.exe $(l610229o)

# # Компиляция L610_229.o с зависимостью от заголовочного файла graph.h
# L610_229.o: L610_229.cpp graph.h
# 	$(CXX) -c L610_229.cpp

# # Компиляция graph.o
# graph.o: graph.cpp
# 	$(CXX) -c graph.cpp


# l606219o=L606_219.o graph.o set_union.o
# L606_219.exe: $(l606219o)
# 	$(CXX) -o L606_219.exe $(l606219o)
# L606_219.o: L606_219.cpp graph.cpp ./L608_221/set_union.cpp
# 	$(CXX) -c L606_219.cpp

# # Компиляция graph.cpp в объектный файл
# graph.o: graph.cpp
# 	$(CXX) -c graph.cpp

# # Компиляция set_union.cpp в объектный файл
# set_union.o: ./L608_221/set_union.cpp
# 	$(CXX) -c ./L608_221/set_union.cpp


l558189o=L558_189.o graph.o
L558_189.exe: $(l558189o)
	$(CXX) -o L558_189.exe $(l558189o)

# Компиляция L558_189.o с зависимостью от заголовочного файла graph.h
L558_189.o: L558_189.cpp graph.h
	$(CXX) -c L558_189.cpp

# Компиляция graph.o
graph.o: graph.cpp
	$(CXX) -c graph.cpp




.PHONY: clean
clean:
	$(RM) $(objects) $(l101022o) $(l604217o) ${l606219o} ${l610229o} m.exe L101022.exe L604_217.exe L606_219.exe L610_229.exe


