#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int PromptAndCheck(int *n_1, int *n_2){

    printf("Enter the number of the elements that will be used for the arr_1: ");
    if (scanf(" %d", n_1) == 0){
        FlushBuffer();
        return 0;
    }

    printf("Enter the number of the elements that will be used for the arr_2: ");
    if (scanf(" %d", n_2) == 0){
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

int CreateAndSumArrays(int *n_1, int *n_2){

    int *arr_1 = malloc(*n_1 * sizeof(int));
    int *arr_2 = malloc(*n_2 * sizeof(int));

    for (int i = 0; i < *n_1; i++){
        printf("Enter value for arr_1[%d]: ", i);
        if (scanf(" %d", &arr_1[i]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    for (int j = 0; j < *n_2; j++){
        printf("Enter value for arr_2[%d]: ", j);
        if (scanf(" %d", &arr_2[j]) == 0){
            FlushBuffer();
            return 0;
        }
    }

    printf("\n");

    if (*n_1 == *n_2){

        int len = *n_1; 
        int arr_3[len];

        for (int k = 0; k < *n_1; k++){
            arr_3[k] = arr_1[k] + arr_2[k];
        }

        for (int l = 0; l < len; l++){
            printf("arr_3[%d] = %d \n", l, arr_3[l]);
        }
    }
    else {
        printf("Sum can not be performed! \n");
    }

    free(arr_1);
    free(arr_2);

    return 1;
}

int main(){

    while(true){

        int n_1 = 0;
        int n_2 = 0;

        if (PromptAndCheck(&n_1, &n_2)){
            CreateAndSumArrays(&n_1, &n_2);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}
