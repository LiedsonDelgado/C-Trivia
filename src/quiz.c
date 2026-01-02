#include"quiz.h"

/**
 * @brief Lê e faz validação de inteiros não-negativos da entrada do usuario
 * @param prompt uma string constante com a mensagem do usuario
 * @return valor inteiro digitado e validado do usuario
 */
int validateInt(const char *prompt){
    /*
    valueInput - armazena o valor digitado pelo usuario
    inputResults - armazena o retorno da função scanf (1 = sucesso, 0 = falso)
    */
    int valueInput, inputResults;
    //variavel que armazena cada caratere lido
    // É int porque getchar() retorna um inteiro (incluindo EOF = -1)
    int character;
    do {
        printf("%s", prompt);
        inputResults = scanf("%d", &valueInput);

        //loop usado para consumir carateres restantes no buffer, se houver
        //EOF - End Of File (-1), detecta fim da entrada
        while((character = getchar()) != '\n' && character != EOF);

        //verifica se o retorno do scanf é diferente de 1 E/OU se o valor digitado é negativo
        if (inputResults !=  1 || valueInput <  0){
            printf("ERRO: Entrada invalida, por favor digite um numero inteiro nao negativo\n");
        }
    } while (inputResults != 1 || valueInput < 0);

    return valueInput;
}

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

Player* createPlayerTree(){
    Player* node = (Player*)malloc(sizeof(Player));
    if(node == NULL){
        printf("Erro ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }

    node->left = NULL;
    node->right = NULL;

    return node;
}

Player* addPlayerIntoTree(Player* playerTree,char playerName[100]){
    //(...)
    return playerTree;
}

Player* removePlayerFromTree(Player* playerTree,char playerName[100]){
    //(...)
    return playerTree;
}

QuestionList* createQuestionList(){
    QuestionList* node = (QuestionList*)malloc(sizeof(QuestionList));
    if(node == NULL){
        printf("Erro: ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }

    node->next = NULL;

    return node;
}

QuestionList* addNewQuestion(QuestionList* qList,Quiz* quiz){ //(incompleta por hora!!!)
    if(quiz == NULL){
        printf("Erro: entrada invalida,digite uma pergunta valida!\n");
        exit(EXIT_FAILURE);
    }

    QuestionList* newQList = (QuestionList*)malloc(sizeof(QuestionList));
    if(newQList == NULL){
        printf("Erro: ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }

    newQList->question = quiz->questions;
    //newQList->options = (...)
    //newQList->correctAnswer = (...)
    newQList->next = NULL;

    if(qList == NULL){
        return newQList;
    }

    QuestionList* aux = qList;
    while(aux->next != NULL){
        aux = aux->next;
    }
    aux->next = newQList;

    return qList;
}


QuestionList* eliminateQuestion(QuestionList* qList,Quiz* quiz){

    return qList;
}

void showAllTheQuestions(QuestionList* qList){

}

void showScore(QuestionList* qList){

}
char* searchPlayer(Player* playerTree){

    return->playerTree->playerName;
}
