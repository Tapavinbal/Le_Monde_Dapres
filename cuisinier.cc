#include "cuisinier.hh"
using namespace std;

size_t Cuisinier::i = 0;

Cuisinier::Cuisinier(string n, string p, int h){
	nom = n;
	prenom = p;
	regime = h;
	id_cuisinier = i++;
}