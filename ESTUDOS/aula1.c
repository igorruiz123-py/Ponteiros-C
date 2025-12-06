#include <stdio.h>

// Endereço de memória
/*
Cada variável de um programa ocupa um certo número de bytes consecutivos na memória do computador. Uma variável do tipo char ocupa 1 byte.  
Uma variável do tipo int ocupa 4 bytes e um double ocupa 8 bytes em muitos computadores. 
O número exato de bytes de uma variável é dado pelo operador sizeof. 
A expressão sizeof (char), por exemplo, vale 1 em todos os computadores e a expressão sizeof (int) vale 4 em muitos computadores.
*/

// Ponteiros
/*
Um ponteiro (= apontador = pointer) é um tipo especial de variável que armazena um endereço
Se um ponteiro p armazena o endereço de uma variável i, podemos dizer  p aponta para i  ou  p é o endereço de i.  
(Em termos um pouco mais abstratos, diz-se que p é uma referência à variável i.)  Se um ponteiro p tem valor diferente de NULL então *p
*/

// Função de um ponteiro
/*
1- Com ponteiros, você manipula valores que estão em posições específicas da RAM
2- Sem ponteiros, tudo é passado por valor (cópia). Com ponteiros, você passa o endereço, e a função pode alterar a variável original.
*/


int main(){

    // Variável de tipo int = 4 bytes
    int var = 10;
    int VarLen = sizeof(var);

    // Variável de tipo double = 8 bytes
    double dob = 10.5;
    int DobLen = sizeof(dob);

    // Variavél do tipo char = 1 byte
    char cha = 'A';
    int Chalen = sizeof(cha);

    // Print do valor das variáveis, seus endereços de memória e seus respectivos valores
    printf("Value of var: %d / value of var memory address: %p / value of its size: %d \n", var, &var, VarLen);
    printf("Value of dob: %lf / value of dob memory address: %p / value of its size: %d \n", dob, &dob, DobLen);
    printf("Value of cha: %c / value of cha memory address: %p / value of its size: %d \n", cha, &cha, Chalen);

    printf("\n");

    // Variáveis de ponteiros
    int *pVar;
    pVar = &var;

    double *pDob;
    pDob = &dob;

    char *pCha;
    pCha = &cha;

    // Print do valor da variável de referência do ponteiro
    printf("(VAR) Value of the variable that the pointer points to: %d \n", *pVar);
    printf("(DOB) Value of the variable that the pointer points to: %lf \n", *pDob);
    printf("(CHA) Value of the variable that the pointer points to: %c \n", *pCha);

    printf("\n");

    // Print do valor do endereço de memória da variável de referência do ponteiro
    printf("(VAR) Value of the memory address from the variable that the pointer points to: %p \n", pVar);
    printf("(DOB) Value of the memory address from the variable that the pointer points to: %p \n", pDob);
    printf("(CHA) Value of the memory address from the variable that the pointer points to: %p \n", pCha);

    printf("\n");

    // Print do valor do endereço de memória da variável do ponteiro
    printf("(VAR) Value of the memory address from the pointer variable: %p \n", &pVar);
    printf("(DOB) Value of the memory address from the pointer variable: %p \n", &pDob);
    printf("(CHA) Value of the memory address from the pointer variable: %p \n", &pCha);
}