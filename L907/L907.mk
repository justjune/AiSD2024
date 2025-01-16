# Компилятор
CXX = g++
# Флаги компиляции
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
# Целевой файл
TARGET = L907_351
# Список исходных файлов
SRCS = L907_351.cpp L907.cpp
# Объектные файлы
OBJS = $(SRCS:.cpp=.o)

# Правило сборки исполняемого файла
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Правило компиляции объектных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка сборки
clean:
	rm -f $(OBJS) $(TARGET)

# Рекомпиляция
rebuild: clean $(TARGET)