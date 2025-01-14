#L557_185.cpp
targ = L557_185
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
cr = L557_185.cpp det.cpp
head = det.h

all: $(targ)

$(targ): $(cr) $(head)
	$(CXX) $(CXXFLAGS) -o $(targ) $(cr)


clean:
	rm -f $(targ)

