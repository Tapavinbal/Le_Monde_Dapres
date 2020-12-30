#include<iostream>
#include <string>
#include "personnel.hh"

class Serveur : public Personnel{
	public:
		virtual static size_t i;
	private:
		std::vector<Table> tables;		//Le numéro des tables attitrées
}