#include <string.h>
#include "testdrive.h"

TestDrive::TestDrive(int nrCondut, string nomecondutor, string dataC, int tipoCircuito, float consumCond, float distanc) {
	NrCond = nrCondut;
	nomeCondutor = nomecondutor;
	data = dataC;
	tipoCircuit = tipoCircuito;
	cCondutor = consumCond;
	percordistancia = distanc;
}

bool TestDrive::operator<(const TestDrive& var) const { return NrCond < var.NrCond; }

int TestDrive::getnrCond() const {
	return NrCond;
}

float TestDrive::getCMedio() const {
	return percordistancia / cCondutor;
}

string TestDrive::getCircuito() const {
	switch (tipoCircuit) {
	case 1: return "Urbano"; break;
	case 2: return "Extra Urbano"; break;
	case 3: return "Misto"; break;
	default: return "Erro!!!"; break;
	}
}

string TestDrive::getDate() const {
	return data;
}

float TestDrive::getdistanc() const {
	return percordistancia;
}

int TestDrive::CapacDepos() const {
	return 100;
}

float TestDrive::getCCond() const {
	return cCondutor;
}

void TestDrive::mostrarTestDrive() const{
	cout << "_________________________________________________________________________" << endl<<endl;
	cout << "Status do Condutor" << endl;
	cout << "Nr Condutor: " << NrCond << endl;
	cout << "Nome Condutor: " << nomeCondutor << endl;
	cout << "Tipo Circuito: " << tipoCircuit << endl;
	cout << "Data: " << data << endl;
	cout << "Distancia Percorrida: " << percordistancia << endl;	
	cout << "Capacidade Final do Deposito: " << 100 - cCondutor << endl;
}

string TestDrive::getName() const {
	return nomeCondutor;
}
