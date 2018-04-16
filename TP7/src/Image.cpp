#include <iostream>
#include <cmath>
#include <fstream>
#include "Image.hpp"

Image::Image(int largeur, int hauteur) : _largeur(largeur), _hauteur(hauteur) {
  _pixels = new int[largeur * hauteur];
}

Image::Image(const Image& img):
  Image(img.getLargeur(), img.getHauteur())
{
  for(int i = 0; i < img.getHauteur(); i++){
    for(int j = 0; j < img.getLargeur() ; j++){
        setPixel(i,j,img.getPixel(i,j));
    }
  }
}

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
  _pixels[_largeur*i+j] = couleur;
}

Image::~Image(){
  delete[] _pixels;
}

void remplir(Image& image){
  for(int i = 0; i < image.getHauteur(); i++){
    for(int j = 0; j < image.getLargeur(); j++){
          double cosVal = ((std::cos((float)j / 10) + 1)/2)*255;
          image.setPixel(i,j,std::floor(cosVal));
    }
  }
}

void ecrirePnm(const Image& img, const std::string& nomFichier){
  std::ofstream fichier(nomFichier, std::ofstream::out);
  if(fichier){
    fichier << "P2" << std::endl << img.getLargeur() << " " << img.getHauteur()
    << std::endl << "255" << std::endl;
    for(int i = 0; i < img.getHauteur(); i++){
      for(int j = 0; j < img.getLargeur(); j++){
        fichier << img.getPixel(i,j) << " ";
      }
      fichier << std::endl;
    }
  }
  else{
    throw std::string("Erreur: ouverture fichier");
  }
}
Image bordure(const Image& img, int couleur, int epaisseur){
  Image image(img);
  for(int i = 0; i < img.getHauteur(); i++){
    for(int j = 0; j < img.getLargeur() ; j++){
      if( i < epaisseur or j < epaisseur or i > img.getHauteur()-10 or j > img.getLargeur()-10){
        image.setPixel(i,j,couleur);
      }
    }
  }
  return image;
}
