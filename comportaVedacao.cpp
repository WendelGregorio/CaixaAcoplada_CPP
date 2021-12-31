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
	cout << "Contrutor da comporta de veda��o. " << endl;
}

comportaVedacao::~comportaVedacao() {
	cout << "Destrutor da comporta de veda��o. " << endl;
}

float comportaVedacao::abrir() {
	cout << "Comporta de veda��o aberta. �gua saindo !!! " << endl;
	return 0;
}

void comportaVedacao::fechar() {
	cout << "Comporta de veda��o fechada. " << endl;
}
