ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l802296o=L802_296.o L802_296test.o
L802296.exe: $(l802296o)
	$(CXX) -o L802296.exe $(l802296o)

L802_296.o: L802_296.cpp
	$(CXX) -c L802_296.cpp

L802_296test.o: L802_296test.cpp L802_296.hpp
	$(CXX) -c L802_296test.cpp

.PHONY: clean
clean:
	$(RM) $(objects) $(l802296o) m.exe L802296.exe
