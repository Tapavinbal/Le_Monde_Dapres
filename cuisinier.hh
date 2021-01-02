#pragma once
#include<iostream>
#include <string>
#include "personnel.hh"

class Cuisinier : public Personnel{
	public:
		static std::size_t i;
		Cuisinier(std::string n, std::string p, int h);
		std::string getNom() {return nom;}
		std::string getPrenom() {return prenom;}
		int getRegime() {return regime;}
		std::size_t getId() const {return id_cuisinier;}
	private:
		std::size_t id_cuisinier;
};
