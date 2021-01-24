#include<iostream>
#include <string>
#include "cuisinier.hh"
#include "table.hh"
using namespace std;

size_t Cuisinier::i = 0;

Cuisinier::Cuisinier(string n, string p, int h):Personnel(n,p){
	regime = h;
	id_cuisinier = i++;
}

Cuisinier::~Cuisinier(){}

void Cuisinier::sePresenter(){
	std::cout<<getPrenom()<<" "<<getNom()<<" - ";
	std::cout<<"contrat : "<<getRegime()<<" h"<<std::endl;
}
