#pragma once
#include <iostream>
#include <string.h>
#include "circuito.h"

using namespace std;

class CircuitoUrbano {
	Colecao <Circuito> circuitos;
	int nrCondutor;
	float consumoUrbano;
	float distanciaUrbano;
public:
	CircuitoUrbano(int nrCond, float consumUrb, float distanciaUrb);
	int getCondNr() const;
	float getConsumoUrbano() const;
	float getDistanciaUrbano() const;
};