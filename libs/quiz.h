/*
-> File Description
-> Ficheiro responsavel por armazenar headers e as assinaturas de funções
*/

#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Estruturas de Dados
//-------------------
typedef char* Question;

//Estrutura que representa a arvore de usuarios/jogadores
typedef struct player{
    char playerName[100];
    int score;
    struct player *left;
    struct player *right;
}Player;

//Estrutura da lista de perguntas
typedef struct questionList{
    Question question; //guarda a struct quiz que contem a pegunta e o ranking do jogador
    char options; //contendo apenas um caracter(ex.:A,B,C,D,etc)
    Question correctAnswer; //resposta correta da pergunta
    struct questionList *next;
}QuestionList;

//Prototipos/Assinatura das Funcoes
//----------------------
void menu();

Player* createPlayerTreeNode(); //cria a raiz da arvore e inicializa a arvore
void addPlayerIntoTree(Player** tree,char playerName[100],int score); //adiciona o no que contem informacoes do jogador na arvore
void removePlayerFromTree(Player** tree,char playerName[100]); //remove o no que contem informacoes do jogador na arvore

QuestionList* createQuestionList(); //cria o primeiro no da lista de questoes
QuestionList* addNewQuestion(QuestionList* qList,QuestionList* question,Question* correctAnswer); //recebe como parametro a lista de questoes e a questao que se quer adicionar nela
void eliminateQuestion(QuestionList* qList,QuestionList* question,Question* correctAnswe); //seleciona o elemento na lista guardar ele numa var auxiliar e ajustar a lista e apagar ele

char* searchPlayer(Player* playerTree);

void showAllTheQuestions(QuestionList* qList);
void showScore(QuestionList* qList);

#endif