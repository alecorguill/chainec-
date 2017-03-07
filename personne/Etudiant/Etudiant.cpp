#include "../header/Etudiant.hpp"


namespace enseirb {

  Etudiant::Etudiant(const std::string &s): Personne(s){
  }

  std::string Etudiant::filiere() const {
    return _filiere;
  }
  
  std::string Etudiant::enseignement() const{
    return _enseignement;
  }

  void Etudiant::setEnseignement(const std::string & s) {
    _enseignement = s;
  }
  
  std::string Etudiant::nom() const{
    return "Etudiant :" + Personne::nom();
  }

  Etudiant::~Etudiant(){
  }
}
