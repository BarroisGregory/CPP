#include <iostream>
#include <cmath>
#include "PolygoneRegulier.hpp"

PolygoneRegulier::PolygoneRegulier(const Couleur& couleur, const Point& centre, int rayon, int nbCotes) : FigureGeometrique(couleur), _nbPoints(nbCotes), _points(new Point[nbCotes]) {
  for(int i = 0; i < _nbPoints; i++){
    _points[i]._x = centre._x + rayon * std::cos(3.14/_nbPoints);
    _points[i]._y = centre._y + rayon * std::sin(3.14/_nbPoints);
  }
}

void PolygoneRegulier::afficher() const{
  for(int i = 0; i < _nbPoints; i++){
    std::cout << _points[i]._x << "_" << _points[i]._y << std::endl;
  }
}

int PolygoneRegulier::getNbPoints() const{
  return _nbPoints;
}

const Point& PolygoneRegulier::getPoint(int indice) const{
  return _points[indice];
}
