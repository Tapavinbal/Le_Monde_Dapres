#include "client.hh"
#include "bar.hh"
#include "table.hh"

size_t Client::i=1;

Client::Client():Personne("Non renseigne","Non renseigne"){
  	id_client=i++;
}


void Client::choisirTable(Bar *b){
  // bool table=0;
  // unsigned long int i=0;
  // //associer une table à ce groupe
  //  while((table==0) && (i<(b->tables.size()))){
  //     if(b->tables[i].getCapacite()==nbrePersonnesGp){ ///////////////////////marche pas encore
  //     //t= b.tables[i];
  //      table=1;
  //    }else{
  //      i++;
  //    }
  //  }
  //  if(table==0){
  //    std::cout<<"aucune table libre pour le moment"<<std::endl;
  //  }else{
  //    std::cout<<"Vous pouvez prendre la table : "<<b->tables[i].getId()<<std::endl;
  //    t=b->tables[0];
  // }
}

//quand on créé un client on l'associe directement à une table libre si possible il faut donc un tableau des tables libres
Client::Client(std::string n, std::string p, size_t tailleGroupe, Bar b):Personne(n,p){


  id_client=i++; //associer id a client puis augmenter l'id pour le prochain
  nbrePersonnesGp=tailleGroupe;
  choisirTable(&b);

}


void Client::setNomEtPrenomEtNbre(std::string n,std::string p,int nbre, Bar b){
  	nom=n;
  	prenom=p;
    nbrePersonnesGp=nbre;
    choisirTable(&b);
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
