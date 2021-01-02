#pragma once
#include<iostream>
#include <string>

//Classe abstraite
class Personne{
	public:
		Personne(std::string n, std::string p);	
		virtual std::string getNom()=0;
		virtual std::string getPrenom()=0;
	protected:
		std::string nom;
		std::string prenom;
};