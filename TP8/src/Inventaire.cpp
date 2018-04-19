#include "Inventaire.hpp"

std::ostream& operator<<(std::ostream& str, const Inventaire& inv) {
  std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	for(const Bouteille& bouteille : inv._bouteilles){
    str << bouteille;
  }
  std::locale::global(vieuxLoc);
	return str;
}
