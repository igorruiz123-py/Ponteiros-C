#include <stdio.h>

// Ponteiros em funções
/*
Por padrão, as funções recebem uma cópia do dado original, veja o exemplo 1
No exemplo 1, usamos uma função void para alterar o valor da variável "a" somando-a com 10, porém na função main, a variável "a" ainda continua com seu valor original
e na função void foi feito apenas uma cópia de dado, gastando assim memória do programa. Comprovamos isso, pela impressão no terminal de 
dois endereços de memória para 2 variáveis que deveriam ser as mesmas
*/

/*
Usamos ponteiros para resolver esse problema de copiar dado e portanto resolver o problema de gasto de memória. 
Veja o exemplo 2
No exemplo dois, usamos ponteiros para alterar o valor real da variável na função main e, portanto, usamos o mesmo endereço de memória
para se referir a mesma variável
*/

// Exemplo 1
void sum(int x){
    
    x = x + 10;
    
    printf("Sum: %d \n", x);
    printf("Value of the memory address of the variable 'x' from the void (1) function: %p \n", &x);

    printf("\n");
}

void sub(int *x){

    *x = *x - 10;

    printf("Sub: %d \n", *x);
    printf("Value of the memory address of the variable 'x' from the void (2) function: %p \n", x);

    printf("\n");
}

int main(){

    // Começo exemplo 1
    int a = 5;

    sum(a);

    printf("Value of a: %d \n", a);
    printf("Value of the memory address of the variable 'a' from the main function: %p \n", &a);

    printf("\n");
    // Fim exemplo 1

    // Começo do exemplo 2
    int b = 15;

    sub(&b);

    printf("Value of b: %d \n", b);
    printf("Value of the memory address of the variable 'b' from the main function: %p \n", &b);
    // Fim do exemplo 2
}