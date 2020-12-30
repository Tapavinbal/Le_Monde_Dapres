#include<iostream>
#include <string>

//Classe abstraite
class Personne{
	public:
		std::string getNom() = 0;
		std::string getPrenom() = 0;
	protected:
		std::string nom;
		std::string prenom;
}