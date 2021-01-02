#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "table.hh"
#include "personnel.hh"

class Table;
class Serveur : public Personnel{
	public:
		static std::size_t i;
		Serveur();
		Serveur(std::string n, std::string p, int h);
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		int getRegime(){return regime;}
		int getRegime() const {return regime;}
		std::size_t getId() const {return id_serveur;}
		void ajouterTable(Table t);
	private:
		std::size_t id_serveur;
		std::vector<Table> tables;		//Le numéro des tables attitrées
};
