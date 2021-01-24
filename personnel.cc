#include<iostream>
#include <string>
#include "personnel.hh"
#include <vector>
#include "table.hh"

void Personnel::ajouterTable(Table t){
	tables.push_back(t);
}

void Personnel::augmenterNbTables(){
	nbre_tables++;
}

Personnel::~Personnel(){}