#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços
de duas variáveis inteiras, digamos min e max, e deposite nestas variáveis o valor de um
elemento mínimo e o valor de um elemento máximo do vetor. Escreva também uma
função main que use a função mm.
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}


int PromptAndCheck(int *arr, int const *len){

    if (arr == NULL){
        return 0;
    }

    for (int i = 0; i < *len; i++){
        printf("Enter number: ");
        if (scanf(" %d", &arr[i]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    return 1;
}

void mm(int *arr, int const *len, int *min, int *max){

    *min = 100;
    for (int i = 0; i < *len; i++){
        if (arr[i] < *min){
            *min = arr[i];
        }
    }

    *max = 0;
    for (int j = 0; j < *len; j++){
        if (arr[j] > *max){
            *max = arr[j];
        }
    }

    printf("The max value: %d \n", *max);

    printf("\n");

    printf("The min value: %d \n", *min);
}



int main(){

    while(true){

        int arr[5];
        int const len = sizeof(arr) / sizeof(arr[0]);
        int min;
        int max;

        if (PromptAndCheck(arr, &len)){
            mm(arr, &len, &min, &max);
            break;
        }
        else{
            printf("Invalid entry! \n");
            continue;
        }
    }
}

