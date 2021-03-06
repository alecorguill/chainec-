#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>


namespace enseirb {

  class Personne {
    std::string _nom;
    //Constructeurs
  public:
    Personne(const std::string &s);

  public:
    virtual std::string nom() const;

    virtual ~Personne();

  };


}

#endif
