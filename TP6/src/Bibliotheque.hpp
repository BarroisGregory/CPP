#ifndef BIBLIOTHEQUE_HP_
#define BIBLIOTHEQUE_HP_

class Bibliotheque {
public:
  void afficher() const;
  void trierParAuteurEtTitre();
  void trierParAnnee();
  void lireFichier(const std::string& nomFichier);
  void ecrireFichier(const std::string& nomFichier) const;
};

#endif
