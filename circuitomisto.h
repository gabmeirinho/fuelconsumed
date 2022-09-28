#pragma once
#include <iostream>
#include <string.h>
#include "circuito.h"

using namespace std;

class CircuitoMisto {
	Colecao <Circuito> circuitos;
	float consumoMisto;
	float distanciaMisto;
public:
	CircuitoMisto(float consumoMis, float distanciaMis);
	float getConsumoMisto() const;
	float getDistanciaMisto() const;
};