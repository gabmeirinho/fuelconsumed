#pragma once
#include <iostream>
#include <string.h>
#include "circuito.h"

using namespace std;

class CircuitoExtraUrbano {
	Colecao <Circuito> circuitos;
	float consumoExtraUrbn;
	float distanciaExtraUrbn;
public:
	CircuitoExtraUrbano(float consumoExtraUrb, float distanciaExtraUrb);
	float getConsumoExtraUrbano() const;
	float getDistanciaExtraUrb() const;
};