#ifndef LIVRE_HPP_
#define LIVRE_HPP_

#include <string>

class Livre {
private:
  std::string _titre;
  std::string _auteur;
  int _annee;

public:
  Livre();
  Livre(const std::string& titre, const std::string& auteur, int annee);
  const std::string& getTitre() const;
  const std:string& getAuteur() const;
  int getAnnee() const;
  virtual bool operator<(const Livre& x) const;
  friend bool operator==(const& Livre a, const& Livre b);
};
bool operator==(const& Livre a, const& Livre b);

#endif
