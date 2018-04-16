#include "Image.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
  std::string nomFichier("test");
  Image image(500,500);
  remplir(image);
  Image image2(bordure(image,100,10));
  ecrirePnm(image2, nomFichier);
  return 0;
}
