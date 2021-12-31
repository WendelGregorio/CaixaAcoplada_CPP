/*
 * Programa: Caixa Acoplada
 * Arquivo: CaixaAcoplada.cpp
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "CaixaAcoplada.h"

using namespace std;

CaixaAcoplada::CaixaAcoplada() {

	alavanca = new alavancaAcionamento();
	comporta = new comportaVedacao();
	entradaAgua = new valvulaAlimentacao();

	this->nivelAgua = 0;
	this->encherCaixa();
}

CaixaAcoplada::~CaixaAcoplada() {
	this->nivelAgua = 0;

	delete alavanca;
	delete comporta;
	delete entradaAgua;
}

void CaixaAcoplada::encherCaixa() {
	while (this->nivelAgua <= this->nivelMaximo) {
		cout << "N�vel da �gua em: " << this->nivelAgua << endl;
		this->nivelAgua = nivelAgua + entradaAgua->getCapacidadeVazao();
	}
}

void CaixaAcoplada::acionar() {
	alavanca->acionar();
	this->nivelAgua = comporta->abrir();
	cout << "N�vel da �gua em: " << this->nivelAgua << endl;
	cout << "****************************************" << endl;
	comporta->fechar();
	this->encherCaixa();
}
