#include "Curseur.hpp"

Curseur::Curseur(){}
Curseur::Curseur(const Chaine & c, const int & position): _chaine(c), _position(position){}

char Curseur::operator*() const{
  return _chaine[this->_position];
}

Curseur::~Curseur(){}
