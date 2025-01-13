# # L402_132reval!
RM = del

TARGET = L402_132reval

SRCS = L402_132.cpp L402_132reval.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET).exe


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@



#L403_133.cpp

TARGET = L403_133

SRCS =  L403_133.cpp obj.cpp L402_132.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET) clean

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)


%.o: %.cpp$(CXX) $(CXXFLAGS) -c $< -o $@






.PHONY: clean
clean:
	$(RM) $(objects) $(l101022o) $(l604217o) ${l606219o} ${l610229o} m.exe L101022.exe L604_217.exe L606_219.exe L610_229.exe


