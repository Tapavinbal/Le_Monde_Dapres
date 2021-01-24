#include "serveur.hh"
#include "table.hh"
using namespace std;

size_t Serveur::i = 0;

Serveur::Serveur(string n, string p, int h):Personnel(n,p){
	regime = h;
	id_serveur = i++;
}

Serveur::~Serveur(){}

void Serveur::sePresenter(){
	std::cout<<getPrenom()<<" "<<getNom()<<" - ";
	std::cout<<"contrat : "<<getRegime()<<" h"<<std::endl;
}
