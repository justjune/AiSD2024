# Компилятор
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Файлы проекта
OBJ = lfuk.o l332_088.o
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

lfuk.o: lfuk.cpp lfuk.h
	$(CXX) $(CXXFLAGS) -c lfuk.cpp

L332_087.o: L332_087.cpp lfuk.h
	$(CXX) $(CXXFLAGS) -c L332_087.cpp

clean:
	rm -f $(OBJ) $(TARGET)
