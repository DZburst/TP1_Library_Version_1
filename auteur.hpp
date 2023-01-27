#ifndef DEF_AUTEUR
#define DEF_AUTEUR
#include <string>

class Auteur {
private:
  int _id;
  std::string _firstName;
  std::string _lastName;
  std::string _birthDate;
public:
        // Constructeur
  Auteur(int id, string firstName, string lastName, string birthDate);
        
        // Méthodes getters
  int getId() ;
  string getFirstName() ;
  string getLastName();
  string getBirthDate() ;
  void setFirstName(std::string f) ;
  void setLastName(std::string l) ;
  void setBirthDate(std::string d) ;
  void setId(int id ) ;
};