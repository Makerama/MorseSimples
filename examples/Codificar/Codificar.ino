/*
 * Codificar
 * 
 * Nesse exemplo usamos o pino 13 do Arduino para piscar uma LED.
 * Transcrever cada letra atravez do método codificar(), que
 * recebe como parâmetro uma String
 * 
 * Circuito:
 * * LED conectado ao pino 13 do Arduino
 * 
 * Criado em 27 de maio de 2018
 * por Erick Simões (github: @ErickSimoes | Email: erick.simoes@live.com)
 * 
 * Makerama
 */

#include <MorseSimples.h>

MorseSimples Morse(13); // A LED no pino 13 vai piscar

void setup() {
  delay(3000);
}

void loop() {
  
  Morse.codificar("Makerama");
  
  delay(5000);
}
