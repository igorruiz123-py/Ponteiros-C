#include <stdio.h>
#include <stdbool.h>

/*
Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *arr, int len){

    for (int i = 0; i < len; i++){
        printf("Enter value arr[%d]: ", i);
        if (scanf(" %d", &arr[i]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    return 1;
}

void DisplayTask(int *arr, int len){

    for (int j = 0; j < len; j++){
        if (arr[j] % 2 == 0){
            printf("value of arr[%d] = %d / memory address of arr[%d] = %p \n", j, arr[j], j, &arr[j]);
        }
    }
}

int main(){

    while(true){

        int arr[5];
        int ArrLen = sizeof(arr) / sizeof(arr[0]);

        if (PromptAndCheck(arr, ArrLen)){
            DisplayTask(arr, ArrLen);
            break;
        }
        else{
            printf("Invalid entry! \n");
            continue;
        }
    }
}
