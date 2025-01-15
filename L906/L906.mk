# Компилятор и флаги
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude

# Целевой исполняемый файл
TARGET = calendar_planner

# Исходные файлы
SRC = L906_349.cpp independent_set.cpp

# Объектные файлы (заменяем .cpp на .o)
OBJ = $(SRC:.cpp=.o)

# Сборка исполняемого файла
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Правило для сборки объектных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка временных файлов
clean:
	rm -f *.o $(TARGET)
