CXX = g++
rm = del
listing = L223_061
function_name = findmatch
$(listing).exe : $(listing).o $(function_name).o
	$(CXX) $(listing).o $(function_name).o -o $(listing)

$(listing).o : $(listing).cpp
	$(CXX) -c $(listing).cpp -o $(listing).o

$(function_name).o : $(function_name).cpp
	$(CXX) -c $(function_name).cpp -o $(function_name).o

clean:
	$(rm) *.o $(listing).exe