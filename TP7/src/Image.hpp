#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include <string>

class Image{
private:
  int _largeur, _hauteur;
  int* _pixels;

public:
  Image(int largeur, int hauteur);
  int getLargeur() const;
  int getHauteur() const;
//  int getPixel(int i, int j) const;
//  void setPixel(int i, int j, int couleur);
  int getPixel(const int& i, const int& j) const;
  void setPixel(const int& i, const int& j, const int& couleur);
  ~Image();
  void remplir(Image& image);
  void ecrirePnm(const Image& img, const std::string& nomFichier);
};

#endif
