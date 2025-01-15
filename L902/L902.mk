CXXFLAGS = -std=c++17

rm = del
l902 = L902_343
func = l902
$(l902).exe : $(l902).o $(func).o
	$(CXX) $(l902).o $(func).o -o $(l902)

$(l902).o : $(l902).cpp
	$(CXX) -c $(l902).cpp -o $(l902).o

$(func).o : $(func).cpp
	$(CXX) -c $(func).cpp -o $(func).o

clean:
	$(rm) *.o $(l902).exe