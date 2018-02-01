#include "Vecteur3.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(Vecteur3Test) { };

TEST(Vecteur3Test, test_norme) {
  Vecteur3 v {2, 3, 6};
  CHECK_EQUAL(v.norme(), 7);
}

TEST(Vecteur3Test, test_addition) {
  Vecteur3 v1 {2, 3, 6};
  Vecteur3 v2 {-2, 5, 9};
  Vecteur3 result = addition(v1, v2);
  CHECK_EQUAL(result.x, 0);
  CHECK_EQUAL(result.y, 8);
  CHECK_EQUAL(result.z, 15);
}

TEST(Vecteur3Test, test_produitScalaire) {
  Vecteur3 v1 {5, 2, 3};
  Vecteur3 v2 {-2, 5, 1};
  float result = produitScalaire(v1, v2);
  CHECK_EQUAL(result, 3);
}
