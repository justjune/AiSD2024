# Определение компилятора (gcc для Linux, g++ для Windows)
CXX=gcc

# Определение команды удаления и расширение файла в зависимости от ОС
ifeq ($(OS),Windows_NT)
RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif
#Правило сборки исполняемого файла из объектных.
#CXX - переменная для команды компилятора. (По умолчанию g++.)
objects=m.o kva.o

m.exe: $(objects)
	$(CXX) -o m.exe $(objects)
	
#Правило компиляции исходного файла с завизимостью от заголовочного файла в объектный
m.o: m.c kva.h
	$(CXX) -c m.c

#Правило компиляции исходного файла в объектный
kva.o: kva.c
	$(CXX) -c kva.c

#Фиктивное правило для очистки каталога от созданных в процессе сборки файлов.
#Для его вызова нужно указать clean после команды make.

#Пример теста листинга 1.1 со стр. 22
l101022o=L101_022.o L101_022test.o
L101022.exe: $(l101022o)
	$(CXX) -o L101022.exe $(l101022o)

L101_022.o: L101_022.c
	$(CXX) -c L101_022.c

L101_022test.o: L101_022test.c L101_022.h
	$(CXX) -c L101_022test.c
#L909_373
L909_373o = L909_373.o EJF.o
L909_373.exe: $(L909_373o)
	$(CXX) -o L909_373.exe $(L909_373o)
L909_373.o: L909_373.cpp
	$(CXX) -c L909_373.cpp
EJF.o: EJF.cpp
	$(CXX) -c EJF.cpp



<<<<<<< HEAD

#L904_346
L904_346o = L904_346.o EJF.o
L904_346.exe: $(L904_346o)
	$(CXX) -o L904_346.exe $(L904_346o)
L904_346.o: L904_346.cpp
	$(CXX) -c L904_346.cpp
EJF.o: EJF.cpp
	$(CXX) -c EJF.cpp
=======
# L110_034
l110034o=L110_034.o increment.o
L110_034.exe: $(l110034o)
	$(CXX) -o L110_034.exe $(l110034o) 
L110_034.o: L110_034.cpp increment.cpp 
	$(CXX) -c L110_034.cpp 

# Компиляция ins
increment.o: increment.cpp
	$(CXX) -c increment.cpp 


>>>>>>> 08b27f0aca69e6a69af7dca1ed5b04e1df5e6527


.PHONY: clean
clean:
	$(RM) $(objects) $(l101022o) m.exe L101022.exe