#include <iostream>
#include <string>
#include <map>
#include "table.hh"
#include "serveur.hh"
#include "cuisinier.hh"
#include "client.hh"
#include "stock.hh"
#include "bar.hh"

int main(){
	/////////////////////////créer bar////////////////////
	Bar bar;
	//////////////      initialisation      ////////////////////////////
	std::string a;
	std::string b;
	////////////Initialisation classique////////////////
	Stock stock;
	stock.setCarte("bière");
	stock.setCarte("bière");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("coca");
	stock.setCarte("mojito");

	Cuisinier c0("Potter","Harry",30);
	Cuisinier c1("Daussette","Lory",39);
	Serveur s0("Dupont","Lisa",35);
	Serveur s1("Martin","Pierre",24);
	Table t0(10);
	Table t1(2);
	Table t2(2);
	Table t3(5);
	Client cl0("Nezet", "Daran",2);
	Client cl1("Nezet", "Dorian",5);
	Client cl2;

	cl1.setNomEtPrenom("Michel","Brasil");

	std::cout<<"Entrer nom et prénom client : ";
	std::cin>>a>>b;
	std::cout<<std::endl;

	cl0.setNomEtPrenom(a,b);

	bar.cuisiniers.push_back(c0);
	bar.cuisiniers.push_back(c1);
	bar.serveurs.push_back(s0);
	bar.serveurs.push_back(s1);
	bar.tables.push_back(t0);
	bar.tables.push_back(t1);
	bar.tables.push_back(t2);
	bar.tables.push_back(t3);
	bar.clients.push_back(cl0);
	bar.clients.push_back(cl1);
	bar.clients.push_back(cl2);

	bar.associerServeurTable(s0,t0);
	bar.associerServeurTable(s0,t3);
	bar.associerServeurTable(s1,t1);
	bar.associerServeurTable(s1,t2);

	////////Initialistion par tableau (plus facile pour la suite)/////////////////
	////Pas si facile que ça a faire, a mettre en place quand on pourra changer les infos de tout le monde


	///////////////////// premier affichage bar ///////////////////////////////////
	stock.afficherCarte();
	bar.afficherCuisiniers();
	bar.afficherServeurs();
	bar.afficherTables();
	bar.afficherClients();

	bar.tables[1].changerEtat(); //attention pour faire des modifications il faut modifier directement dans le vecteur de tables

	bar.afficherTables();
	stock.passerCommande("bière",1);
	stock.afficherCarte();
	stock.passerCommande("coca",1);
	stock.afficherCarte();
	stock.passerCommande("bière",5);
	stock.afficherCarte();


	return 0;
}
