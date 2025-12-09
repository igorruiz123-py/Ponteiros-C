#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar
o resultado de seus cálculos. Escreva uma função hm que converta minutos em horas-
e-minutos. A função recebe um inteiro t e os endereços de duas variáveis inteiras,
digamos h e m, e atribui valores não negativos a essas variáveis de modo que tenhamos
m < 60 e 60 h + m = t. Escreva também uma função main que use a função hm.

*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *h, int *m){

    if (h == NULL){
        return 0;
    }

    else if (m == NULL){
        return 0;
    }

    printf("Enter number for h less than 60: ");
    if (scanf(" %d", h) == 0 && *h > 60){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    printf("Enter number for m: ");
    if (scanf(" %d", m) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

void hm(int *h, int *m){

    int t = 0;

    t = (*h * 60) + *m;

    printf("Time in hours-minutes: %d \n", t);
}


int main(){

    while(true){

        int h = 0;
        int m = 0;

        if (PromptAndCheck(&h, &m)){
            hm(&h, &m);
            break;
        }
        else{
            printf("Invalid entry! \n");
            continue;;
        }
    }
}