#include<iostream>
#include <string>
#include "personne.hh"

//Classe abstraite
class Personnel : public Personne{
	public:
		virtual std::int regime; //35h, 39h, mi-temps ? 
	private:
}