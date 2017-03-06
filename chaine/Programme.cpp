#include <stdio.h>
#include <iostream>
#include "Chaine.hpp"

void annexe(const Chaine c){
  //c.set(2); Erreur, une reference ne peut appeler uniquement des methodesconst
  printf("%s est allée dans annexe taille = %d\n", c.donnees(),c.taille());
}

Chaine print (Chaine &s){
  s.debug();
  return s ;
}


int  main (){
  Chaine s1("Hello ");
  Chaine s2("World");
  const Chaine &s3 = s1+s2;
  printf("%s\n", s3.donnees());
  delete s3;
}
