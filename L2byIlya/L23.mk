
CXX = g++
RM = del
LISTING = L223_061
FUNCTION_NAME = findmatch

# Сборка исполняемого файла
$(LISTING).exe : $(LISTING).o $(FUNCTION_NAME).o
	$(CXX) $(LISTING).o $(FUNCTION_NAME).o -o $(LISTING).exe

# Компиляция объектного файла программы
$(LISTING).o : $(LISTING).cpp
	$(CXX) -c $(LISTING).cpp -o $(LISTING).o

# Компиляция объектного файла функции
$(FUNCTION_NAME).o : $(FUNCTION_NAME).cpp $(FUNCTION_NAME).h
	$(CXX) -c $(FUNCTION_NAME).cpp -o $(FUNCTION_NAME).o

# Очистка
clean:
	$(RM) *.o $(LISTING).exe
