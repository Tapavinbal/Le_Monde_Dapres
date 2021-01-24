#pragma once
#include<iostream>
#include <string>
#include <map>

class Stock{
	public:
		Stock();
		~Stock();
		std::map<std::string,float>prix;
		void setCarte(std::string s);
		void setCarte(std::string s, int quantite);
		void afficherCarte();
		void afficherStock();
		int passerCommande(std::string commande,int nombre);
		void setPrix(std::string s, float p);
	private:
		//std::map<std::string,size_t>reserve;
		std::map<std::string,int>carte;

		std::map<std::string,int>::iterator i;
};
