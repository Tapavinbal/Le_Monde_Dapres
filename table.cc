#include<iostream>
#include <string>
#include "table.hh"

size_t Table::i = 1;

Table::Table(int c){
  	id_table = i++;
  	etat = 0;
  	capacite = c;
}

Table::~Table(){}

void Table::changerEtat(){
  	if(etat==0){
    	etat=1;
    }else{
    	etat=0;
    }
}

void Table::setEtat(int e){
  	etat=e;
}

std::ostream& operator<<(std::ostream& out, const Table& t){
	out<<"table n°"<< t.id_table << " - " << t.capacite << " places" << " - ";
	if(t.etat==1){
		out<<"table occupée";
	}else{
		out<<"table libre";
	}
	return out;
}