#include "client.hh"
#include "bar.hh"
#include "table.hh"

size_t Client::i=1;

Client::Client():Personne("Non renseigne","Non renseigne"){
  	id_client=i++;
}




//quand on créé un client on l'associe directement à une table libre si possible il faut donc un tableau des tables libres
Client::Client(std::string n, std::string p, size_t tailleGroupe, Bar b):Personne(n,p){


  id_client=i++; //associer id a client puis augmenter l'id pour le prochain
  nbrePersonnesGp=tailleGroupe;


}


void Client::setNomEtPrenomEtNbre(std::string n,std::string p,int nbre, Bar b){
  	nom=n;
  	prenom=p;
    nbrePersonnesGp=nbre;

  //bool table=0;
  //int i=0;

  id_client=i++;
  //nbrePersonnesGp=tailleGroupe;
  //*bar=b;

  //associer une table à ce groupe
  //while((table==0)){//&& (i<(bar->tables.size()))){
  //    if(bar->tables[i].getCapacite()==nbrePersonnesGp){ ///////////////////////marche pas encore
  //   //   t=bar->tables[i];
  //     table=1;
  //   }else{
  //     i++;
  //   }
  // }
  // std::cout<<bar->tables[i].getId();
}

// void Client::setNomEtPrenomEtNbre(std::string n,std::string p,int nbre){
//   	nom=n;
//   	prenom=p;
//     nbrePersonnesGp=nbre;
// }
