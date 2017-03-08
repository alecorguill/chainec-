#include "../header/Enseignant.hpp"

using namespace std;

namespace enseirb{
  Enseignant::Enseignant(const string &s): Personne(s){
  }

  unsigned int Enseignant::nbHeure() const{
    return _services;
  }

  string Enseignant::nom() const {
    return "Enseignant: "+Personne::nom();
  }

  Enseignant::~Enseignant(){}
}
