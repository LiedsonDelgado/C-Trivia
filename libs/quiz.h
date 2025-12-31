/*
-> File Description
-> Ficheiro responsavel por  armazenar headers e as assinaturas de funções
*/

#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Estruturas de Dados
//-------------------
typedef char Question;

//Estrutura que representa a arvore de usuarios
typedef struct player{
    char playerName[100];
    struct player *left;
    struct player *right;
}*Player;

//Estrutura que representa um quiz
typedef struct{
    Question* questions; //String que ira guardar a pergunta
    Player ranking;
}*Quiz;

//Estrutura da lista de perguntas
typedef struct questionList{
    Quiz question; //guarda a struct quiz que contem a pegunta e o ranking do jogador
    char *options;
    char correctAnswer; //Contendo apenas um caracter(ex.:A,B,C,D,etc)
    struct questionList *next;
}*QuestionList;

//Prototipos das Funcoes
//----------------------
void menu();
QuestionList addNewQuestion(QuestionList qList,Question question); //recebe como parametro a lista de questoes e a questao que se quer adicionar nela
void eliminateQuestion(QuestionList qList,Question question);
void showAllTheQuestions(QuestionList qList);
void showScore(Question qList);
char* searchPlayer(Player playerTree);

#endif
