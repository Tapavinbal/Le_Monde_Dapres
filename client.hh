#pragma once
#include<iostream>
#include <string>
#include "personne.hh"

//Classe abstraite
class Client : public Personne{
	public:
		static size_t i;
		Client(string n, string p);
		std::string getNom() const {return nom;}
		std::string getPrenom() const {return prenom;}
		std::size_t getId() const {return id_client;}
	private:
		size_t id_client;
};