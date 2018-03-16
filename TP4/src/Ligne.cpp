#include <iostream>
#include "Ligne.hpp"

Ligne::Ligne(const Couleur& couleur, const Point& p0, const Point& p1) : _couleur(couleur), _p0(p0), _p1(p1) {}

void Ligne::afficher() const {
  std::cout << getCouleur()._r << "_" << getCouleur()._g << "_" << getCouleur()._b<< _p0._x << "_" << _p0._y << " " << _p1._x << "_" << _p1._y << std::endl;
}

const Point& Ligne::getP0() const {
  return _p0;
}

const Point& Ligne::getP1() const {
  return _p1;
}
