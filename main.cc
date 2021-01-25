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
	Bar bar;

	std::string a;
	std::string b;
	int c;
	int res=0; //1 si clients ont une table
	int i=0;
	std::string sortie=" ";//pour cin
	std::string carte=" ";//pour cin

	//initialisations
	Stock stock;
	stock.setCarte("bière",50);
	stock.setCarte("eau_gazeuse",60);
	stock.setCarte("eau",500);
	stock.setCarte("pina_colada",30);
	stock.setCarte("coca",60);
	stock.setCarte("mojito",50);
	stock.setCarte("spritz",30);
	stock.setCarte("tequilla_sunrise",30);
	stock.setCarte("ricard",10);
	stock.setCarte("frites",45);
	stock.setCarte("planche_de_charcuterie",45);

	stock.setPrix("bière",4);
	stock.setPrix("eau_gazeuse",2.5);
	stock.setPrix("eau",2);
	stock.setPrix("pina_colada",5.5);
	stock.setPrix("coca",3);
	stock.setPrix("mojito",5.5);
	stock.setPrix("spritz",5.5);
	stock.setPrix("tequilla_sunrise",5.5);
	stock.setPrix("ricard",5);
	stock.setPrix("frites",4);
	stock.setPrix("planche_de_charcuterie",8);

	Cuisinier c0("Potter","Harry",24);
	Cuisinier c1("Daussette","Lory",39);
	Cuisinier c2("Macron","Emmanuel",40);
	Cuisinier c3("Martin","Julia",35);
	Serveur s0("Dupont","Lisa",35);
	Serveur s1("Martine","Jules",24);
	Serveur s2("Muni","Lili",35);
	Serveur s3("Samoussa","Pierre",24);
	Serveur s4("Nezet","Darane",24);

	Table t0(6);
	Table t1(4);
	Table t2(8);
	Table t3(2);
	Table t4(5);
	Table t5(10);
	Table t6(4);
	Table t7(5);
	Table t8(2);
	Table t9(2);
	Table t10(6);
	Table t11(4);
	Table t12(8);
	Table t13(2);
	Table t14(5);
	Table t15(10);
	Table t16(4);
	Table t17(5);
	Table t18(2);
	Table t19(10);
	Table t20(6);
	Table t21(2);
	Table t22(8);

	bar.cuisiniers.push_back(c0);
	bar.cuisiniers.push_back(c1);
	bar.cuisiniers.push_back(c2);
	bar.cuisiniers.push_back(c3);
	bar.serveurs.push_back(s0);
	bar.serveurs.push_back(s1);
	bar.serveurs.push_back(s2);
	bar.serveurs.push_back(s3);
	bar.serveurs.push_back(s4);

	bar.tables.push_back(t0);
	bar.tables.push_back(t1);
	bar.tables.push_back(t2);
	bar.tables.push_back(t3);
	bar.tables.push_back(t4);
	bar.tables.push_back(t5);
	bar.tables.push_back(t6);
	bar.tables.push_back(t7);
	bar.tables.push_back(t8);
	bar.tables.push_back(t9);
	bar.tables.push_back(t10);
	bar.tables.push_back(t11);
	bar.tables.push_back(t12);
	bar.tables.push_back(t13);
	bar.tables.push_back(t14);
	bar.tables.push_back(t15);
	bar.tables.push_back(t16);
	bar.tables.push_back(t17);
	bar.tables.push_back(t18);
	bar.tables.push_back(t19);
	bar.tables.push_back(t20);
	bar.tables.push_back(t21);
	bar.tables.push_back(t22);

	Client cl0;
	Client cl1;
	Client cl2;
	Client cl3;
	Client cl4;
	Client cl5;
	Client cl6;
	Client cl7;
	Client cl8;
	Client cl9;

	bar.clients.push_back(cl0);
	bar.clients.push_back(cl1);
	bar.clients.push_back(cl2);
	bar.clients.push_back(cl3);
	bar.clients.push_back(cl4);
	bar.clients.push_back(cl5);
	bar.clients.push_back(cl6);
	bar.clients.push_back(cl7);
	bar.clients.push_back(cl8);
	bar.clients.push_back(cl9);

	//démarrage
	std::system("clear");
	std::system("toilet Bienvenue");
	std::cout<<"BAR LE MONDE D'APRES"<<std::endl<<std::endl;
	std::cout<<"Serveurs qui travaillent aujourd'hui :"<<std::endl;
	bar.afficherServeurs();
	std::cout<<"Cuisiniers qui travaillent aujourd'hui :"<<std::endl;
	bar.afficherCuisiniers();
	std::cout<<"Tapez OK pour commencer le service : ";
	std::cin>>a;
	std::cout<<std::endl;

	//boucle principale
	while(sortie!="Q"){

		std::system("clear");

		sortie=" ";
		carte=" ";

		bar.simulationTables(); //faire une simulation d'occupation du bar
		bar.afficherTables();

		//attribuer une table à un nv groupe
		do{
			std::cout<<"Entrez votre nom, votre prénom et le nombre de personne (10 max) : ";
			std::cin>>a>>b>>c;
			std::cout<<std::endl;
			bar.clients[i].setNomEtPrenomEtNbre(a,b,c,bar);
			res=bar.associerTableClient(&(bar.clients[i]));
			if (res){ //si les clients ont une table
				bar.associerServeurTable((bar.clients[i].t));
				bar.associerCuisinierTable((bar.clients[i].t));
				bar.afficherTables();
			}
		}while(!res); //tant qu'on n'a pas un groupe qui a obtenu une table libre

		do{
			std::cout<<"Tapez OK quand vous êtes installés pour accéder à notre carte : ";
			std::cin>>carte;
			std::cout<<std::endl;
		}while(carte!="OK");
		std::system("clear");

		//passer toutes les commandes de ce groupe
		while(a!="Q"){
			stock.afficherCarte();
			bar.afficherCommandeClient(&stock,&(bar.clients[i]));
			std::cout<<"Passez une commande (exemple : 'coca 6') puis faites Entrée. Quand vous avez passez toutes vos commandes et que vous voulez payer faites 'Q 0': ";
			std::cin>>a>>b;
			std::cout<<std::endl;
 			int temp = std::stoi(b); //convertir string en int
			int res=stock.passerCommande(a,temp);
			if(res==1){ //la commande a été passée
				bar.associerCommandeClient(&stock,&(bar.clients[i]),a,temp);
			}else if(res==0){ //il y a eu un problème
				std::cout<<"Tapez OK : ";
				std::cin>>a;
				std::cout<<std::endl;
			}
			std::system("clear"); //effacer le terminal
		}

		//payement de ce groupe
		std::cout<<"Vous devez payer : "<<bar.clients[i].getPrix()<<" €"<<std::endl;
		std::cout<<std::endl;
		while(sortie!="OK" && sortie!="ok" && sortie!="Ok"){
			std::cout<<"Tapez OK quand le payement a été effectué : ";
			std::cin>>sortie;
		}
		std::cout<<std::endl;
		bar.retirerTableClient(&(bar.clients[i]));
		i++; //pour passer au 2eme client du tableau

		//choisir si un autre groupe est accueilli ou si le bar ferme
		do {
			std::cout<<"Tapez C pour installer un nouveau groupe ou Q si la soirée est terminée : ";
			std::cin>>sortie;
		}while(sortie!="C" && sortie!="Q");
		std::cout<<std::endl;
	}

	//à la fin de la soirée on affiche les clients ayant utilisé cette tablette et le stock restant
	std::system("clear");
	std::cout<<"RESUME DE LA SOIREE : "<<std::endl<<std::endl;
	std::cout<<"CLIENTS : "<<std::endl;
	bar.afficherClients();
	std::cout<<std::endl;
	std::cout<<"STOCK : "<<std::endl;
	stock.afficherStock();

	return 0;
}
