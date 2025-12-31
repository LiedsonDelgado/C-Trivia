/*
- Tema do Quiz: 

- Autores:
    - Leonardo Domingues
    - Liedson Delgado
    - Tiago Dongo
    - 
*/

#include"quiz.h"
#include<stdio.h>

int main(){
    setlocale(LC_ALL,"PORTUGUESE");//Caracteres do Portugues(ex.:acentos,etc)

    int opt;

    do{
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d",&opt);

        switch(opt){
            case 0:
            break;

            case 1:
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 6:
            break;

            default:
            printf("Opção inválida, tente novamente!\n");
            break;
        }
    }while(opt != 0);

    return 0;
}
