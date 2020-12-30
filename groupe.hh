#pragma once
#include<iostream>
#include <string>
#include <vector>
#include "client.hh"

class Groupe{
	public:
		Groupe()
		ajoutClient(Client c);
	private:
		string arrivee;
		string depart;
		std::vector<Client>c;
};
