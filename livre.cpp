#include "date.hpp"
#include "livre.hpp"
#include "auteur.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

/*Livre::Livre(string titre, string langue, string genre, Date datedepub, string ISBN, string auteur){
   _titre = titre;
   _langue = langue;
   _genre = genre;
   _datedepub = datedepub;
   _ISBN = ISBN;
   _auteur = auteur;
}*/
Livre::Livre(std::string titre, std::string langue, std::string genre, Date datedepub, std::string ISBN, Auteur auteur){
   _titre = titre;
   _langue = langue;
   _genre = genre;
   _datedepub = datedepub;
   _ISBN = ISBN;
   _aut = auteur;
}
string Livre::gettitre() const { return _titre; }
string Livre::getlangue() const { return _langue; }
string Livre::getgenre() const { return _genre;}
Date Livre::getdatedepub() const { return _datedepub ;} 
string Livre::getISBN() const { return _ISBN;} 
/*string Livre::getauteur() const { return _auteur; }*/
Auteur Livre::getauteurlivre() const { return _aut; }
vector<string> Livre::getid() const { return _listeid;  } 
void Livre::setgenre(string genre){
  _genre = genre;
}
/*void Livre::setauteur( string auteur){
  _auteur = auteur;
}*/
void Livre::setauteurlivre(Auteur newauteur){
  _aut = newauteur ;
  }

void Livre::setlangue(string langue){
  _langue = langue;
}
void Livre::setISBN(string ISBN){
  _ISBN = ISBN;
}
void Livre::setid(vector<string> listeid){
  _listeid = listeid; 
}
void Livre::setdateDepub(Date datedepub) {
 _datedepub = datedepub;
 }
ostream& operator<<(ostream& os, const Livre& livre) {
   os << "langue: " << livre.getlangue() << endl;
   os << "Titre: " << livre.gettitre() << endl;
   os << "Auteur: " << livre.getauteur() << endl;
   os << "Emprunté par: " << livre.getid() << endl;
   os << "genre :" << livre.getgenre() << endl;
   os << "ISBN : " << livre.getISBN() << endl;
   os << "date de publication :" << livre.getdatedepub() << endl;
  return os;
}