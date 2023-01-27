#ifndef DEF_BIBLIO
#define DEF_BIBLIO
#include <string>
#include <vector>
#include <string>
#include "auteur.hpp"
#include "livre.hpp"
#include "lecteur.hpp"
#include "date.hpp"
#include "emprunte.hpp"
#include <map>

class Biblio {
private:
  std::vector<Auteur> Auteurs;
  std::vector<Livre> Livres;
  std::vector<Lecteur> Lecteurs;
  std::vector<Emprunte> emprunte;
public:
  Biblio();
  std::vector<Lecteur> getlecteurs();
  std::vector<Livre> getlivres();
  std::vector<Auteur> getauteurs();
  std::vector<Emprunte> getemprunte();
  void addAuteur(const Auteur& auteur);
  void addlivre(const Livre& livre);
  void addlecteur(const Lecteur& lecteur);
  bool empuntelivre(std::string lecteur, std::string ISBN);
  std::vector<Livre> obtenirTousLesLivres();
  std::vector<Livre> obtenirLivresEmpruntes();
  double obtenirPourcentageLivresEmpruntes();
  std::vector<Livre> obtenirLivresEmpruntesParAuteur(Auteur auteur);
  std::map<Auteur, int> classerAuteursParLivresEmpruntes();
  
};
#endif