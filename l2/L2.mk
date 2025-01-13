
#L223_061
CXX = g++
rm = del
spp = L223_061
funk = find
$(spp).exe : $(spp).o $(funk).o
	$(CXX) $(spp).o $(funk).o -o $(spp)

$(spp).o : $(spp).cpp
	$(CXX) -c $(spp).cpp -o $(spp).o

$(funk).o : $(funk).cpp
	$(CXX) -c $(funk).cpp -o $(funk).o

clean:
	$(rm) *.o $(spp).exe



#L224_063.

spp2 = L224_063
mat2 = matx
$(spp2).exe : $(spp2).o $(mat2).o
	$(CXX) $(spp2).o $(mat2).o -o $(spp2)

$(spp2).o : $(spp2).cpp
	$(CXX) -c $(spp2).cpp -o $(spp2).o

$(mat2).o : $(mat2).cpp
	$(CXX) -c $(mat2).cpp -o $(mat2).o

clean:
	$(rm) *.o $(spp2).exe


#L225_066

start = L225_066
func = pusk
$(start).exe : $(start).o $(func).o
	$(CXX) $(start).o $(func).o -o $(start)

$(start).o : $(start).cpp
	$(CXX) -c $(start).cpp -o $(start).o

$(func).o : $(func).cpp
	$(CXX) -c $(func).cpp -o $(func).o

clean:
	$(rm) *.o $(start).exe