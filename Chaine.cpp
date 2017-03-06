#include <string.h>
#include <iostream>
#include <stdlib.h>
#include "Chaine.hpp"

Chaine::Chaine() : _taille(0), _donnees(NULL){
}

Chaine::Chaine(const char * c) {
  this->_taille = strlen(c);
  this->_donnees = new char[_taille+1];
  strcpy(this->_donnees, c);
}

Chaine::Chaine(const Chaine &c){
  this->_taille = c.taille();
  this->_donnees = new char[_taille+1];
  char * const tmp = c.donnees();
  strcpy(this->_donnees,tmp);
}

Chaine::~Chaine(){
  delete [] this->_donnees;
}

unsigned int Chaine::taille() const {
  return this->_taille;
}

char * Chaine::donnees() const{
  return _donnees;
}

char Chaine::get(unsigned int i) const {
  if(i>_taille)
    exit(EXIT_FAILURE);
  return this->_donnees[i];
}

void Chaine::set(unsigned int i){
  this->_taille = i;
}

void Chaine::debug() const{
  std::cout<<this->_taille<<std::endl;
}

const Chaine& operator=(const Chaine& c) {
  if(this == &c)
    return *this;
  delete [] _donnees;
  this->_taille = c._taille();
  this->_donnees = new char[_taille+1];
  const char * tmp = c.donnees();
  strcpy(this->_donnees, tmp);
}
