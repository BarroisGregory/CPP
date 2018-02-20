#ifndef MAGASIN_HPP_
#define MAGASIN_HPP_

#include <vector>
#include <string>

class Magasin{
private :
  std::vector<Client> _clients;
  std::vector<Produit> _produits;
  std::vector<Location> _locations;
  int _idCourantClient;
  int _idCourantProduit;

public :
  Magasin();
  int nbClients()const;
  void ajouterClient(const std::string& nom);
  void afficherClients()const;
  void supprimerClient(int idClient);
};

#endif
