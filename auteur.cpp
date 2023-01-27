#include "auteur.hpp"
#include <string>
using namespace std;

Auteur::Auteur(int id, string firstName, string lastName, string birthDate) {
  _id = id;
  _firstName = firstName;
  _lastName = lastName;
  _birthDate = birthDate;
}       
int Auteur::getId() {return _id;}
string Auteur::getFirstName() {return _firstName;}
string Auteur::getLastName() {return _lastName;}
string Auteur::getBirthDate() {return _birthDate;}
void Auteur::setFirstName(string p){
   _firstName = p;
}
void Auteur::setLastName(string l){
  _lastName = l ;
}
void Auteur::setBirthDate(string d) {
  _birthDate = d ;
}
void Auteur::setId(int id ) {
  _id = id;
}
friend ostream& operator<<(ostream& os, const Auteur& auteur) {
  os << "ID: " << auteur.getId() << endl;
  os << "Nom: " << auteur.getLastName() << endl;
  os << "Prénom: " << auteur.getFirstName() << endl;
  os << "Date de naissance: " << auteur.getBirthDate() << endl;
  return os;