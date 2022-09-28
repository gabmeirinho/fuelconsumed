#include "circuitourbano.h"

CircuitoUrbano::CircuitoUrbano(int nrCond, float consumUrb, float distanciaUrb) {
	consumoUrbano = consumUrb;
	distanciaUrbano = distanciaUrb;
	nrCondutor = nrCond;
}

int CircuitoUrbano::getCondNr() const {
	return nrCondutor;
}

float CircuitoUrbano::getConsumoUrbano() const {
	return consumoUrbano;
}

float CircuitoUrbano::getDistanciaUrbano() const {
	return distanciaUrbano;
}