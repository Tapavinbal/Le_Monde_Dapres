#include "client.hh"
#include "bar.hh"
#include "table.hh"

size_t Client::i=1;

Client::Client():Personne("Non renseigne","Non renseigne"){
  id_client=i++;
  nbrePersonnesGp=0;
  prix=0;
}

Client::Client(std::string n, std::string p, size_t tailleGroupe, Bar b):Personne(n,p){
    id_client=i++; //associer id a client puis augmenter l'id pour le prochain
    nbrePersonnesGp=tailleGroupe;
    prix=0;
}

Client::~Client(){}

void Client::setNomEtPrenomEtNbre(std::string n,std::string p,int nbre, Bar b){
    nom=n;
  	prenom=p;
    nbrePersonnesGp=nbre;
    id_client=i++;
}

void Client::setPrix(float p){
    prix=p;
}

void Client::sePresenter(){
	std::cout<< getNom() << " " << getPrenom() << " - " << getNbre()<<" personnes - "<< getPrix() <<" €" <<std::endl;
}
