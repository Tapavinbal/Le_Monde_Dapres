#pragma once
#include<iostream>
#include <string>
#include "personne.hh"

//Classe abstraite
class Personnel : public Personne{
	public:
		Personnel(std::string n, std::string p):Personne(n,p){}
		virtual std::string getNom()=0;
		virtual std::string getPrenom()=0;
		virtual int getRegime()=0;
	protected:
		int regime; //35h, 39h, mi-temps ?
};
