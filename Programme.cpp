#include <stdio.h>
#include <iostream>
#include "Chaine.hpp"

void annexe(const Chaine &c){
  //c.set(2); Erreur, une reference ne peut appeler uniquement des methodesconst
  printf("%s est allée dans annexe taille = %d\n", c.donnees(),c.taille());
}

Chaine print (Chaine &s){
  s.debug();
  return s ;
}


int main (){
  Chaine s1("une chaine"); // 1
  Chaine s2("Coucou"); // 2
  s2 = s1 ; // 3
  s2.debug();
}
