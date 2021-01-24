#include "serveur.hh"
#include "table.hh"
using namespace std;

size_t Serveur::i = 0;

Serveur::Serveur(string n, string p, int h):Personnel(n,p){
	regime = h;
	id_serveur = i++;
}

// void Serveur::ajouterTable(Table t){
// 	tables.push_back(t);
// }
//
// void Serveur::augmenterNbTables(){
// 	nbre_tables++;
// }

Serveur::~Serveur(){}

void Serveur::sePresenter(){
	std::cout<<"Voici le serveur "<< getNom() << " " << getPrenom() <<  " (" << getRegime() << ")" << std::endl;
}