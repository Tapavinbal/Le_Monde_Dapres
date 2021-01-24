#include "client.hh"
#include "bar.hh"
#include "table.hh"

Client::Client():Personne("Non renseigne","Non renseigne"){
  nbrePersonnesGp=0;
  prix=0;
}

Client::Client(std::string n, std::string p, size_t tailleGroupe, Bar b):Personne(n,p){
    nbrePersonnesGp=tailleGroupe;
    prix=0;
}

Client::~Client(){}

void Client::setNomEtPrenomEtNbre(std::string n,std::string p,int nbre, Bar b){
    nom=n;
  	prenom=p;
    nbrePersonnesGp=nbre;
}

void Client::setPrix(float p){
    prix=p;
}

void Client::sePresenter(){
	std::cout<< getNom() << " " << getPrenom() << " - " << getNbre()<<" personnes - "<< getPrix() <<" €" <<std::endl;
}
