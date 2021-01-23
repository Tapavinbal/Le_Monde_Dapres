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

void Stock::afficherCarte(){
  std::cout<<"CARTE"<<std::endl;
  for(auto i:carte){
    std::cout<<i.first<<" : "<<i.second<<std::endl;
  }
  std::cout<<std::endl;
}

bool Stock::passerCommande(std::string commande, int nombre){
  if(carte.find(commande)->second>=nombre){
    carte[commande]-=nombre;
    return 1;
  }else{
    if(commande!="Q"){
    std::cout<<"il ne reste plus assez de "<<commande<<" pour passer cette commande"<<std::endl<<std::endl;
  }
    return 0; ////////////////pour dire qu'il y a une erreur, peut etre pas la meilleure façon de faire
  }
}
