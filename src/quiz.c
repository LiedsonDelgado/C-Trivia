#include"quiz.h"
#include"util.h"

/**
 * @brief Função que imprime o menu principal do projeto
 */
void menu(){
    int option;
    do
    {
        printf("\n----- QUIZ GAME -----\n");
        printf("1 - Jogar\n");
        printf("2 - Adicionar nova pergunta\n");
        printf("3 - Eliminar pergunta\n");
        printf("4 - Mostrar  todas as perguntas\n");
        printf("5 - Mostrar classificacao\n");
        printf("6 - Procurar Jogador\n");
        printf("0 - Sair\n");
        option = validateInt("Digite a tua opcao: ");

        switch (option){
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

            case 0:
                printf("Saindo...\n");
                break;
        
            default:
                printf("ERRO: opcao invalida!\n");
                break;
        }
    } while (option != 0);
    
}