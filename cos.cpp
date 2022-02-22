#include "cos.h"
#include "produs.h"

void Cos::add(Produs p) {
	cumparaturi.add(p);
}

double Cos::suma() {
	for (produs in cumparaturi) {
		suma = suma + produs.getNr_atricole()*produs.getPret();
	}
	return suma;
}



