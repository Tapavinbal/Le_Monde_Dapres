#include<iostream>
#include <string>
#include "table.hh"

Table::Table(int c){
  numero=i;
  etat=0;
  capacite=c;
}

void Table::changerEtat(){
  etat=!etat;
}

void Table::attribuerServeur(Serveur s){
  serveur=s;
}
