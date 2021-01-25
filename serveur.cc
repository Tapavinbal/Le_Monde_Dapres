#include "serveur.hh"
#include "table.hh"
using namespace std;

Serveur::Serveur(string n, string p, int h):Personnel(n,p){
	regime = h;
}

Serveur::~Serveur(){}

void Serveur::sePresenter(){
	srand(time(NULL));
	switch (rand()%4){
		case 0:
			std::cout<<"Bonjour, Je suis "<<getPrenom()<<" "<<getNom()<<", pour vous servir ! ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;

		case 1:
			std::cout<<"Qu'est-ce que je vous sers ?! "<<getPrenom()<<" "<<getNom()<<" ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;

		case 2:
			std::cout<<getPrenom()<<" "<<getNom()<<", je prends les pourboires ... ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;

		case 3:
			std::cout<<getPrenom()<<" "<<getNom()<<", Grrr, je devais pas bosser ce soir ... ";
			std::cout<<"(contrat : "<<getRegime()<<" h)"<<std::endl;
			break;
	}
	for(size_t i = 0; i < 200000000; i++){;} //Pour que time change
}
