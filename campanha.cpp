
#include <iostream>
#include "campanha.h"

Campanha::Campanha(){}

TestDrive* Campanha::encontrarCondutor(int nrC) {
	TestDrive c(nrC, "" , "" , 0, 0, 0);
	return testdrives.find(c);
}

void Campanha::mostrarTestDrive(int id) {
	TestDrive* c = encontrarCondutor(id);
	if (c != NULL) {
		c->mostrarTestDrive();
	}
	else
		cout << "O condutor " << id << " nao foi encontrado!!" << endl;
}

bool Campanha::criarCondutor(int nrCond, string nomcondutor, string dat, string cirtipo, float condutorConsum, float percdistanc) {
	int tipoCircuito = 0;
	if (cirtipo == "Urbano") { tipoCircuito = 1; } 
	if (cirtipo == "ExtraUrbano") { tipoCircuito = 2; }
	if (cirtipo == "Misto") { tipoCircuito = 3; }

	TestDrive c(nrCond, nomcondutor, dat, tipoCircuito, condutorConsum, percdistanc);
	Circuito p(  nrCond, tipoCircuito, percdistanc/condutorConsum);
	if (circuitos.insert(p) && testdrives.insert(c)) {
		cout << "O condutor" << nomcondutor << " foi adicionado!!" << endl;
	}
	else {
		cout << "Erro: Nao foi possivel adicionar este condutor" << endl;
		return false;
	}
}

void Campanha::mostrarConsumoCUrbano() {
	int tipoCircuito = 0;
	Colecao <Circuito>::iterator it;
					int contador = 0;
	for (it = circuitos.begin(); it != circuitos.end(); it++) {
		tipoCircuito = it->getcirc();
		if (tipoCircuito == 1) {
			TestDrive* c = encontrarCondutor(it->getNrCond());
			if (c != NULL) {
				mostrarTestDrive(c->getnrCond());
				contador++;
			}
		}
	}
	if (contador == 0) {
		cout << "Nao foi possivel encontrar nenhum condutor no circuito Urbano" << endl;
	}
}

void Campanha::mostrarConsumoCmisto() {
	int contador=0;
		Colecao <Circuito>::iterator iter;
		int tipoCircuito = 0;
		for (iter = circuitos.begin(); iter != circuitos.end(); iter++) {
			tipoCircuito = iter->getcirc();
			if (tipoCircuito == 3) {
				TestDrive* c = encontrarCondutor(iter->getNrCond());
				if (c != NULL) {
					mostrarTestDrive(c->getnrCond());
					contador++;
				}
				else {
					cout << "Nenhum Condutor fez esse circuito" << endl;
				}
			}
		}
		if (contador == 0) {
			cout << "Nao foi possivel encontrar nenhum condutor no circuito Misto" << endl;
		}
	}

void Campanha::mostrarConsumoCExtraurbano(){
	int tipoCircuito = 0;
	Colecao <Circuito>::iterator it;
	int contador = 0;
	for (it = circuitos.begin(); it != circuitos.end(); it++) {
		tipoCircuito = it->getcirc();
		if (tipoCircuito == 2) {
			TestDrive* c = encontrarCondutor(it->getNrCond());
			if (c != NULL) {
				mostrarTestDrive(c->getnrCond());
				contador++;
			}
		}
	}
	if (contador == 0) {
		cout << "Nao foi possivel encontrar nenhum condutor no circuito Extra Urbano" << endl;
	}
}

void Campanha::mostrarTodasTestDrives() {
	Colecao<TestDrive>::iterator it;
	for (it = testdrives.begin(); it != testdrives.end(); it++) {
		cout << "Nome do Condutor: " << it->getName() << endl;
		cout << "Tipo do Circuito: " << it->getCircuito() << endl;
		cout << "Id do Condutor: " << it->getnrCond() << endl; 
		cout << "Data: " << it->getDate() << endl;
		cout << "Capacidade Final do Deposito: " << 100 - it->getCMedio() << endl;
		cout << "Distancia Percorrida: " << it->getdistanc() << endl;
	}
}

