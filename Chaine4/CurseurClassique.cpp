#include <stdio.h>
#include <stdlib.h>
#include "CurseurClassique.hpp"
#include <iostream>
CurseurClassique::CurseurClassique(const Chaine & c): Curseur(c,0){}

CurseurClassique & CurseurClassique::operator++(){
  try{
    if(fini())
      throw 1;
  }
  catch (int i) {
    if(i == 1)
      std::cout<< "Imppossible de faire ++" << std::endl;
    throw;
  }
  
  if(!fini())
    Curseur::_position++;
  else
    exit(EXIT_FAILURE);
  return *this;
}

CurseurClassique & CurseurClassique::operator--(){
  if(_position > 0)
    Curseur::_position--;
  else 
    exit(EXIT_FAILURE);
  return *this;
}

bool CurseurClassique::fini() const{
  return _chaine[_position+1] == '\0';
}

void CurseurClassique::fin() {
  int i = Curseur::_position;
  while(_chaine[++i] != '\0'){}
  Curseur::_position = i;
}

CurseurClassique::~CurseurClassique(){}
