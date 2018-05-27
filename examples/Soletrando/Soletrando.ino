/*
 * Soletrando
 * 
 * Nesse exemplo usamos o pino 13 do Arduino para piscar uma LED.
 * Transcrever cada letra atravez de seu método correspondete:
 * a() para a letra "a", b() para a letra "b" e assim sucessivamente
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
  
  // Makerama
  Morse.m();
  Morse.a();
  Morse.k();
  Morse.e();
  Morse.r();
  Morse.a();
  Morse.m();
  Morse.a();
  
  delay(5000);
}
