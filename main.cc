#include <iostream>
#include <string>
#include <map>
#include "table.hh"
#include "serveur.hh"
#include "cuisinier.hh"
#include "client.hh"
#include "stock.hh"
#include "bar.hh"
#include "commande.hh"
#include <SFML/Graphics.hpp>


int main(){
	/////////////////////////créer bar////////////////////
	Bar bar;

	std::string a;
	std::string b;
	int c;

	////////////Initialisation classique////////////////
	Stock stock;
	stock.setCarte("bière",50);
	stock.setCarte("eau_gazeuse",60);
	stock.setCarte("eau",500);
	stock.setCarte("pina_colada",30);
	stock.setCarte("coca",60);
	stock.setCarte("mojito",30);
	stock.setCarte("spritz",30);
	stock.setCarte("tequilla_sunrise",30);
	stock.setCarte("ricard",10);

	stock.setPrix("bière",4);
	stock.setPrix("eau_gazeuse",2.5);
	stock.setPrix("eau",2);
	stock.setPrix("pina_colada",5.5);
	stock.setPrix("coca",3);
	stock.setPrix("mojito",5.5);
	stock.setPrix("spritz",5.5);
	stock.setPrix("tequilla_sunrise",5.5);
	stock.setPrix("ricard",5);


	Cuisinier c0("Potter","Harry",30);
	Cuisinier c1("Daussette","Lory",39);
	Serveur s0("Dupont","Lisa",35);
	Serveur s1("Martine","Jules",24);
	Serveur s2("Muni","Lili",35);
	Serveur s3("Samoussa","Pierre",24);
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



	bar.cuisiniers.push_back(c0);
	bar.cuisiniers.push_back(c1);
	bar.serveurs.push_back(s0);
	bar.serveurs.push_back(s1);
	bar.serveurs.push_back(s2);
//	bar.serveurs.push_back(s3);

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

while(1){
	//cl1.setNomEtPrenomEtNbre("Michel","Brasil",10);
	//

	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe (10 max): ";
	std::cin>>a>>b>>c;
	std::cout<<std::endl;
	cl2.setNomEtPrenomEtNbre(a,b,c,bar);
	int res=bar.associerTableClient(&cl2);
	if (res){ //si les clients ont une table
		bar.associerServeurTable((cl2.t));
		bar.associerCuisinierTable((cl2.t));
		bar.afficherTables();
	}

// 	std::cout<<"Entrer nom et prénom client et nombre de personnes du groupe (10 max): ";
// 	std::cin>>a>>b>>c;
// 	std::cout<<std::endl;
// 	cl1.setNomEtPrenomEtNbre(a,b,c,bar);
// 	res=bar.associerTableClient(&cl1);
// 	if (res){ //si les clients ont une table
// 	bar.associerServeurTable((cl1.t));
// 	bar.associerCuisinierTable((cl1.t));
// 	bar.afficherTables();
// }
//


	//bar.clients.push_back(cl0);
  	bar.clients.push_back(cl1);
	bar.clients.push_back(cl2);
	bar.clients.push_back(cl3);
	bar.clients.push_back(cl3);
	bar.clients.push_back(cl4);
	bar.clients.push_back(cl5);



	// bar.associerServeurTable(s0,t3);
	// bar.associerServeurTable(s1,t1);
	// bar.associerServeurTable(s1,t2);

	// ////////Initialistion par tableau (plus facile pour la suite)/////////////////
	// ////Pas si facile que ça a faire, a mettre en place quand on pourra changer les infos de tout le monde
	//
	//
	// ///////////////////// premier affichage bar ///////////////////////////////////
	stock.afficherCarte();

	while(a!="Q"){
	std::cout<<"Entrer commande (une boisson et quantité) ou Q et une quantité pour terminer : ";
	std::cin>>a>>b;
	std::cout<<std::endl;
 	int i = std::stoi(b);
	bool res=stock.passerCommande(a,i);
	stock.afficherCarte();
	if(res){
	bar.associerCommandeClient(&stock,&cl2,a,i);
}
}
std::cout<<std::endl;
std::cout<<"VOUS DEVEZ PAYER : "<<cl2.getPrix()<<" €"<<std::endl;
std::cout<<std::endl;
while(a!="OK"){
std::cout<<"Tapez OK quand le payement a été effectué : ";
std::cin>>a;
}
std::cout<<std::endl;
std::cout<<std::endl;
std::cout<<std::endl;
std::cout<<std::endl;
std::cout<<std::endl;
std::cout<<std::endl;

}


	// bar.afficherCuisiniers();
	// bar.afficherServeurs();
	// bar.afficherTables();
	// bar.afficherClients();

	//bar.tables[1].changerEtat(); //attention pour faire des modifications il faut modifier directement dans le vecteur de tables




	/////partie graphique///////
// sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
// sf::CircleShape shape(100.f);
// shape.setFillCtiolor(sf::Color::Green);
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
