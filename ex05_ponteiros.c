/*--------------------------------------------------------------------------------------------------------------
        Escreva uma função que decide se um número é primo.
---------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>

void verificaPrimo(int n){
    // se for 2, é primo,
    if(n==2)
        printf("O numero %d eh primo!\n", n);
    // senão, se o número for divisível por 2, 3, 5 ou 7, não é primo
    else if((n%2 == 0) || (n%3 == 0) || (n%5 == 0) || (n%7 ==0))
        printf("O numero %d nao eh primo!\n", n);
    // senão, é primo
    else
        printf("O numero %d eh primo!\n", n);
}


int main(){
    int n, *pN = &n;
    printf("Digite um valor: ");
    scanf("%d", pN);
    verificaPrimo(*pN);
    return 0;
}