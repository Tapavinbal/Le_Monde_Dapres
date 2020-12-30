#include<iostream>
#include <string>
#include "personne.hh"

//Classe abstraite
class Personnel : public Personne{
	public:
		std::string getNom() = 0;
		std::string getPrenom() = 0;
	protected:
		std::int regime; //35h, 39h, mi-temps ? 
}