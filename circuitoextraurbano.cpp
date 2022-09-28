#include "circuitoextraurbano.h"

CircuitoExtraUrbano::CircuitoExtraUrbano(float consumoExtraUrb, float distanciaExtraUrb) {
	consumoExtraUrbn = consumoExtraUrb;
	distanciaExtraUrbn = distanciaExtraUrb;
}

float CircuitoExtraUrbano::getConsumoExtraUrbano() const{
	return consumoExtraUrbn;
}

float CircuitoExtraUrbano::getDistanciaExtraUrb() const {
	return distanciaExtraUrbn;
}