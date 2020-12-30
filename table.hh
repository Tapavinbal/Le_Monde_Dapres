#pragma once
#include<iostream>
#include <string>
#include "serveur.hh"

class Table{
	public:
		Serveur serveur;
		Table(int c);
		void changerEtat();
		void attribuerServeur(Serveur s);
	private:
		static int i;
		int numero;
		bool etat; //0 pour libre et 1 pour occupe
		int capacite;
};
