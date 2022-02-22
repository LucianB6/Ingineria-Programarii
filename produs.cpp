#include "produs.h"
Produs::Produs(int id, string nume, double pret, int nr_articole) {
	id = id;
	nume = nume;
	pret = pret;
	nr_articole = nr_articole;
}
string Produs::getName() {
	return nume;
}
int Produs::getPret() {
	return pret;
}
double Produs::getNr_atricole() {
	return nr_articole;
}