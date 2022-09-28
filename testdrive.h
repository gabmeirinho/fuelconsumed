#pragma once
#include <iostream>
#include "Colecao.h"
#include <string.h>


using namespace std;

class TestDrive {
	Colecao<TestDrive> testdrives;
	int NrCond;
	float percordistancia;
	int tipoCircuit;
	float cCondutor;
	string data;
	string nomeCondutor;
	
public:
	TestDrive(int  ,string , string , int , float , float );
	string getName() const;
	string getDate() const;
	int getnrCond() const;
	float getCCond() const;
	void mostrarTestDrive() const;
	string getCircuito() const;
	int CapacDepos() const;
	float getCMedio() const;
	float getdistanc() const;
	
	bool operator<(const TestDrive &var) const;
};