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
#define DELAY_CARACTERE 250

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

void MorseSimples::codificar(String string) {
	string.trim();
	string.toLowerCase();

	for (int pos = 0; pos < string.length(); pos++) {
		switch(string[pos]) {
			case 'a':
				ponto();
				traco();
				break;
			case 'b':
				traco();
				ponto();
				ponto();
				ponto();
				break;
			case 'c':
				traco();
				ponto();
				traco();
				ponto();
				break;
			case 'd':
				traco();
				ponto();
				ponto();
				break;
			case 'e':
				ponto();
				break;
			case 'f':
				ponto();
				ponto();
				traco();
				ponto();
				break;
			case 'g':
				traco();
				traco();
				ponto();
				break;
			case 'h':
				ponto();
				ponto();
				ponto();
				ponto();
				break;
			case 'i':
				ponto();
				ponto();
				break;
			case 'j':
				ponto();
				traco();
				traco();
				traco();
				break;
			case 'k':
				traco();
				ponto();
				traco();
				break;
			case 'l':
				ponto();
				traco();
				ponto();
				ponto();
				break;
			case 'm':
				traco();
				traco();
				break;
			case 'n':
				traco();
				ponto();
				break;
			case 'o':
				traco();
				traco();
				traco();
				break;
			case 'p':
				ponto();
				traco();
				traco();
				ponto();
				break;
			case 'q':
				traco();
				traco();
				ponto();
				traco();
				break;
			case 'r':
				ponto();
				traco();
				ponto();
				break;
			case 's':
				ponto();
				ponto();
				ponto();
				break;
			case 't':
				traco();
				break;
			case 'u':
				ponto();
				ponto();
				traco();
				break;
			case 'v':
				ponto();
				ponto();
				ponto();
				traco();
				break;
			case 'w':
				ponto();
				traco();
				traco();
				break;
			case 'x':
				traco();
				ponto();
				ponto();
				traco();
				break;
			case 'y':
				traco();
				ponto();
				traco();
				traco();
				break;
			case 'z':
				traco();
				traco();
				ponto();
				ponto();
				break;
		}
		delay(DELAY_CARACTERE);
	}
}
