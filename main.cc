#include <iostream>
#include <string>
#include "table.hh"
#include "serveur.hh"
#include "cuisinier.hh"
#include "client.hh"

std::vector<Table>tables;
std::vector<Serveur>serveurs;
std::vector<Cuisinier>cuisiniers;

void afficherCuisiniers(){
	for(size_t i=0;i<cuisiniers.size();i++){
		std::cout<<cuisiniers[i].getPrenom()<<" "<<cuisiniers[i].getNom()<<" - ";
		std::cout<<"contrat : "<<cuisiniers[i].getRegime()<<" h"<<std::endl;
	}
	std::cout<<std::endl;
}

void afficherServeurs(){
	for(size_t i=0;i<serveurs.size();i++){
		std::cout<<serveurs[i].getPrenom()<<" "<<serveurs[i].getNom()<<" - ";
		std::cout<<"contrat : "<<serveurs[i].getRegime()<<" h"<<std::endl;
	}
	std::cout<<std::endl;
}

void afficherTables(){
	for(size_t i=0;i<tables.size();i++){
		std::cout<<"table n°"<<tables[i].getId()<<" - ";
		std::cout<<tables[i].getCapacite()<<" places"<<" - ";
		//std::cout<<"serveur : "<<tables[i].getServeur().getPrenom()<<std::endl;       //////////////////probleme fait seg fault
		//<<" "<<tables[i].getServeur().getNom()<<" - "<<std::endl;
		if(tables[i].getEtat()==1){
			std::cout<<"table occupée"<<std::endl;
		}else{
			std::cout<<"table libre"<<std::endl;
		}
	}
	std::cout<<std::endl;
}

void associerServeurTable(Serveur s,Table t){
	s.ajouterTable(t);
	t.attribuerServeur(s);
}


int main(){
	//////////////      initialisation      ////////////////////////////
	std::string a;
	std::string b;

	Cuisinier c0("Potter","Harry",30);
	Cuisinier c1("Daussy","Lorette",20);
	Serveur s0("Dupont","Lisa",35);
	Serveur s1("Martin","Pierre",24);
	Table t0(10);
	Table t1(2);
	Table t2(2);
	Table t3(5);
	Client cl0();
	Client cl1();
	Client cl2();

	cuisiniers.push_back(c0);
	cuisiniers.push_back(c1);
	serveurs.push_back(s0);
	serveurs.push_back(s1);
	tables.push_back(t0);
	tables.push_back(t1);
	tables.push_back(t2);
	tables.push_back(t3);

	associerServeurTable(s0,t0);
	associerServeurTable(s0,t3);
	associerServeurTable(s1,t1);
	associerServeurTable(s1,t2);

	///////////////////// premier affichage bar ///////////////////////////////////::
	afficherCuisiniers();
	afficherServeurs();
	afficherTables();

	tables[1].changerEtat(); //attention pour faire des modifications il faut modifier directement dans le vecteur de yables
	afficherTables();

	std::cout<<"Entrer nom et prénom client : ";
	std::cin>>a>>b;
	//cl0.setNomEtPrenom(a,b); //////////////////marche pas encore

	return 0;
}
