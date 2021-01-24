#pragma once
#include <iostream>
#include <string>
#include <vector>
//#include "table.hh"
#include "personnel.hh"

class Table;
class Serveur : public Personnel{
	public:
		// std::vector<Table> tables;		//Le numéro des tables attitrées
		static std::size_t i;
		//Serveur();
		Serveur(std::string n, std::string p, int h);
		~Serveur();
		std::size_t getId() const {return id_serveur;}
		void sePresenter();
		//void ajouterTable(Table t);
		// int getNbTables(){return nbre_tables;}
		// void augmenterNbTables();
	private:
		std::size_t id_serveur;
		// int nbre_tables=0;
		//int regime;
};
