#L222_060
CXX = g++
rm = del

cou = L222_060
sor = rebut
$(cou).exe : $(cou).o $(sor).o
	$(CXX) $(cou).o $(sor).o -o $(cou)

$(cou).o : $(cou).cpp
	$(CXX) -c $(cou).cpp -o $(cou).o

$(sor).o : $(sor).cpp
	$(CXX) -c $(sor).cpp -o $(sor).o

clean:
	$(rm) *.o $(cou).exe

