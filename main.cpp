#include <iostream>
#include "campanha.h"

using namespace std;

int main() {
	
	Campanha campanh;
	//Circuito Urbano = 1
	//Circuito Extra Urbano = 2
	//Circuito Misto = 3

	campanh.criarCondutor(2, "Jonny", "17.5.2020", "ExtraUrbano", 15, 16);
	campanh.criarCondutor(15, "kaka", "24.4.2020", "Urbano", 13, 15);
	campanh.criarCondutor(9, "Alipio", "5.5.2020", "Misto", 23, 19);

	

	cout << "_________________________________________________________________________" << endl;
	cout << "Circuito Extra Urbano" << endl;
	campanh.mostrarConsumoCExtraurbano();
	cout << "_________________________________________________________________________" << endl;
	cout << "Circuito Misto" << endl;
	campanh.mostrarConsumoCmisto();
	cout << "_________________________________________________________________________" << endl;
	cout << "Circuito Urbano" << endl;
	campanh.mostrarConsumoCUrbano();
}