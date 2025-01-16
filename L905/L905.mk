# Компилятор и флаги
CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

# Целевой исполняемый файл
TARGET = L905_348

# Исходные файлы
SRC = L905_348.cpp independent_set.cpp

# Объектные файлы (заменяем .cpp на .o)
OBJ = $(SRC:.cpp=.o)

# Сборка исполняемого файла
$(TARGET).exe: $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET).exe
	


# Правило для сборки объектных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка временных файлов
clean:
	del *.o $(TARGET).exe
