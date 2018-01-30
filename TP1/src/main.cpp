#include <iostream>
#include "Fibonacci.hpp"

int main(){
  int nb = 7;
  std::cout << "Hello world!" << std::endl;
  std::cout << fibonacciRecurcif(nb) << std::endl;
  std::cout << fibonacciIteratif(nb) << std::endl;
  return 0;
}
