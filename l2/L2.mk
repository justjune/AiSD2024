
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