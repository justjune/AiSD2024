CXX = g++
rm = del
l901 = L901_339
func = l901

$(l901).exe : $(l901).o $(func).o EJF.o
	$(CXX) $(l901).o $(func).o EJF.o -o $(l901)

$(l901).o : $(l901).cpp
	$(CXX) -c $(l901).cpp -o $(l901).o

$(func).o : $(func).cpp
	$(CXX) -c $(func).cpp -o $(func).o

EJF.o : EJF.cpp
	$(CXX) -c EJF.cpp -o EJF.o

clean:
	$(rm) *.o $(l901).exe
