#pragma once
#include<iostream>
#include <string>
#include "personne.hh"
#include "table.hh"
#include "bar.hh"

class Bar;
class Client : public Personne{
	public:
		Table* t;
		static size_t i;
		Client();
		Client(std::string n, std::string p, size_t tailleGroupe, Bar b);
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		std::size_t getId() {return id_client;}
		int getNbre(){return nbrePersonnesGp;}	
		void setNomEtPrenomEtNbre(std::string n,std::string p,int nbre,Bar b);
	private:
		size_t id_client;
		int nbrePersonnesGp;
		//std::vector
		Bar* bar;
};
