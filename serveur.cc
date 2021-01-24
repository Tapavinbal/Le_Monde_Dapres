#include "serveur.hh"
#include "table.hh"
using namespace std;

Serveur::Serveur(string n, string p, int h):Personnel(n,p){
	regime = h;
}

Serveur::~Serveur(){}

void Serveur::sePresenter(){
	std::cout<<getPrenom()<<" "<<getNom()<<" - ";
	std::cout<<"contrat : "<<getRegime()<<" h"<<std::endl;
}
