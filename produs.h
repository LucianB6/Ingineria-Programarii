#pragma once
#include <string>
using std::string;
class Produs {
	int id;
	string nume;
	double pret;
	int nr_articole;
	Produs(int id, string nume, double pret, int nr_atricole);
	string getName();
	int getPret();
	double getNr_atricole();

};
