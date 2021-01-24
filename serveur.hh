#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "personnel.hh"

class Table;
class Serveur : public Personnel{
	public:
		static std::size_t i;
		Serveur(std::string n, std::string p, int h);
		~Serveur();
		void sePresenter(); //pour afficher caracteristiques de chaque serveur au debut
	private:
};
