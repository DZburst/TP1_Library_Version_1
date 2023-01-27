#ifndef DEF_EMPRUNTE
#define DEF_EMPRUNTE
#include "livre.hpp"
#include "date.hpp"
#include "lecteur.hpp"
#include <string>
#include <vector>
class Emprunte{
private:
  std::string _emrunteurid ;
  Date datedemprunt ;
  std::string _ISBN;
  Livre _livre;
public:
  Emprunte(Date d, Lecteur lecteur,Livre livre1);
  std::string getIDemprunteur();
  Date getDateemprunte();
  std::string getISBNemprunte();
  void setIDemprunteur(string id);
  void setDateemprunt(Date d);
  void setISBNemprunte(string ISBN);
  Livre getlivre();
};
#endif