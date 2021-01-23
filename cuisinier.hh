#pragma once
#include<iostream>
#include <string>
#include "personnel.hh"
//#include "table.hh"
#include <vector>

class Table;
class Cuisinier : public Personnel{
	public:
		// std::vector<Table> tables;		//Le numéro des tables attitrées
		static std::size_t i;
		Cuisinier(std::string n, std::string p, int h);
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		int getRegime() {return regime;}
		std::size_t getId() const {return id_cuisinier;}
		//void ajouterTable(Table t);
		//int getNbTables(){return nbre_tables;}
		//void augmenterNbTables();
	private:
		std::size_t id_cuisinier;
		// int nbre_tables=0;
};
