#pragma once
#include<iostream>
#include <string>
#include "serveur.hh"

class Serveur;
class Table{
	public:
		static std::size_t i;
		Table();
		Table(int c);
		void changerEtat();
		void attribuerServeur(Serveur &s);
		int getCapacite();
		int getId();
		Serveur getServeur();
		bool getEtat();
	private:
		std::size_t id_table;
		bool etat; //0 pour libre et 1 pour occupe
		std::size_t capacite;
		Serveur* serveur;
};
