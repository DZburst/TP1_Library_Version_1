#include "emprunte.hpp"
#include "livre.hpp"
#include "date.hpp"
#include "lecteur.hpp"
#include <string>
using namespace std;

Emprunte::Emprunte(Date d, Lecteur lecteur,Livre livre1){
  _emrunteurid = lecteur.getId() ;
  datedemprunt = d ;
  _ISBN = livre1.getISBN();
  _livre=livre1;
}
string Emprunte::getIDemprunteur(){ return  _emrunteurid; }
Date Emprunte::getDateemprunte(){ return datedemprunt; }
string Emprunte::getISBNemprunte(){ return _ISBN;}
void Emprunte::setIDemprunteur(string id ){
  _emrunteurid = id;
}
void Emprunte::setDateemprunt(Date d){
  datedemprunt = d;
}
void Emprunte::setISBNemprunte(string ISBN){
  _ISBN = ISBN;
}
Livre Emprunte::getlivre()
{
  return _livre;
}