#include <iostream>
#include "livre.hpp"
#include "date.hpp"
#include "auteur.hpp"
#include " Emprunt.hpp"
using namespace std;
int main()
{
	Date Alephpub( 2012,5,4)
	Livre livre("Aleph", " francais" , "spirituel", Alephpub, "005958655" , " Paolo Coelho" )
	std::cout << livre;
	Date datenaissancepaolo(1963,18,10)
	Auteur auteur1(83, "paolo" , "coelho" , datenaissancepaolo);
	Livre livre1("Aleph", " francais" , "spirituel", Alephpub, "005958655" , auteur1 );
	cout << livre1;
	Lecteur yousra("youcy","yousra","bourass")
	Lecteur rayan("rayan","rayan","dz")
	Lecteur asmae ("as","asmae","latifi")
	cout << yousra.getId();
	cout << yousra.getLastName();
	cout << yousra.getFirstName();
	Date emprunte(2022,27,01);
	Emprunte emp(emprunte,yousra,livre);
	Auteur auteur2(84, "guy" , "demaupassant" , datenaissancepaolo);

}