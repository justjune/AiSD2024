#L557_185.cpp
#targ = L557_185
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
# cr = L557_185.cpp det.cpp
# head = det.h

# all: $(targ)

# $(targ): $(cr) $(head)
# 	$(CXX) $(CXXFLAGS) -o $(targ) $(cr)


# clean:
# 	rm -f $(targ)


#L559_187.cpp
all: L559_187

L559_187: L559_187.o det.o
	g++ -o L559_187 L559_187.o det.o

L559_187.o: L559_187.cpp det.h
	g++ -c L559_187.cpp

det.o: det.cpp det.h
	g++ -c det.cpp

clean:
	rm -f *.o L559_187


