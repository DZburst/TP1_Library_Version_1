#ifndef DEF_LECTEUR
#define DEF_LECTEUR
#include <string>
#include <vector>
#include <string>
class Lecteur {
private:
  std::string _id;
  std::string _firstName;
  std::string _lastName;
  std::vector<std::string> _ISBNemprunte ;
public:
        // Constructeur
  Lecteur(string id, string firstName, string lastName) ;
        // Méthodes getters
  std::string getId() ;
  std::string getFirstName();
  std::string getLastName();
  std::vector<std::string> getlivreemprunte();
  void setId(std::string id);
  void setFirstName(std::string f);
  void setLastName(std::string l);
  void setlivre(std::vector<std::string> ISBNemrunte);
        // Méthode pour emprunter un livre
  void emprunte(std::string livreISBN);
};
#endif
