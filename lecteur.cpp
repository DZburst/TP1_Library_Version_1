#include "lecteur.hpp"
#include <vector>
#include <string>

using namespace std;

Lecteur::Lecteur(string id, string firstName, string lastName) {
 _id = id;
 _firstName = firstName;
 _lastName = lastName;
}
string Lecteur::getId() {
   return _id;
}
void Lecteur::emprunte(std::string livreISBN) {
    _ISBNemprunte.push_back(livreISBN);
}
string Lecteur::getFirstName() {
    return _firstName;
}
string Lecteur::getLastName() {
    return _lastName;
}
vector<string> Lecteur::getlivreemprunte(){
   return _ISBNemprunte ;
} 
void Lecteur::setId(string id){
  _id = id ;
}
void Lecteur::setLastName(string l){
  _lastName = l ;
}
void Lecteur::setFirstName(string f){
  _firstName = f;
}
void Lecteur::setlivre(vector<string> ISBNemrunte){
 _ISBNemprunte = ISBNemrunte ; 
}
