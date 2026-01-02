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

//Estrutura que representa a arvore de usuarios
typedef struct player{
    char playerName[100];
    struct player *left;
    struct player *right;
}Player;

//Estrutura que representa um quiz
typedef struct{
    Question questions; //ira guardar a string que contem pergunta
    Player ranking;
}Quiz;

//Estrutura da lista de perguntas
typedef struct questionList{
    Quiz question; //guarda a struct quiz que contem a pegunta e o ranking do jogador
    char* options;
    char correctAnswer; //contendo apenas um caracter(ex.:A,B,C,D,etc)
    struct questionList *next;
}QuestionList;

//Prototipos das Funcoes
//----------------------
void menu();
int validateInt(const char *prompt); //valida as entradas do usuario(seja jogador ou administrador de sistema)
Player* createPlayerTree(); //cria a raiz da arvore e inicializa a arvore
Player* addPlayerIntoTree(Player* playerTree,char playerName[100]); //adiciona o no que contem informacoes do jogador na arvore
Player* removePlayerFromTree(Player* playerTree,char playerName[100]); //remove o no que contem informacoes do jogador na arvore
QuestionList* createQuestionList(); //cria o primeiro no da lista de questoes
QuestionList* addNewQuestion(QuestionList* qList,Quiz* quiz); //recebe como parametro a lista de questoes e a questao que se quer adicionar nela
QuestionList* eliminateQuestion(QuestionList* qList,Quiz* quiz); //seleciona o elemento na lista guardar ele numa var auxiliar e ajustar a lista e apagar ele
void showAllTheQuestions(QuestionList* qList);
void showScore(QuestionList* qList);
char* searchPlayer(Player* playerTree);

#endif
