#pragma once
#include <iostream>
#include <string.h>
#include "Colecao.h"
#include "testdrive.h"

using namespace std;

class Circuito{
	Colecao<Circuito> circuitos;
	int nrCond;
	int tipoCirc;
	float consumoMedio;
	
public:
	Circuito(int nrConds, int tipCircuito, float consum);
	int getcirc() const;
	int getNrCond() const;
	bool operator<(const Circuito &cond) const;
};