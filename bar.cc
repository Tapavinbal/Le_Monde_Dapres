#include <map>
#include "bar.hh"
#include "stock.hh"

Bar::~Bar(){}

void Bar::afficherCuisiniers(){
	for(size_t i=0;i<cuisiniers.size();i++){
		cuisiniers[i].sePresenter();
	}
	std::cout<<std::endl;
}

void Bar::afficherServeurs(){
	for(size_t i=0;i<serveurs.size();i++){
		serveurs[i].sePresenter();
	}
	std::cout<<std::endl;
}

void Bar::afficherTables(){
	for(size_t i=0;i<tables.size();i++){
		std::cout<<tables[i]<<std::endl;		//Se fait grâce à l'opérateur <<
	}
	std::cout<<std::endl;
}

//permet de simuler l'occupation du bar
void Bar::simulationTables(){
	srand(time(NULL));
	size_t limite = rand()%20;		//Pour un nombre aléatoire de fois qu'on peut fixer
	size_t j;
	for(size_t i = 0; i < limite; i++){	//on change l'état des tables
		j = rand()%tables.size();
		tables[j].setEtat(1 - tables[j].getEtat());
	}
}

void Bar::afficherClients(){
	for(size_t i=0;i<clients.size();i++){
		clients[i].sePresenter();
	}
	std::cout<<std::endl;
}

//permet de mettre une table en attribut d'un serveur
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
	serveurs[i_serveur].augmenterNbTables(); //augmenter le nbre de tables dont le serveur s'occupe
	std::cout<<serveurs[i_serveur].getPrenom()<<" est le serveur de la table "<<t->getId()<<std::endl;
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
	std::cout<<cuisiniers[i_cuisinier].getPrenom()<<" est le cuisinier de la table "<<t->getId()<<std::endl;
	std::cout<<std::endl;
}

int Bar::associerTableClient(Client *c){
	bool table=0;
	unsigned long int i=0;
	int temp=50;
	//associer une table à ce groupe
	while( (i<(tables.size()))){ //on parcourt toutes les tables
	    if((tables[i].getEtat()==0)){ //si la table est libre
			if(tables[i].getCapacite()>=c->getNbre()){ //si la capcacité de la table est suffisante
				if(((tables[i].getCapacite())-(c->getNbre()))<temp){ //on regarde si cette table est plus adaptée que la dernière table sélectionnée
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
		std::cout<<"Il n'y a pas de place pour le moment, veuillez revenir plus tard."<<std::endl;
		std::cout<<std::endl;
		return 0;
	}else{
		c->t->setEtat(1); //la table est maintenant occupée
	    std::cout<<"Vous pouvez prendre la table n° : "<<(c->t->getId())<<std::endl;
		std::cout<<std::endl;
		return 1;
	}
}

void Bar::retirerTableClient(Client *c){
	c->t->setEtat(0);
	c->t=NULL;
}

void Bar::associerCommandeClient(Stock* s,Client* client,std::string boisson,int quantite){
	//ajouter boisson à commande
	client->boissons[boisson]+=quantite;
	//ajouter prix à addition
	client->setPrix((client->getPrix())+(s->prix[boisson])*quantite);
}

void Bar::afficherCommandeClient(Stock* s,Client* client){
	std::cout<<"VOTRE COMMANDE"<<std::endl;
	for(auto i:client->boissons){
		std::cout<<i.first<<" : "<<i.second<<std::endl;
	}
	std::cout<<std::endl;
	std::cout<<"ADDITION : "<<client->getPrix()<<" €"<<std::endl;
	std::cout<<std::endl;
}
