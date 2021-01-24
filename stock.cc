#include<iostream>
#include <string>
#include "stock.hh"
#include <map>

Stock::Stock(){
}

Stock::~Stock(){}

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


int Stock::passerCommande(std::string commande, int nombre){
    if (carte.find(commande) != carte.end() && nombre!=0){
        if(carte.find(commande)->second>=nombre){
            carte[commande]-=nombre;
            return 1; //si la commande a fonctionné
        }else{
            std::cout<<"Il ne nous reste que "<<carte.find(commande)->second<<" "<<commande<<std::endl<<std::endl;
            return 0; //si la commande n'a pas pu être réalisée
        }
    }else{
        if(commande!="Q"){
          if(nombre==0){
            std::cout<<"Veuillez choisir une quantité supérieure à 0"<<std::endl<<std::endl;
            return 0;
          }else{
            std::cout<<"Ce produit n'est pas diponible"<<std::endl<<std::endl;
            return 0;
          }
        }else{
          return 2; //si on a demandé de quitter les commandes
      }
    }
}
