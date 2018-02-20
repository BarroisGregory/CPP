#include <iostream>
#include "Magasin.hpp"

Magasin::Magasin() :
  _idCourantClient(0), _idCourantProduit(0) {}

int Magasin::nbClient()const{
  return _idCourantClient;
}

