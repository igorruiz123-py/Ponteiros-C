#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Função malloc para vetores dinâmicos

// O que é malloc?
/*
Malloc (short for memory allocation) é uma função da bibliotéca stdlib.h que é usada para alocação dinâmica de memória, 
isso significa que a função pede ao sistema operacional para reservar um bloco de endereço na memória para um dado que vai
ocupar ele durante a execução do programa
*/

// O que é um vetor dinâmico?
/*
Vetor cujo o tamanho só é conhecido durante a execução do programa
*/

// Função para limpar o buffer
void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

// Função para receber entrada de dados e validar dados
int CheckData(int *num){

    // Entrada de dados pelo usuário
    printf("Enter the number of the elements that will be used for the array: ");
    // Verificação caso o usuário entre um valor que não seja digito
    if (scanf("%d", num) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

// Função para alocar espaço na memória e criar vetor dinâmico
void CreateArray(int *num){

    // Criação do vetor dinâmico e alocação de espaço "num" na memória
    int *arr = malloc(*num * sizeof(int));

    // Caso haja falha na alocação
    if (arr == NULL){
        printf("Error to allocate memory! \n");    
    }

    // Preenchimento do vetor pelo usuário
    for (int i = 0; i < *num; i++){
        printf("arr[%d]: ", i);
        int TempScanf = scanf(" %d", &arr[i]);

        // Verificação caso o usuário digite dado que não seja int
        if (TempScanf == 0){
            printf("Invalid entry! \n");
            FlushBuffer();
            break;
        }
    }

    // Exibindo os elementos do vetor
    printf("Elements of the array: \n");

    for (int i = 0; i < *num; i++){
        printf("arr[%d]: %d \n", i, arr[i]);
    }

    // Liberando o espaço alocado na memória
    free(arr);
}

int main(){

    while(true){

        int ElementsNumber = 0;

        if (CheckData(&ElementsNumber)){
            CreateArray(&ElementsNumber);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}