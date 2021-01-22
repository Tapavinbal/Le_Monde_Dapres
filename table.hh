#pragma once
#include<iostream>
#include <string>
#include "serveur.hh"

class Serveur;
class Table{
	public:
		Serveur* serveur;
		static std::size_t i;
		Table();
		Table(int c);
		void changerEtat();
		void attribuerServeur(Serveur &s);
		int getCapacite(){return capacite;}
		int getId(){return id_table;}
		Serveur getServeur();
		bool getEtat(){return etat;}
		void setEtat(int e);
	private:
		std::size_t id_table;
		bool etat; //0 pour libre et 1 pour occupe
		std::size_t capacite;

};
