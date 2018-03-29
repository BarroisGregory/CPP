#include <iostream>
#include "Livre.hpp"

Livre:Livre() : _titre(" "), _auteur(" "), _annee(0) {}

Livre::Livre(const std::string& titre, const std::string& auteur, int annee) : _annee(annee) {
  if((std::size_t found = titre.find(";"))!=std::string::npos || (std::size_t found = titre.find("\n"))!=std::string::npos || (std::size_t found = auteur.find(";"))!=std::string::npos || (std::size_t found = auteur.find("\n"))!=std::string::npos){
    throw std::string("Carractère incorrecte !");
  }else{
    _titre = titre;
    _auteur = auteur;
  }
}

const std::string& Livre::getTitre() const {
  return _titre;
}

const std::string& Livre::getAuteur() const {
  return _auteur;
}

int Livre::getAnnee() const {
  return _annee;
}

virtual bool Livre::operator<(const Livre& x) const {
  return _auteur < x.getAuteur() or (_auteur == x.getAuteur() and _titre < x.getTitre());
}

bool operator==(const& Livre a, const& Livre b){
  return a._titre == b._titre and a._auteur == b._auteur and a._annee == b._annee;
}
