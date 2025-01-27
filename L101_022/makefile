ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif


l101022o=L101_022.o L101_022test.o
L101022.exe: $(l101022o)
	$(CXX) -o L101022.exe $(l101022o)

L101_022.o: L101_022.c
	$(CXX) -c L101_022.c

L101_022test.o: L101_022test.c L101_022.h
	$(CXX) -c L101_022test.c

.PHONY: clean
clean:
	$(RM) $(objects) $(l101022o) m.exe L101022.exe
