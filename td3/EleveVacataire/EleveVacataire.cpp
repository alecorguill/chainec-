#include "../header/EleveVacataire.hpp"
#include <string>

namespace enseirb {
  EleveVacataire::EleveVacataire(const std::string &s): Personne(s), Etudiant(s), Enseignant(s){
  }

  std::string EleveVacataire::nom() const{
    return Etudiant::nom()+Enseignant::nom();
  }

  EleveVacataire::~EleveVacataire(){
  }
}
