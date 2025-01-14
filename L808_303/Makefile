# Определение компилятора и команды удаления
CXX = g++
RM = rm -f # Используем rm для совместимости с Unix/Linux

# Переменные для файлов
OBJECTS = L808_303.o zagolovok.o
EXECUTABLE = L808_303.exe

# Сборка исполняемого файла
$(EXECUTABLE): $(OBJECTS)
	$(CXX) -o $(EXECUTABLE) $(OBJECTS)

# Компиляция L808_303.o
L808_303.o: L808_303.cpp 
	$(CXX) -c L808_303.cpp

# Компиляция zagolovok.o
zagolovok.o: zagolovok.cpp 
	$(CXX) -c zagolovok.cpp

# Очистка промежуточных файлов
clean:
	$(RM) $(OBJECTS) $(EXECUTABLE)