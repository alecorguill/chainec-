#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include "Personne.hpp"
#include <string>

namespace enseirb {
  class Etudiant : virtual Personne {
  public:
    Etudiant(const std::string & s);
  private:
    std::string _filiere;
    std::string _enseignement;
  public:
    std::string filiere() const;
    std::string enseignement() const;
    std::string nom() const;
    void setEnseignement(const std::string & s);
    
    virtual ~Etudiant();
  };
  
}

#endif
