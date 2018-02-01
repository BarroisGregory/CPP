#include <iostream>
#include "List.hpp"

List::List(){
  _tete = nullptr;
}

void List::ajouterDevant(int valeur){
  Noeud tempN= new Noeud(valeur);
  if(_tete == nullptr){
    _tete = &tempN;
  }else{
    tempN -> _suivant = _tete;
    _tete = &tempN;
  }
}

int List::getTaille()const{
  Noeud p = _tete;
  int n = 0;
  while(p -> _suivant != nullptr){
    n ++;
  }
  return n;
}

int List::getElement(int indice)const{
  Noeud p = _tete;
  int n = 0;
  while(p -> _suivant != nullptr && n < indice){
    n ++;
  }
  return p -> _valeur;;
}

Noeud::Noeud(int val){
  _valeur = val;
}
