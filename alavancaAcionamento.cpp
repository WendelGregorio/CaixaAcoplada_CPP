/*
 * Programa: Caixa Acoplada
 * Arquivo: alavancaAcionamento.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "alavancaAcionamento.h"

using namespace std;

alavancaAcionamento::alavancaAcionamento() {
	cout << "Construtor da alavanca de acionamento. " << endl;
}

alavancaAcionamento::~alavancaAcionamento() {
	cout << "Destrutor da alavanaca de acionamento. " << endl;
}

void alavancaAcionamento::acionar() {
	cout << "Alavanca de acionamento ativada. " << endl;
}
