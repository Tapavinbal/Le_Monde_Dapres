#include "client.hh"
#include "bar.hh"
#include "table.hh"

size_t Client::i=0;

Client::Client():Personne("Non renseigne","Non renseigne"){
  	id_client=i++;
}

//quand on créé un client on l'associe directement à une table libre si possible il faut donc un tableau des tables libres
Client::Client(std::string n, std::string p, size_t tailleGroupe):Personne(n,p){
  //bool table=0;
  //int i=0;
  id_client=i++;
  nbrePersonnesGp=tailleGroupe;
  //while(table==0 && i<tables.size()){
  //   if(Bar.tables[i].getCapacite()==tailleGroupe){ ///////////////////////marche pas encore
  //     t=tables[i];
  //     table=1;
  //   }
  //   i++;
  //}
}

void Client::setNomEtPrenom(std::string n,std::string p){
  	nom=n;
  	prenom=p;
}
