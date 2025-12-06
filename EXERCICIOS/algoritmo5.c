#include <stdio.h>
#include <stdbool.h>

/*
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. 
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(float *arr, int len){

    for (int i = 0; i < len; i++){
        printf("Enter value for arr[%d]:  ", i);
        if (scanf(" %f", &arr[i]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    return 1;
}

void DisplayTask(float *arr, int len){

    for (int i = 0; i < len; i++){
        printf("arr[%d] = %.2f \n", i, arr[i]);
    }

    printf("\n");

    for (int j = 0; j < len; j++){
        printf("arr[%d] = %p \n", j, &arr[j]);
    }
}

int main(){

    while(true){

        float arr[10];
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