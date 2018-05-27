/*
 * Exemplo Simples
 * 
 * Nesse exemplo usamos o pino 13 do Arduino para piscar uma LED.
 * Usamos os métodos ponto() e traco() para transcrever as letras
 * "S" (três pontos seguidos) e "O" (três traços seguidos).
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
  
  // S
  Morse.ponto();
  Morse.ponto();
  Morse.ponto();
  
  // O
  Morse.traco();
  Morse.traco();
  Morse.traco();
  
  // S
  Morse.ponto();
  Morse.ponto();
  Morse.ponto();
  
  delay(5000);
}

