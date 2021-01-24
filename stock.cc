#include<iostream>
#include <string>
#include "stock.hh"
#include <map>

Stock::Stock(){
}

void Stock::setCarte(std::string s){
  carte[s]+=1;
}

void Stock::setCarte(std::string s, int quantite){
  carte[s]+=quantite;
}

void Stock::setPrix(std::string s, float p){
  prix[s]=p;
}

void Stock::afficherStock(){
  for(auto i:carte){
    std::cout<<i.first<<" : "<<i.second<<std::endl;
  }
  std::cout<<std::endl;
}

void Stock::afficherCarte(){
  std::cout<<"CARTE"<<std::endl;
for(auto i:prix){
  std::cout<<i.first<<" : "<<i.second<<" € "<<std::endl;
}
std::cout<<std::endl;
}


bool Stock::passerCommande(std::string commande, int nombre){
  if (carte.find(commande) != carte.end() ){
  if(carte.find(commande)->second>=nombre){
    carte[commande]-=nombre;
    return 1;
  }else{

    std::cout<<"cette boisson n'est pas diponible"<<std::endl<<std::endl;

    return 0; ////////////////pour dire qu'il y a une erreur, peut etre pas la meilleure façon de faire
  }
}else{
  if(commande!="Q"){
  std::cout<<"cette boisson n'est pas diponible"<<std::endl<<std::endl;
}
  return 0;
}
}
