#ifndef ENSEIGNANT_HPP
#define ENSEIGNANT_HPP

#include "Personne.hpp"
#include <string>

namespace enseirb {
  class Enseignant : public Personne {
  private:
    unsigned int _services;
    
  public:
    Enseignant(const std::string &s);
    unsigned int nbHeure() const;
    std::string nom() const;
    ~Enseignant();
  };
}

#endif
