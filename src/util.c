#include"util.h"

int validateString(const char *prompt, char *destination, int maxLenght){
    if(maxLenght < 2) return 0;

    while(1){
        printf("%s", prompt);

        if(fgets(destination, maxLenght, stdin) == NULL){
            if(!feof(stdin)){
                int c;
                while((c = getchar()) != '\n' && c  != EOF);
            }
            return 0;
        }

        int len = (int)strlen(destination);
        if (len > 0 && destination[len - 1] == '\n') {
            destination[len - 1] = '\0';
            len--;
        } else if (len == maxLenght - 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }

        int  onlySpaces = 1;
        int isEmpty = (len == 0);

        for(int i = 0;  i < len && onlySpaces; i++){
            if (!isspace((unsigned char)destination[i])) {
                onlySpaces = 0;
            }
        }

        if(isEmpty || onlySpaces) {
            printf("ERRO:  entrada  vazia ou  invalida. Tente novamente.\n");
        }else {
            return 1;
        }
    }
}

char generateCorrectOption(){
    //ASCII Code: A-65, B-66, C-67, D-68

    srand(time(NULL)); //gera um novo numero

    int num = rand()%(68-65+1)+65;
    char opt = (char)num;

    return opt;
}