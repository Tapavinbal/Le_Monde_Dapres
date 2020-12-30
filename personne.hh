#pragma once
#include<iostream>
#include <string>

//Classe abstraite
class Personne{
	public:
		virtual std::string getNom();
		virtual std::string getPrenom();
	protected:
		std::string nom;
		std::string prenom;
};