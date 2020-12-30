#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "personnel.hh"
#include "table.hh"

class Serveur : public Personnel{
	public:
		static size_t i;
		Serveur(std::string n, std::string p, int h);
		std::string getNom() const {return nom;}
		std::string getPrenom() const {return prenom;}
		int getRegime() const {return regime;}
		std::size_t getId() const {return id_serveur;}
		std::vector<Table> tables;		//Le numéro des tables attitrées
	private:
		std::size_t id_serveur;
};