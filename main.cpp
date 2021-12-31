/*
 * Programa: Caixa Acoplada
 * Arquivo: main.cpp
 */
#include <iostream>
#include <string>
#include "CaixaAcoplada.h"

using namespace std;

int main() {
	CaixaAcoplada *vaso = new CaixaAcoplada();
	vaso->acionar();
	delete vaso;

	return 0;
}
