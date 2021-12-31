/*
 * Programa: Caixa Acoplada
 * Arquivo: comportaVedacao.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "comportaVedacao.h"

using namespace std;

comportaVedacao::comportaVedacao() {
	cout << "Contrutor da comporta de vedação. " << endl;
}

comportaVedacao::~comportaVedacao() {
	cout << "Destrutor da comporta de vedação. " << endl;
}

float comportaVedacao::abrir() {
	cout << "Comporta de vedação aberta. Água saindo !!! " << endl;
	return 0;
}

void comportaVedacao::fechar() {
	cout << "Comporta de vedação fechada. " << endl;
}
