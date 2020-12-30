#include<iostream>
#include <string>
#include "table.hh"

size_t Table::i = 0;

Table::Table(int c){
  	id_table = i++;
  	etat = 0;
  	capacite = c;
}

void Table::changerEtat(){
  	etat =! etat;
}

void Table::attribuerServeur(Serveur &s){
	
}
