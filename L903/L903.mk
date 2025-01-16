CXX = g++
CXXFLAGS = -std=c++17

TARGET = L903_344
SRC = L903_344.cpp L903.cpp
OBJ = $(SRC:.cpp=.o)

$(TARGET).exe: $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET).exe

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del *.o $(TARGET).exe