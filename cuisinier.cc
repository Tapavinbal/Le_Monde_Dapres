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
	std::cout<<getPrenom()<<" "<<getNom()<<" - ";
	std::cout<<"contrat : "<<getRegime()<<" h"<<std::endl;
}
