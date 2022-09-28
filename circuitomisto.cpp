#include "circuitomisto.h"

CircuitoMisto::CircuitoMisto(float consumoMis, float distanciaMis) {
	consumoMisto = consumoMis;
	distanciaMisto = distanciaMis;
}

float CircuitoMisto::getConsumoMisto() const {
	return consumoMisto;
}

float CircuitoMisto::getDistanciaMisto() const {
	return distanciaMisto;
}