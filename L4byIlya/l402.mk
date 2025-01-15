CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = ll402_132
OBJS = ll402_132.o ffunc.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

ll402_132.o: ll402_132.cpp ffunc.h
	$(CXX) $(CXXFLAGS) -c ll402_132.cpp

ffunc.o: ffunc.cpp ffunc.h
	$(CXX) $(CXXFLAGS) -c ffunc.cpp

clean:
	rm -f $(OBJS) $(TARGET)
