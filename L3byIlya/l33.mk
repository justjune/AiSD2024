# Имя исполняемого файла
TARGET = l33

# Компилятор
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Файлы проекта
OBJ = funnc.o ll303_088.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

funnc.o: funnc.cpp funnc.h
	$(CXX) $(CXXFLAGS) -c funnc.cpp

ll303_088.o: ll303_088.cpp funnc.h
	$(CXX) $(CXXFLAGS) -c ll303_088.cpp

clean:
	rm -f $(OBJ) $(TARGET)
