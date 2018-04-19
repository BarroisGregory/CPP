#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
    _inventaire._bouteilles.push_back(Bouteille{"La Charette","2013-08-18",1});
    _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
    _vues.push_back(std::make_unique<VueConsole>(*this));
}

void Controleur::run() {
    for (auto & v : _vues)
        v->run();
}

void Controleur::actualiser() {
    for (auto & v : _vues)
        v->actualiser();
}

std::string Controleur::getTexte(){
  std::ostringstream str;
  str << _inventaire;
  return str.str();
}
