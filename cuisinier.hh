#include<iostream>
#include <string>
#include "personnel.hh"

class Cuisinier : public Personnel{
	public:
		virtual static size_t i;
		Cuisinier(string n, string p, int h);
		std::string getNom() const {return nom;}
		std::string getPrenom() const {return prenom;}
		std::int getRegime() const {return regime;}
		std::size_t getId() const {return id_cuisinier;}
	private:
		std::size_t id_cuisinier;
}