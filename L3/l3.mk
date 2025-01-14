# Садрисламов р р
CXX = g++
RM = del

# L302_087
L302_087o = L302_087.o funk.o

L302_087.exe: $(L302_087o)
	$(CXX) -o L302_087.exe $(L302_087o)

L302_087.o: L302_087.cpp
	$(CXX) -c L302_087.cpp

funk.o: funk.cpp
	$(CXX) -c funk.cpp



# L303_088
CXXFLAGS = -std=c++11 -finput-charset=UTF-8 -fexec-charset=UTF-8

L303_088o = L303_088.o funk8.o

L303_088.exe: $(L303_088o)
	$(CXX) $(CXXFLAGS) -o L303_088.exe $(L303_088o)

L303_088.o: L303_088.cpp
	$(CXX) $(CXXFLAGS) -c L303_088.cpp

funk8.o: funk8.cpp
	$(CXX) $(CXXFLAGS) -c funk8.cpp

clean:
	$(RM) *.o *.exe
