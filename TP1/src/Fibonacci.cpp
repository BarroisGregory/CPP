#include <iostream>
#include "Fibonacci.hpp"

int fibonacciIteratif(int nb){
  int  somme = 0, terme1 = 0, terme2 = 1;
  for(int i = 2; i <= nb; i++){
    somme = terme1 + terme2;
    terme1 = terme2;
    terme2 = somme;
  }
  return somme;
}

int fibonacciRecurcif(int nb){
  if(nb < 2){
    return nb;
  }else{
    return (fibonacciRecurcif(nb - 1) + fibonacciRecurcif(nb - 2));
  }
  
}
