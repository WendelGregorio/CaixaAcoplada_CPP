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
	cout << "Construtor valvula de alimentação. " << endl;
}

valvulaAlimentacao::~valvulaAlimentacao() {
	cout << "Destrutor da valvula de alimentação. " << endl;
}

float valvulaAlimentacao::getCapacidadeVazao() {
	return this->capacidadeVazao;
}
