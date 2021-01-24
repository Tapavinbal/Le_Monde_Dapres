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
		~Client();
		Client(std::string n, std::string p, size_t tailleGroupe, Bar b);
		int getNbre(){return nbrePersonnesGp;}
		void setNomEtPrenomEtNbre(std::string n,std::string p,int nbre,Bar b);
		std::map<std::string,int>boissons; //tout ce que le groupe a commandé
		std::map<std::string,int>::iterator i_boisson;
		void setPrix(float p);
		float getPrix(){return prix;}
		void sePresenter();
	private:
		float prix=0;
		size_t id_client;
		int nbrePersonnesGp;
};
