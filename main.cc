#include <iostream>
#include <string>
#include <map>
#include "table.hh"
#include "serveur.hh"
#include "cuisinier.hh"
#include "client.hh"
#include "stock.hh"
#include "bar.hh"
#include <SFML/Graphics.hpp>


int main(){
	/////////////////////////créer bar////////////////////
	Bar bar;

	std::string a;
	std::string b;
	int c;

	//std::string a;
//	std::string b;
//	int c;

	////////////Initialisation classique////////////////
	Stock stock;
	stock.setCarte("bière");
	stock.setCarte("bière");
	stock.setCarte("eau gazeuse");
	stock.setCarte("pina colada");
	stock.setCarte("coca");
	stock.setCarte("mojito");
	stock.setCarte("bière");
	stock.setCarte("bière");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("coca");
	stock.setCarte("spritz");
	stock.setCarte("bière");
	stock.setCarte("bière");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("eau");
	stock.setCarte("mojito");
	stock.setCarte("tequilla sunrise");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("ricard");
	stock.setCarte("mojito");
	stock.setCarte("bière");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("ricard");
	stock.setCarte("mojito");
	stock.setCarte("tequilla sunrise");
	stock.setCarte("eau gazeuse");
	stock.setCarte("pina colada");
	stock.setCarte("ricard");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("coca");
	stock.setCarte("spritz");
	stock.setCarte("bière");
	stock.setCarte("bière");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("eau");
	stock.setCarte("mojito");
	stock.setCarte("tequilla sunrise");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("ricard");
	stock.setCarte("mojito");
	stock.setCarte("bière");
	stock.setCarte("mojito");
	stock.setCarte("pina colada");
	stock.setCarte("ricard");
	stock.setCarte("mojito");
	stock.setCarte("tequilla sunrise");
	stock.setCarte("eau gazeuse");
	stock.setCarte("pina colada");
	stock.setCarte("ricard");
	stock.setCarte("mojito");



	Cuisinier c0("Potter","Harry",30);
	Cuisinier c1("Daussette","Lory",39);
	Serveur s0("Dupont","Lisa",35);
	Serveur s1("Martin","Pierre",24);
	Table t1(4);
	Table t0(6);
	Table t2(8);
	Table t3(2);
	Table t4(5);
	Table t5(10);
	Table t6(4);
	Table t7(5);
	Table t8(2);
	Table t9(6);

	//Client cl0("Nezet", "Daran",2,bar);
	//Client cl1("Nezet", "Dorian",5,bar);
//	Client cl2;
	//
	// cl1.setNomEtPrenomEtNbre("Michel","Brasil",10);
	//
	// std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe : ";
	// std::cin>>a>>b>>c;
	// std::cout<<std::endl;
	//
	// cl0.setNomEtPrenomEtNbre(a,b,c,bar);
	//

	bar.cuisiniers.push_back(c0);
	bar.cuisiniers.push_back(c1);
	bar.serveurs.push_back(s0);
	bar.serveurs.push_back(s1);

	bar.tables.push_back(t1);
	bar.tables.push_back(t2);
	bar.tables.push_back(t3);
	bar.tables.push_back(t0);
	bar.tables.push_back(t4);
	bar.tables.push_back(t5);
	bar.tables.push_back(t6);
	bar.tables.push_back(t7);
	bar.tables.push_back(t8);
	bar.tables.push_back(t9);

bar.afficherTables();
	//Client cl0("Nezet", "Daran",2,bar);
	Client cl1;
	Client cl2;
	Client cl3;
	Client cl4;
	Client cl5;
	Client cl6;


	//cl1.setNomEtPrenomEtNbre("Michel","Brasil",10);
	//
	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe (10 max): ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl2.setNomEtPrenomEtNbre(a,b,c,bar);
	bar.associerTableClient(&cl2);
	bar.afficherTables();

	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe (10 max): ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl1.setNomEtPrenomEtNbre(a,b,c,bar);
	bar.associerTableClient(&cl1);
	bar.afficherTables();

	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe (10 max) : ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl3.setNomEtPrenomEtNbre(a,b,c,bar);
	bar.associerTableClient(&cl3);
	bar.afficherTables();

	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe : ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl4.setNomEtPrenomEtNbre(a,b,c,bar);
	bar.associerTableClient(&cl4);
	bar.afficherTables();

	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe : ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl5.setNomEtPrenomEtNbre(a,b,c,bar);
	bar.associerTableClient(&cl5);
	bar.afficherTables();
	bar.afficherTables();

	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe : ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl6.setNomEtPrenomEtNbre(a,b,c,bar);
	bar.associerTableClient(&cl6);
	bar.afficherTables();
	bar.afficherTables();

	//bar.clients.push_back(cl0);
   bar.clients.push_back(cl1);
	 bar.clients.push_back(cl2);
	 bar.clients.push_back(cl3);
	bar.clients.push_back(cl3);
	bar.clients.push_back(cl4);
	bar.clients.push_back(cl5);


	bar.associerServeurTable(s0,t0);
	bar.associerServeurTable(s0,t3);
	bar.associerServeurTable(s1,t1);
	bar.associerServeurTable(s1,t2);

	// ////////Initialistion par tableau (plus facile pour la suite)/////////////////
	// ////Pas si facile que ça a faire, a mettre en place quand on pourra changer les infos de tout le monde
	//
	//
	// ///////////////////// premier affichage bar ///////////////////////////////////
	stock.afficherCarte();
	// bar.afficherCuisiniers();
	// bar.afficherServeurs();
	// bar.afficherTables();
	// bar.afficherClients();

	//bar.tables[1].changerEtat(); //attention pour faire des modifications il faut modifier directement dans le vecteur de tables

	//
	// stock.passerCommande("bière",1);
	// stock.afficherCarte();
	// stock.passerCommande("coca",1);
	// stock.afficherCarte();
	// stock.passerCommande("bière",5);
	// stock.afficherCarte();

	/////partie graphique///////
// sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
// sf::CircleShape shape(100.f);
// shape.setFillCiolor(sf::Color::Green);
//
// while (window.isOpen())
// {
// 		sf::Event event;
// 		while (window.pollEvent(event))
// 		{
// 				if (event.type == sf::Event::Closed)
// 						window.close();
// 		}
//
// 		window.clear();
// 		window.draw(shape);
// 		window.display();
// }



	return 0;
}
