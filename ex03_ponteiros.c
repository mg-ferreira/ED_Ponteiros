/*--------------------------------------------------------------------------------------------------------------
        Escreva uma função que exibe o maior entre dois números diferentes digitados pelo usuário.
---------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>

int main(){
    // declaração de variáveis
    int a, b;

    // declaração de ponteiros
    int *pA = &a, *pB = &b;

    // recebimento dos valores do usuário usando ponteiros
    printf("Digite dois valores separados por espaco: ");
    scanf("%d %d", pA, pB);

    // verificação e exibição do maior valor
    printf("\nO maior valor digitado foi %d\n", *pA > *pB ? *pA : *pB);
    return 0;
}