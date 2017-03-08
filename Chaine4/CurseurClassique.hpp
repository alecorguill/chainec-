#ifndef CURSEUR_CLASSIQUE_HPP
#define CURSEUR_CLASSQUE_HPP

#include "Chaine.hpp"
#include "Curseur.hpp"

class CurseurClassique : public Curseur {
public:
  CurseurClassique(const Chaine & c);
  CurseurClassique & operator++();
  CurseurClassique & operator--();
  bool fini() const;
  void fin();

  virtual ~CurseurClassique();
};

#endif
 
