#include <iostream>
#include "Image.hpp"

Image::Image(int largeur, int hauteur) : _largeur(largeur), _hauteur(hauteur) {}

int Image::getLargeur() const{
  return _largeur;
}

int Image::getHauteur() const {
  return _hauteur;
}

/*
int Image::getPixel(int i, int j) const {
  return _pixels[_largeur*i+j];
}

void Image::setPixel(int i, int j, int couleur){
  _pixels[_lageur*i+j] = couleur;
}*/

int Image::getPixel(const int& i, const int& j) const {
  return _pixels[_largeur*i+j];
}

void Image::setPixel(const int& i, const int& j, const int& couleur){
  _pixels[_lageur*i+j] = couleur;
}

Image::~Image(){
  delete[] _pixels;
}
