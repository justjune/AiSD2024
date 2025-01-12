CXX = g++
RM = del

# L909_373
L909_373o = L909_373.o cont.o

L909_373.exe: $(L909_373o)
	$(CXX) -o L909_373.exe $(L909_373o)

L909_373.o: L909_373.cpp
	$(CXX) -c L909_373.cpp

cont.o: cont.cpp
	$(CXX) -c cont.cpp
