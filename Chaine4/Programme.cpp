#include<cstdio>
#include <iostream>
#include "Chaine.hpp"
#include "Curseur.hpp"
#include "CurseurClassique.hpp"

using namespace std;
void afficheCurseur(const Curseur &s){
    cout << *s << endl;
  }

int main(int argc, char **argv){
  Chaine c("Salut");
  Chaine c1("Helloworld");
  CurseurClassique cc(c);
  cc.fin();
  ++cc;
  afficheCurseur(cc);
  return 1;
}
