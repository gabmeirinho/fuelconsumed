#pragma once
#include <iostream>
#include <string.h>
#include "Circuito.h"
#include "Colecao.h" 
#include "Testdrive.h" 

using namespace std;

class Campanha {
	Colecao<TestDrive> testdrives;
	Colecao<Circuito> circuitos;
	TestDrive* encontrarCondutor(int);

public:
	Campanha();
	void mostrarConsumoCUrbano();
	void mostrarTodasTestDrives();
	void mostrarConsumoCmisto();
	void mostrarConsumoCExtraurbano();
	void mostrarTestDrive(int);
	bool criarCondutor(int, string , string , string , float , float );
};
