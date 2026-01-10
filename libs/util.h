//funções auxiliares

#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include<stdlib.h>
#include<time.h>

int validateInt(const char *prompt); //valida as entradas do usuario(seja jogador ou administrador de sistema)
char generateCorrectOption();

/*
- valida as entradas de strings  do usuario
- parametros:
    - prompt: label do input
    - destination: local onde a  string sera guardada
    - maxLenght: tamanho maximo da string
*/
int validateString(const char *prompt, char *destination, int maxLenght);

#endif