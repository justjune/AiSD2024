
#l110 034 ELENA
CXX = g++
rm = del
list = L110_034
func = increment
$(list).exe : $(list).o $(func).o
	$(CXX) $(list).o $(func).o -o $(list)

$(list).o : $(list).cpp
	$(CXX) -c $(list).cpp -o $(list).o

$(func).o : $(func).cpp
	$(CXX) -c $(func).cpp -o $(func).o

clean:
	$(rm) *.o $(list).exe