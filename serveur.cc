#include "serveur.hh"
using namespace std;

size_t Serveur::i = 0;

Serveur::Serveur(string n, string p, int h){
	nom = n;
	prenom = p;
	regime = h;
	id_serveur = i++;
}