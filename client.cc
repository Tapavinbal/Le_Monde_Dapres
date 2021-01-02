#include "client.hh"

size_t Client::i=0;

Client::Client():Personne("Non renseigne","Non renseigne"){
  	id_client=i++;
}

Client::Client(std::string n, std::string p):Personne(n,p){
	id_client=i++;
}
void Client::setNomEtPrenom(std::string n,std::string p){
  	nom=n;
  	prenom=p;
}
