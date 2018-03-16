#include <iostream>
#include "FigureGeometrique"

FigureGeometrique::FigureGeometrique(const Couleur& couleur) :
  _couleur(couleur) {}

const Couleur& FigureGeometrique::getCouleur() const{
  return _couleur;
}
