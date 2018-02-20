#include <iostream>
#include "Client.hpp"

Client::Client(int id, const std::string &nom) :
  _id(id), _nom(nom) {}

int Client::getId()const{
  return _id;
}

const std::string& Client::getNom()const{
  return _nom;
}

void Client::afficherClient()const{
  std::cout << "id : " << _id << ::std::endl;
  std::cout << "nom : " << _nom << std::endl;
};
