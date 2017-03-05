#ifndef CHAINE_HPP
#define CHAINE_HPP

class Chaine {
  //Attributs
  unsigned int _taille;
  char * _donnees;

  //Constructeurs 
public:
  Chaine();
  Chaine(const char *);
  
  //Methodes
public:
  unsigned int taille() const;
  char * donnees() const;
  char get(unsigned int i) const;
  void set(unsigned int taille);
  void debug() const;
  //Destructeur
  ~Chaine();
};

#endif
