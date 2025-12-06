#include <stdio.h>
#include <stdbool.h>

/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *x, double *y, char *z){

    printf("Enter integer value: ");
    if (scanf(" %d", x) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    printf("Enter double value: ");
    if (scanf(" %lf", y) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    printf("Enter char value: ");
    if (scanf(" %c", z) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    printf("Value of integer: %d \n", *x);
    printf("Value of double: %lf \n", *y);
    printf("Value of char: %c \n", *z);

    printf("\n");

    return 1;
}

void UpdateValues(int *x, double *y, char *z){

    *x = *x + 10;
    *y = *y * 10;
    *z = 'Z';

    printf("New value of integer: %d \n", *x);
    printf("New value of double: %lf \n", *y);
    printf("New value of char: %c \n", *z);
} 

int main(){

    while(true){

        int num = 0;
        int *pNum = &num;

        double dnum = 0;
        double *pDnum = &dnum;

        char var;
        char *pVar = &var;

        if (PromptAndCheck(pNum, pDnum, pVar)){
            UpdateValues(pNum, pDnum, pVar);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}
