#pragma once
#include<iostream>
#include <string>
#include <vector>
//#include "table.hh"
#include "personne.hh"


class Table;
class Personnel : public Personne{
	public:
		std::vector<Table> tables;		//Le numéro des tables attitrées
		Personnel(std::string n, std::string p):Personne(n,p){}
		~Personnel();
		virtual void sePresenter() = 0;
		int getRegime(){return regime;}	
		int getNbTables(){return nbre_tables;}
		void ajouterTable(Table t);
		void augmenterNbTables();
	protected:
		int regime; //35h, 39h, mi-temps ?
		int nbre_tables=0;
};
