#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char generateCorrectOption(){
    //ASCII Code: A-65, B-66, C-67, D-68

    srand(time(NULL)); //gera um novo numero

    int num = rand()%(68-65+1)+65;
    char opt = (char)num;

    return opt;
}

int main(){
    char opt = generateCorrectOption();
    printf("%c",opt);

    //forma de uso do validateString:
    //char nome[100];
    // if (validateString("Digite seu nome: ", nome, sizeof(nome)))

    return 0;
}