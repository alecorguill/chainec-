#include "./header/Etudiant.hpp"
#include "./header/Personne.hpp"
#include "./header/Enseignant.hpp"

#include <string>
#include <iostream>

using namespace enseirb;
void afficheNom(Personne &p){
  std::cout << p.nom() << std::endl;
}

int main() {
  const std::string s = "didier";
  Enseignant e(s);
  Personne &p = e;
  afficheNom(p);
  return 1;
}
