#ifndef VECTEUR3_HPP
#define VECTEUR3_HPP

#include <iostream>
#include <cmath>

struct Vecteur3 {
  float x,y,z;

  void afficher() const;
  float norme() const;
};

void afficher(const Vecteur3&);
float produitScalaire(const Vecteur3&, const Vecteur3&);
Vecteur3 addition(const Vecteur3&, const Vecteur3&);

#endif
