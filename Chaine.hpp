#ifndef CHAINE_HPP
#define CHAINE_HPP

class Chaine {
  //Attributs
private:
  unsigned int _taille;
  char * _donnees;

  //Operateurs
public:
  const Chaine& operator=(const Chaine &);
  //Constructeurs 
public:
  Chaine();
  Chaine(const char *);
  Chaine(const Chaine &c);
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
