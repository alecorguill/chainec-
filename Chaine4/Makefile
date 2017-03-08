CXX=g++
CXXFLAGS=-Wall -g 

Programme: Programme.o Curseur.o CurseurClassique.o Chaine.o
	$(CXX) $(CXXFLAGS) $^ -o $@

Programme.o: Programme.cpp Chaine.hpp

Curseur.o: Curseur.cpp Curseur.hpp

CurseurClassique.o: CurseurClassique.cpp CurseurClassique.hpp

Chaine.o: Chaine.cpp Chaine.hpp 

clean:
	rm Programme Programme.o Chaine.o
