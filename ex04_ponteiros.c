/*--------------------------------------------------------------------------------------------------------------
    Escreva uma função que calcula o fatorial de um número recebido por parâmetro, devolvendo-o ao final.
---------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>

int fatorial(int valor){
    if(valor == 0) return 1;
    if(valor == 1) return 1;
    return valor * fatorial(valor-1);
}

int main(){
    // declaração de variaveis e ponteiros
    int resultado, num;
    int *pR = &resultado, *pN = &num;
    
    // validação do valor digitado
    while(!(*pN>= 0 && *pN < 21)){
        printf("Digite um numero inteiro entre 0 e 20: ");
        scanf("%d", pN);
        if(*pN < 0 || *pN > 21)
            printf("Numero Invalido!\n");
    }
    
    // chamada da função e armazenamento do valor de retorno
    *pR = fatorial(*pN);

    // exibição do resultado
    printf("O fatorial de %d eh %d\n", *pN, *pR);
    return 0;
}