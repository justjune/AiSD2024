# Компилятор
CXX = g++
# Флаги компиляции
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
# Целевой файл
TARGET = L908_368
# Список исходных файлов
SRCS = L908_368.cpp L908.cpp
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