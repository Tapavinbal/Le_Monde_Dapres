#pragma once
#include<iostream>
#include <string>

class Commande{
	public:
		Commande();
		// std::map<std::string,int>boissons;
	private:

		std::map<std::string,int>::iterator i;
		float prix=0;
};
