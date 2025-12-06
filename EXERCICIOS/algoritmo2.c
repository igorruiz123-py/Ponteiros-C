#include <stdio.h>
#include <stdbool.h>

/*
Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o.
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *x, int *y){

    printf("Enter value for x: ");
    if (scanf(" %d", x) == 0){
        FlushBuffer();
        return 0;
    }

    printf("Enter value for y: ");
    if (scanf(" %d", y) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

void DisplayAddrr(int *x, int *y){

    printf("Memory address of variable x: %p \n", &x);
    printf("Memory address of the variable y: %p \n", &y);

    printf("\n");

    if (&x > &y){
        printf("Memory address of variable x is greater than memory address of variable y \n");
    }
    else{
        printf("Memory address of variable y is greater than memory address of variable x \n");
    }
}

int main(){

    while(true){

        int x = 0;
        int y = 0;

        if (PromptAndCheck(&x, &y)){
            DisplayAddrr(&x, &y);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}