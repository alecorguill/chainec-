#ifndef ELEVE_VACATAIRE_HPP
#define ELEVE_VACATAIRE_HPP

#include "Etudiant.hpp"
#include "Enseignant.hpp"
#include "Personne.hpp"
#include <string>

namespace enseirb {
  class EleveVacataire : virtual public Personne, Etudiant, Enseignant {
  public:
    EleveVacataire(const std::string &s);
    std::string nom() const;
    ~EleveVacataire();
  };

}

#endif
