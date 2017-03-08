#include "./header/Etudiant.hpp"
#include "./header/Personne.hpp"
#include "./header/Enseignant.hpp"
#include "./header/EleveVacataire.hpp"
#include <string>
#include <iostream>

using namespace enseirb;
void afficheNom(Personne &p){
  std::cout << p.nom() << std::endl;
}

int main() {
  const std::string s = "didier";
  EleveVacataire e(s);
  std::cout << e.nom() << std::endl;
  afficheNom(e);
  return 1;
}
