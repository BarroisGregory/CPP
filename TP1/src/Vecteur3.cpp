#include "Vecteur3.hpp"

void afficher(const Vecteur3& v) {
  std::cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << std::endl;
}

void Vecteur3::afficher() const {
  std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

float Vecteur3::norme() const {
  return std::sqrt(x*x + y*y + z*z);
}

float produitScalaire(const Vecteur3& a, const Vecteur3& b) {
  return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vecteur3 addition(const Vecteur3& a, const Vecteur3& b) {
  return Vecteur3{a.x+b.x, a.y+b.y, a.z+b.z};
}
