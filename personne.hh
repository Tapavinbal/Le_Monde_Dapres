#pragma once
#include<iostream>
#include <string>

//Classe abstraite
class Personne{
	public:
		Personne(std::string n, std::string p);	
		~Personne();
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		virtual void sePresenter() = 0;
	protected:
		std::string nom;
		std::string prenom;
};