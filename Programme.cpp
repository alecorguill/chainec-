#include <stdio.h>
#include <iostream>
#include "Chaine.hpp"

void annexe(const Chaine &c){
  //c.set(2); Erreur, une reference ne peut appeler uniquement des methodesconst
  printf("%s est allée dans annexe taille = %d\n", c.donnees(),c.taille());
}


int main(int argc, char ** argv) {
  Chaine s1("Une chaine");
  Chaine s2(s1);
  Chaine s3 = s1;

  s1.debug();
  s2.debug();
  s3.debug();
}
