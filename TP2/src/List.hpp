#ifndef liste_hpp
#define liste_hpp
struct Noeud{
  int _valeur;
  Noeud* _suivant;
  Noeud(int val);
};

struct List{
  Noeud* _tete;
  List();
  void ajouterDevant(int valeur);
  int getTaille()const;
  int getElement(int indice)const;
};
#endif
