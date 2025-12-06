#include <stdio.h>
#include <stdbool.h>

/*
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *num1, int *num2){

    printf("Enter a value for num1: ");
    if (scanf(" %d", num1) == 0){
        FlushBuffer();
        return 0;
    }

    printf("Enter a value for num2: ");
    if (scanf(" %d", num2) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    printf("(NUM1) Variable value: %d / Memory address value: %p \n", *num1, &num1);
    printf("(NUM2) Variable value: %d / Memory address value: %p \n", *num2, &num2);

    printf("\n");

    return 1;
}

void DisplayTask(int *num1, int *num2){

    *num1 = *num1 * 2;
    *num2 = *num2 * 2;

    printf("(NUM1) Variable value: %d / Memory address value: %p \n", *num1, &num1);
    printf("(NUM2) Variable value: %d / Memory address value: %p \n", *num2, &num2);

    printf("\n");

    int sum = (*num1 + *num2);

    printf("Sum: %d \n", sum);
}

int main(){

    while(true){

        int num1 = 0;
        int num2 = 0;

        if (PromptAndCheck(&num1, &num2)){
            DisplayTask(&num1, &num2);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}