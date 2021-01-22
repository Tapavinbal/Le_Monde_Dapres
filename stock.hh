#pragma once
#include<iostream>
#include <string>
#include <map>

class Stock{
	public:
		Stock();
		void setCarte(std::string s);
		void setCarte(std::string s, int quantite);
		void afficherCarte();
		bool passerCommande(std::string commande,int nombre);
	private:
		//std::map<std::string,size_t>reserve;
		std::map<std::string,int>carte;
		std::map<std::string,int>::iterator i;
};
