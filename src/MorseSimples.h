/*
 * MorseSimples.h
 * 
 * Uma biblioteca Arduino para usar código morse de uma forma simples com LEDs
 *
 * Criado em 26 de Julho de 2018
 * Por Erick Simões (github: @ErickSimoes | Email: erick.simoes@live.com)
 * 
 * Publicado na Licença GPL-3.0
 */

#ifndef MORSESIMPLES_H
#define MORSESIMPLES_H

#if ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class MorseSimples {
	public:
			MorseSimples(int pino);
			void ponto();
			void traco();

			void codificar(String string);
	private:
			int _pino;
};

#endif
