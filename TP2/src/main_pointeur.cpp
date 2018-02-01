#include <iostream>

int main(){
  int x = 27;
  int* y = nullptr;
  int** w = nullptr;
  int* a;
  a = new int(x);
  y = &x;
  w = &y;
  std::cout << "L'adresse de x : " << y << std::endl;
  std::cout << "Valeur de x : " << *y << std::endl;
  std::cout << "L'adresse de y : " << w << std::endl;
  std::cout << "Valeur de y : " << *w << std::endl;
  std::cout << "Valeur de x : " << **w << std::endl;
  std::cout << "L'adresse pointer par a : " << a << std::endl;
  std::cout << "Valeur de x : " << *a << std::endl;
  delete a;
  
  return 0;
}
