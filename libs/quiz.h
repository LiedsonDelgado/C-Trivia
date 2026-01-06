/*
-> File Description
-> Ficheiro responsavel por  armazenar headers e as assinaturas de funções
*/

#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//arvore de usuarios
typedef struct user{
    char playerName[100];
    int score;
    struct users *left;
    struct users *right;
}User;

//lista de perguntas
typedef struct question{
    char *question;
    char *options;
    char correctAnswer;
    struct question *next;
}Question;

void menu();

#endif