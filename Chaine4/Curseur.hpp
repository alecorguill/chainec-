#ifndef CURSEUR_HPP
#define CURSEUR_HPP

#include "Chaine.hpp"

class Curseur {
protected:
  Chaine _chaine;
  int _position;
public:
  Curseur();
  Curseur(const Chaine & c, const int & position);
  virtual Curseur & operator++()=0;
  virtual Curseur & operator--()=0;
  char operator*() const;
  virtual bool fini() const=0;
  virtual void fin()=0;

  virtual ~Curseur();
};

#endif
