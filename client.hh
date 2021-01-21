#pragma once
#include<iostream>
#include <string>
#include "personne.hh"
#include "table.hh"
#include "bar.hh"

class Bar;
class Client : public Personne{
	public:
		static size_t i;
		Table* t;
		Client();
		Client(std::string n, std::string p, size_t tailleGroupe, Bar b);
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		std::size_t getId() {return id_client;}
<<<<<<< HEAD
		int getNbre(){return nbrePersonnesGp;}
		void choisirTable(Bar *b);
		void setNomEtPrenomEtNbre(std::string n,std::string p,int nbre,Bar b);
	private:
		size_t id_client;
		int nbrePersonnesGp;

=======
		void setNomEtPrenomEtNbre(std::string n,std::string p,int nbre);
	private:
		size_t id_client;
		int nbrePersonnesGp;
		Table* t;
>>>>>>> 4e5831d0442b97eea121d1449d7a7353187562c0
		Bar* bar;
};
