/*
 * MorseSimples.cpp
 * 
 * Uma biblioteca Arduino para usar código morse de uma forma simples com LEDs
 *
 * Criado em 26 de Julho de 2018
 * Por Erick Simões (github: @ErickSimoes | Email: erick.simoes@live.com)
 * 
 * Publicado na Licença GPL-3.0
 */

#include "MorseSimples.h"

#define DELAY_PONTO 75
#define DELAY_TRACO 375
#define DELAY_INTERNO 125

MorseSimples::MorseSimples(int pino) {
	_pino = pino;
	pinMode(_pino, OUTPUT);
}

void MorseSimples::ponto() {
	digitalWrite(_pino, HIGH);
	delay(DELAY_PONTO);
	digitalWrite(_pino, LOW);
	delay(DELAY_INTERNO);
}

void MorseSimples::traco() {
	digitalWrite(_pino, HIGH);
	delay(DELAY_TRACO);
	digitalWrite(_pino, LOW);
	delay(DELAY_INTERNO);
}
