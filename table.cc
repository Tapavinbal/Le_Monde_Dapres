#include<iostream>
#include <string>
#include "table.hh"

Table::Table(int c){
  numero=i;
  etat=0;
  capacite=c;
}

Table::changerEtat(){
  etat=!etat;
}

Table::attribuerServeur(Serveur s){
  serveur=s;
}
