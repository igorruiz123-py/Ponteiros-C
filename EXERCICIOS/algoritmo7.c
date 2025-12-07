#include <stdio.h>
#include <stdbool.h>

/*
Fac¸a um programa que leia 10 valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *arr, int len){

    for (int i = 0; i < len; i++){
        printf("Enter value for arr[%d]: ", i);
        if (scanf(" %d", &arr[i]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    return 1;
}

void BubbleSort(int *arr, int len){

    for (int j = 0; j < len - 1; j++){
        for (int k = 0; k < len - 1 - j; k++){
            if (arr[k] > arr[k + 1]){
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    for (int l = 0; l < len; l++){
        printf("arr[%d] = %d \n", l, arr[l]);
    }
}

int main(){

    while(true){

        int arr[10];
        int len = sizeof(arr) / sizeof(arr[0]);

        if (PromptAndCheck(arr, len)){
            BubbleSort(arr, len);
            break;
        }
        else{
            printf("Invalid entry! \n");
            continue;
        }


    }
}