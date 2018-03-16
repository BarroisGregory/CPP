#ifndef POLYGONEREGULIER_HPP_
#define POLYGONEREGULIER_HPP_

#include "FigureGeometrique"
#include "Point.hpp"
#include "Couleur.hpp"

class PolygoneRegulier : public FigureGeometrique{
private:
  int _nbPoints;
  Point* _points;

public:
  PolygoneRegulier(const Couleur& couleur, const Point& centre,int rayon, int nbCotes);
  void afficher() const;
  int getNbPoints(int indice) const;
  const Point& getPoint() const;
};

#endif
