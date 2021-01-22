
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


void Bar::associerServeurTable(Serveur s,Table t){
	s.ajouterTable(t);
	t.attribuerServeur(s);
}

void Bar::associerTableClient(Client *c){
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
	 c->t->setEtat(1);
	 if(table==0){
	   std::cout<<"aucune table libre pour le moment"<<std::endl;
		 std::cout<<std::endl;
	 }else{
	   std::cout<<"Vous pouvez prendre la table : "<<(c->t->getId())<<std::endl;
		 std::cout<<std::endl;
	}
}
