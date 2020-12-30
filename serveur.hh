#include<iostream>
#include <string>
#include "personnel.hh"

class Serveur : public Personnel{
	public:
		virtual static size_t i;
		Serveur(string n, string p, int h);
		std::string getNom() const {return nom;}
		std::string getPrenom() const {return prenom;}
		std::int getRegime() const {return regime;}
		std::size_t getId() const {return id_serveur;}
	private:
		std::size_t id_serveur;
		std::vector<Table> tables;		//Le numéro des tables attitrées
}