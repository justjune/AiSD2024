CXX = g++
RM = del
LISTING = L222_060
FUNCTION_NAME = function

$(LISTING).exe : $(LISTING).o $(FUNCTION_NAME).o
	$(CXX) $(LISTING).o $(FUNCTION_NAME).o -o $(LISTING).exe

$(LISTING).o : $(LISTING).cpp
	$(CXX) -c $(LISTING).cpp -o $(LISTING).o

$(FUNCTION_NAME).o : $(FUNCTION_NAME).cpp $(FUNCTION_NAME).h
	$(CXX) -c $(FUNCTION_NAME).cpp -o $(FUNCTION_NAME).o

clean:
	$(RM) *.o $(LISTING).exe

