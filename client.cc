#include "client.hh"

size_t Client::i=0;

Client::Client(){
  id_client=i++;
}

void Client::setNomEtPrenom(std::string n,std::string p){
  nom=n;
  prenom=p;
}
