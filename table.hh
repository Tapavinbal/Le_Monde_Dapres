#pragma once
#include<iostream>
#include <string>
#include "serveur.hh"
#include "cuisinier.hh"

class Serveur;
class Cuisinier;
class Table{
	public:
		Serveur* serveur;
		Cuisinier* cuisinier;
		static std::size_t i;
		Table();
		Table(int c);
		~Table();
		void changerEtat();
		void attribuerServeur(Serveur &s);
		int getCapacite(){return capacite;}
		int getId(){return id_table;}
		Serveur getServeur();
		bool getEtat(){return etat;}
		void setEtat(int e);
		friend std::ostream& operator<<(std::ostream&, const Table &);
	private:
		std::size_t id_table;
		bool etat; //0 pour libre et 1 pour occupée
		std::size_t capacite;

};