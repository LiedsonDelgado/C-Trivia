/*
-> File Description
-> Ficheiro responsavel por armazenar a lógica das funções
*/

#include"quiz.h"
#include"util.h"

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
            printf("ERRO: Entrada invalida, por favor digite um número inteiro não negativo!\n");
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
        printf("5 - Mostrar classificação\n");
        printf("6 - Procurar jogador\n");
        printf("0 - Sair\n");
        option = validateInt("Digite a sua opção: ");

        switch (option){
            case 0:
            printf("Saindo...\n");
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
            printf("ERRO: Opção inválida, tente novamente!\n");
            break;
        }
    } while (option != 0);
}

//ESTA TERMINADO & FUNCIONANDO
Player* createPlayerTreeNode(){
    Player* node = (Player*)malloc(sizeof(Player));
    if(node == NULL){
        printf("Erro ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }

    strcpy(node->playerName,"\0");
    node->score = 0;
    node->left = NULL;
    node->right = NULL;

    return node;
}

//ESTA TERMINADO & FUNCIONANDO
void addPlayerIntoTree(Player** tree,char playerName[100],int score){
    Player* node = createPlayerTreeNode();

    strcpy(node->playerName,playerName);
    node->score = score;

    if(*tree == NULL){
        *tree = node;
        return;
    }

    Player* current = *tree;
    Player* father = NULL;

    while(current != NULL){
        father = current;
        if(strcmp(node->playerName,current->playerName) < 0){
            current = current->left;
        }else{
            current = current->right;
        }
    }

    if(strcmp(father->playerName,playerName) < 0){
        father->right = node;
    }else{
        father->left = node;
    }
}

void removePlayerFromTree(Player* playerTree,char playerName[100]){
    //(...)
}

QuestionList* createQuestionList(){
    QuestionList* node = (QuestionList*)malloc(sizeof(QuestionList));
    if(node == NULL){
        printf("Erro: ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }

    strcpy(node->question,"\0");
    strcpy(node->correctAnswer,"\0");
    node->next = NULL;

    return node;
}

QuestionList* addNewQuestion(QuestionList* qList,QuestionList* question,Question* correctAnswer){
        if(qList = NULL){
            qList = createQuestionList();
        }

        if(question == NULL){
            printf("Erro: entrada invalida,digite uma pergunta valida!\n");
            exit(EXIT_FAILURE);
        }

        if(correctAnswer == NULL){
            printf("Erro: entrada invalida,digite uma resposta valida!\n");
            exit(EXIT_FAILURE);
        }

    QuestionList* newQList = (QuestionList*)malloc(sizeof(QuestionList));
    if(newQList == NULL){
        printf("Erro: ao alocar memoria!\n");
        exit(EXIT_FAILURE);
    }

    newQList->options = generateCorrectOption();
    strcpy(newQList->correctAnswer,correctAnswer);
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


void* eliminateQuestion(QuestionList* qList,Question* quiz){

    return qList;
}

void showAllTheQuestions(QuestionList* qList){

}

void showScore(QuestionList* qList){

}
char* searchPlayer(Player* playerTree){

    return->playerTree->playerName;
}