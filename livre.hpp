#ifndef DEF_LIVRE
#define DEF_LIVRE
#include <string>
#include <vector>
#include <iostream>
#include "date.hpp"

class Livre {
public:
Livre(std::string titre, std::string langue, std::string genre, Date date, std::string ISBN, std::string auteur);
Livre(std::string titre, std::string langue, std::string genre, Date datedepub, std::string ISBN, Auteur auteur);
 std::string gettitre() const;
 std::string getlangue() const ;
 std::string getgenre() const ;
 Date getdatedepub() const ;
 std::string getauteur() const ;
 Auteur getauteurlivre() const;
 std::string getISBN() const ;
 std::vector<string> getid() const ;
 void settitre(std::string titre);
 void setgenre(std::string genre);
 void setlangue(std::string langue);
 void setdateDepub(Date datedepub); 
 void setISBN(std::string ISBN);
 void setauteur(std::string  a);
 void setauteurlivre(Auteur newauteur);
 void setid(std::vector<std::string> listid);
 friend ostream& operator<<(ostream& os, const Livre& livre);
 
private:
 std::string _titre;
 std::string _langue;
 std::string _genre;
 Date _datedepub;
 std::string _ISBN;
 std::string _auteur;
 Auteur _aut;
 std::vector<std::string> _listeid;
};
#endif