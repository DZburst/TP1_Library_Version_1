#include "bibliotheque.hpp"
#include "lecteur.hpp"
#include "livre.hpp"
#include "auteur.hpp"
#include "emprunte.hpp"
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void Biblio::addAuteur(const Auteur& auteur) {
  Auteurs.push_back(auteur);
  }
void Biblio::addlivre(const Livre& livre) {
  Livres.push_back(livre);
  }
void Biblio::addlecteur(const Lecteur& lecteur) {
  Lecteurs.push_back(lecteur);
  }
bool Biblio::empuntelivre(string lecteurid, string livreISBN ) {
  auto lecteurit = find_if(Lecteurs.begin(), Lecteurs.end(), [lecteurid](const Lecteur& lecteur) { return lecteur.getId() == lecteurid; });
  auto livreit = find_if(Livres.begin(), Livres.end(), [livreISBN](const Livre& livre) { return livre.getISBN() == livreISBN; });
  if (lecteurit == Lecteurs.end() || livreit == Livres.end()) {
    return false;
  }
  Lecteur& lecteur = *lecteurit;
  Livre& livre = *livreit;
  if (livre.getISBN() != livreISBN ) {
    return false;
  }
  livre.setISBN(livreISBN);
  lecteur.setId(lecteurid);
  return true;
}
vector<Lecteur> Biblio::getlecteurs(){return Lecteurs;}
vector<Livre> Biblio::getlivres(){ return Livres ;}
vector<Auteur> Biblio::getauteurs(){return Auteurs;}
vector<Emprunte> Biblio::getemprunte(){return emprunte;}
std::vector<Livre> Biblio::obtenirTousLesLivres() {
    return Livres;
}

vector<Livre> Biblio::obtenirLivresEmpruntes() {
  vector<Livre> empruntes;
  for (auto emprunt : emprunte) {
    Livre livre = emprunt.getlivre();
    empruntes.push_back(livre);
}
    return empruntes;
}

double Biblio::obtenirPourcentageLivresEmpruntes() {
  int total = Livres.size();
  int empruntes = obtenirLivresEmpruntes().size();
  return (double)empruntes / (double)total * 100;
}

std::vector<Livre> Biblio::obtenirLivresEmpruntesParAuteur(Auteur auteur) {
    std::vector<Livre> empruntesParAuteur;
    for (auto emprunt : emprunte) {
        Livre livre = emprunt.getlivre();
        if (livre.getauteurlivre() == auteur) {
            empruntesParAuteur.push_back(livre);
        }
    }
    return empruntesParAuteur;
}

map<Auteur, int> Biblio::classerAuteursParLivresEmpruntes() {
  map<Auteur, int> auteurs;
  for (auto emprunt : emprunte) {
    Livre livre = emprunt.getlivre();
    Auteur auteur = livre.getauteurlivre();
    if (auteurs.find(auteur) == auteurs.end()) {
      auteurs[auteur] = 1;
      } 
    else {
      auteurs[auteur]++;
    }
  }
  return auteurs;
}