#include <iostream>
#include <string.h>
#include "circuito.h"

Circuito::Circuito(int nrConds, int tipCircuito, float consum) {
	tipoCirc = tipCircuito;
	nrCond = nrConds;
	consumoMedio = consum;
}

bool Circuito::operator<(const Circuito& t) const { return nrCond < t.nrCond; }

int Circuito::getcirc() const {
	return tipoCirc;
}
int Circuito::getNrCond() const {
	return nrCond;
}






