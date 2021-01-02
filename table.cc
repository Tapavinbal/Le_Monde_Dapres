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
  	if(etat==0){
      etat=1;
    }else{
      etat=0;
    }
}

void Table::attribuerServeur(Serveur &s){

}

int Table::getCapacite(){
  return capacite;
}

int Table::getId(){
  return id_table;
}

Serveur Table::getServeur(){
  return *serveur;
}

bool Table::getEtat(){
  return etat;
}
