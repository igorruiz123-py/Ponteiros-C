#include <stdio.h>
#include <stdbool.h>

/*
Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela. 
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *num1, int *num2){

    printf("Enter value for num1: ");
    if (scanf(" %d", num1) == 0){
        FlushBuffer();
        return 0;
    }

    printf("Enter value for num2: ");
    if (scanf(" %d", num2) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

void DisplayTask(int *num1, int *num2){

    printf("Value for num1: %d \n", *num1);
    printf("Value for num2: %d \n", *num2);

    printf("\n");

    if (*num1 > *num2){
        printf("num1 is greater than num2 \n");
    }
    else if (*num1 == *num2){
        printf("num1 equals to num2 \n");
    }
    else {
        printf("num2 is greater than num1 \n");
    }
}

int main(){

    while(true){

        int num1 = 0;
        int num2 = 0;

        if (PromptAndCheck(&num1, &num2)){
            DisplayTask(&num1, &num2);
            break;
        }
        else{
            printf("Invalid number! \n");
            continue;
        }
    }
}