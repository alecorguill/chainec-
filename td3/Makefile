CXX=g++
CXXFLAGS=-Wall -g 

Programme: Programme.o Personne.o Etudiant.o
	$(CXX) $(CXXFLAGS) Programme.cpp ./Personne/Personne.cpp ./Etudiant/Etudiant.cpp ./Enseignant/Enseignant.cpp ./EleveVacataire/EleveVacataire.cpp -o Programme

Programme.o: Programme.cpp ./header/Personne.hpp

Personne.o: ./Personne/Personne.cpp ./header/Personne.hpp 

Etudiant.o: ./Etudiant/Etudiant.cpp ./header/Etudiant.hpp

Enseignant.o: ./Enseignant/Enseignant.cpp ./header/Enseignant.hpp

EleveVacataire.o: Etudiant.o Enseignant.o
clean:
	rm -f Programme Programme.o Personne.o
	rm -f ./*~
