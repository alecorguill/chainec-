#ifndef ENSEIGNANT_HPP
#define ENSEIGNANT_HPP

#include "Personne.hpp"
#include <string>

namespace enseirb {
  class Enseignant : virtual Personne {
  private:
    unsigned int _services;
    
  public:
    Enseignant(const std::string &s);
    unsigned int nbHeure() const;
    std::string nom() const;
    virtual ~Enseignant();
  };
}

#endif
