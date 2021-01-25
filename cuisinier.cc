#include<iostream>
#include <string>
#include "cuisinier.hh"
#include "table.hh"
using namespace std;

Cuisinier::Cuisinier(string n, string p, int h):Personnel(n,p){
	regime = h;
}

Cuisinier::~Cuisinier(){}

void Cuisinier::sePresenter(){
	srand(time(NULL));
	switch (rand()%4){
		case 0:
			std::cout<<"Voici le chef ! " << getPrenom()<<" "<<getNom()<<" ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;

		case 1:
			std::cout<<getPrenom()<<" "<<getNom()<<", je m'excuse.. j'ai laissé quelque chose sur le feu ! ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;

		case 2:
			std::cout<<getPrenom()<<" "<<getNom()<<", ma spécialité, c'est les frites ! ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;

		case 3:
			std::cout<<getPrenom()<<" "<<getNom()<<", je fais encore la plonge ce soir .. ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;
	}
	for(size_t i = 0; i < 200000000; i++){;} //Pour que time change
}
