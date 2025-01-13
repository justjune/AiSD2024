CXX = g++
rm = del
listing = L221_059
function_name = selection_sort

# Правило сборки исполняемого файла
$(listing).exe: $(listing).o $(function_name).o
	$(CXX) $(listing).o $(function_name).o -o $(listing).exe

# Правило сборки объектного файла для L221_059.cpp
$(listing).o: $(listing).cpp selection_sort.h
	$(CXX) -c $(listing).cpp -o $(listing).o

# Правило сборки объектного файла для selection_sort.cpp
$(function_name).o: $(function_name).cpp selection_sort.h
	$(CXX) -c $(function_name).cpp -o $(function_name).o

# Очистка всех скомпилированных файлов
clean:
	$(rm) *.o $(listing).exe
