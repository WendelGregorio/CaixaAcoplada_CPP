/*
 * Programa: Caixa Acoplada
 * Arquivo: valvulaAlimentacao.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "valvulaAlimentacao.h"

using namespace std;

valvulaAlimentacao::valvulaAlimentacao() {
	cout << "Construtor valvula de alimenta��o. " << endl;
}

valvulaAlimentacao::~valvulaAlimentacao() {
	cout << "Destrutor da valvula de alimenta��o. " << endl;
}

float valvulaAlimentacao::getCapacidadeVazao() {
	return this->capacidadeVazao;
}
