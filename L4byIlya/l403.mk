CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = ll403_133
OBJS = ll403_133.o funnc.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

ll403_133.o: ll403_133.cpp funnc.h
	$(CXX) $(CXXFLAGS) -c ll403_133.cpp

funnc.o: funnc.cpp funnc.h
	$(CXX) $(CXXFLAGS) -c funnc.cpp

clean:
	rm -f $(OBJS) $(TARGET)
