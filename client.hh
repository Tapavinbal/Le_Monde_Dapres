#pragma once
#include<iostream>
#include <string>
#include "personne.hh"
#include "table.hh"

class Client : public Personne{
	public:
		static size_t i;
		Client();
		Client(std::string n, std::string p, size_t tailleGroupe);
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		std::size_t getId() {return id_client;}
		void setNomEtPrenom(std::string n,std::string p);
	private:
		size_t id_client;
		size_t nbrePersonnesGp;
		Table* t;
};
