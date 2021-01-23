
#include "bar.hh"

void Bar::afficherCuisiniers(){
	for(size_t i=0;i<cuisiniers.size();i++){
		std::cout<<cuisiniers[i].getPrenom()<<" "<<cuisiniers[i].getNom()<<" - ";
		std::cout<<"contrat : "<<cuisiniers[i].getRegime()<<" h"<<std::endl;
	}
	std::cout<<std::endl;
}

void Bar::afficherServeurs(){
	for(size_t i=0;i<serveurs.size();i++){
		std::cout<<serveurs[i].getPrenom()<<" "<<serveurs[i].getNom()<<" - ";
		std::cout<<"contrat : "<<serveurs[i].getRegime()<<" h"<<std::endl;
	}
	std::cout<<std::endl;
}

void Bar::afficherTables(){
	for(size_t i=0;i<tables.size();i++){
		std::cout<<"table n°"<<tables[i].getId()<<" - ";
		std::cout<<tables[i].getCapacite()<<" places"<<" - ";
		//std::cout<<"serveur : "<<tables[i].getServeur().getPrenom()<<std::endl;       //////////////////probleme fait seg fault
		//<<" "<<tables[i].getServeur().getNom()<<" - "<<std::endl;
		if(tables[i].getEtat()==1){
			std::cout<<"table occupée"<<std::endl;
		}else{
			std::cout<<"table libre"<<std::endl;
		}
	}
	std::cout<<std::endl;
}

void Bar::afficherClients(){
	for(size_t i=0;i<clients.size();i++){
		std::cout<<"Client "<<clients[i].getId()<<" : "<<clients[i].getNom()<<" "<<clients[i].getPrenom()<<std::endl;
	}
	std::cout<<std::endl;
}


void Bar::associerServeurTable(Table* t){
	unsigned long int i=0;
	int temp=50;
	int i_serveur=0;
	while( (i<=(serveurs.size())-1)){
		if((serveurs[i].getNbTables())<temp){
			temp=serveurs[i].getNbTables();
			i_serveur=i;
		}
		i++;
}
t->serveur=&(serveurs[i_serveur]);
serveurs[i_serveur].tables.push_back(*t);
serveurs[i_serveur].augmenterNbTables();
//std::cout<<serveurs[i].getNbTables()<<std::endl;
std::cout<<serveurs[i_serveur].getPrenom()<<" est le serveur de la table "<<t->getId()<<std::endl;
std::cout<<std::endl;
}

void Bar::associerCuisinierTable(Table* t){
	unsigned long int i=0;
	int temp=50;
	int i_cuisinier=0;
	while( (i<=(cuisiniers.size())-1)){
		if((cuisiniers[i].getNbTables())<temp){
			temp=cuisiniers[i].getNbTables();
			i_cuisinier=i;
		}
		i++;
}
t->cuisinier=&(cuisiniers[i_cuisinier]);
cuisiniers[i_cuisinier].tables.push_back(*t);
cuisiniers[i_cuisinier].augmenterNbTables();
//std::cout<<serveurs[i].getNbTables()<<std::endl;
std::cout<<cuisiniers[i_cuisinier].getPrenom()<<" est le cuisinier de la table "<<t->getId()<<std::endl;
std::cout<<std::endl;
}

int Bar::associerTableClient(Client *c){
	bool table=0;
	unsigned long int i=0;
	int temp=50;
	//associer une table à ce groupe
	 while( (i<(tables.size()))){
	    if((tables[i].getEtat()==0)){
				if(tables[i].getCapacite()>=c->getNbre()){
					if(((tables[i].getCapacite())-(c->getNbre()))<temp){
	    			c->t=&(tables[i]);
	     			table=1;
						temp=(tables[i].getCapacite())-(c->getNbre());
			}
		}
		i++;
	   }else{
	     i++;
	   }
	 }
	 if(table==0){
	   std::cout<<"aucune table libre pour le moment"<<std::endl;
		 std::cout<<std::endl;
		 return 0;
	 }else{
		 c->t->setEtat(1);
	   std::cout<<"Vous pouvez prendre la table : "<<(c->t->getId())<<std::endl;
		 std::cout<<std::endl;
		 return 1;
	}
}
