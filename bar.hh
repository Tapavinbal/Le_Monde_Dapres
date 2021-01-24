#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include "table.hh"
#include "serveur.hh"
#include "cuisinier.hh"
#include "client.hh"
#include "stock.hh"
#include <time.h>

#include <map>

class Client;
class Bar{
	public:
		std::vector<Table>tables;
		std::vector<Serveur>serveurs;
		std::vector<Cuisinier>cuisiniers;
		std::vector<Client>clients;
		
		~Bar();

		void afficherCuisiniers();
		void afficherServeurs();
		void afficherTables();
		void afficherClients();
		void afficherCommandeClient(Stock* s,Client* client);

		void simulationTables();

		void associerServeurTable(Table *t);
		int associerTableClient(Client *c);
		void associerCuisinierTable(Table* t);
		void associerCommandeClient(Stock *s,Client *client,std::string boisson,int quantite);

		void retirerTableClient(Client *c);
	private:
};
