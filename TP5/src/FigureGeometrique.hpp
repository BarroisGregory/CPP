#ifndef FIGUREGEOMETRIQUE_HPP_
#define FIGUREGEOMETRIQUE_HPP_

#include "Couleur.hpp"

class FigureGeometrique{
protected:
  Couleur _couleur;

public:
  FigureGeometrique(const Couleur& couleur);
  const Couleur& getCouleur() const;
};

#endif
