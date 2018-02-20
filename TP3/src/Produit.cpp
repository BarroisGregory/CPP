#include <iostream>
#include "Produit.hpp"

Produit::Produit(int id, const std::string& description) :
  _id(id), _description(description) {}

int Produit::getId()const{
  return _id;
}

std::string& Produit::getDescription()const{
  return _description;
}

void Produit::afficherProduit()const{
  std::cout << "id : " << _id << ::std::endl;
  std::cout << "description : " << _descroiption << std::endl;
}
