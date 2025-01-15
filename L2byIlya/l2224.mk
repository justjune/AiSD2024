# Имя исполняемого файла
TARGET = l2224

# Компилятор
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Файлы проекта
OBJ = fuun.o ll224_063.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

fuun.o: fuun.cpp fuun.h
	$(CXX) $(CXXFLAGS) -c fuun.cpp

ll224_063.o: ll224_063.cpp fuun.h
	$(CXX) $(CXXFLAGS) -c ll224_063.cpp

clean:
	rm -f $(OBJ) $(TARGET)
