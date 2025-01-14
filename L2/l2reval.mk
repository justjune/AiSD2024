#L222_060 reval

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


#L223_061

CXX = g++
rm = del

cou = L223_061
sor = find
$(cou).exe : $(cou).o $(sor).o
	$(CXX) $(cou).o $(sor).o -o $(cou)

$(cou).o : $(cou).cpp
	$(CXX) -c $(cou).cpp -o $(cou).o

$(sor).o : $(sor).cpp
	$(CXX) -c $(sor).cpp -o $(sor).o

clean:
	$(rm) *.o $(cou).exe

#L224_063 


CXX = g++
rm = del

cou = L224_063
sor = matx
$(cou).exe : $(cou).o $(sor).o
	$(CXX) $(cou).o $(sor).o -o $(cou)

$(cou).o : $(cou).cpp
	$(CXX) -c $(cou).cpp -o $(cou).o

$(sor).o : $(sor).cpp
	$(CXX) -c $(sor).cpp -o $(sor).o

clean:
	$(rm) *.o $(cou).exe

#L225_066
CXX = g++
rm = del

cou = L225_066
sor = pusk
$(cou).exe : $(cou).o $(sor).o
	$(CXX) $(cou).o $(sor).o -o $(cou)

$(cou).o : $(cou).cpp
	$(CXX) -c $(cou).cpp -o $(cou).o

$(sor).o : $(sor).cpp
	$(CXX) -c $(sor).cpp -o $(sor).o

clean:
	$(rm) *.o $(cou).exe



