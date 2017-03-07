#include "../header/Personne.hpp"
#include <string>

namespace enseirb {
  Personne::Personne(const std::string &s): _nom(s){
    
  }
  
  std::string Personne::nom() const{
    return _nom;
  }

  Personne::~Personne() {
  }
}
