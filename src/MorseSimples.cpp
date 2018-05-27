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

void MorseSimples::a() {
	ponto();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::b() {
	traco();
	ponto();
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::c() {
	traco();
	ponto();
	traco();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::d() {
	traco();
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::e() {
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::f() {
	ponto();
	ponto();
	traco();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::g() {
	traco();
	traco();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::h() {
	ponto();
	ponto();
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::i() {
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::j() {
	ponto();
	traco();
	traco();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::k() {
	traco();
	ponto();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::l() {
	ponto();
	traco();
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::m() {
	traco();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::n() {
	traco();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::o() {
	traco();
	traco();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::p() {
	ponto();
	traco();
	traco();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::q() {
	traco();
	traco();
	ponto();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::r() {
	ponto();
	traco();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::s() {
	ponto();
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}

void MorseSimples::t() {
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::u() {
	ponto();
	ponto();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::v() {
	ponto();
	ponto();
	ponto();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::w() {
	ponto();
	traco();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::x() {
	traco();
	ponto();
	ponto();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::y() {
	traco();
	ponto();
	traco();
	traco();
	delay(DELAY_CARACTERE);
}

void MorseSimples::z() {
	traco();
	traco();
	ponto();
	ponto();
	delay(DELAY_CARACTERE);
}
