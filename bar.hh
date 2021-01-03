#include <iostream>
#include <string>
#include "table.hh"
#include "serveur.hh"
#include "cuisinier.hh"
#include "client.hh"

class Bar{
	public:
		//vecteurs à mettre en private mais j'ai eu la flemme
		std::vector<Table>tables;
		std::vector<Serveur>serveurs;
		std::vector<Cuisinier>cuisiniers;
		std::vector<Client>clients;
		void afficherCuisiniers();
		void afficherServeurs();
		void afficherTables();
		void afficherClients();
		void associerServeurTable(Serveur s,Table t);
	private:
};
