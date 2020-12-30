#include<iostream>
#include <string>
#include "personne.hh"

//Classe abstraite
class Client : public Personne{
	public:
		virtual static size_t i;
		Client(string n, string p);
		std::string getNom() const {return nom;}
		std::string getPrenom() const {return prenom;}
	private:
		size_t id;
}