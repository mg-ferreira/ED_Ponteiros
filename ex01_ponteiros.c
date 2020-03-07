/*--------------------------------------------------------------------------------------------------------------
    Escreva um programa em C que encontra o maior elemento em um vetor de 10 valores digitados pelo usuário.
---------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>

int main(){
    // declaração das variáveis
    int i, maior=0, vet[10];

    // declaração dos ponteiros para as variáveis
    int *pI = &i, *pM = &maior, *pV = &vet[0];

    // populando o vetor através de ponteiros
    for(*pI = 0; *pI < 10; (*pI)++){
        printf("Digite o %do. valor: ", (*pI)+1);
        scanf("%d", pV);
        ++pV;
    }

    // encontrando o maior valor através de ponteiros
    for(*pI = 0, pV = vet; *pI < 10; (*pI)++, ++pV){
        if(*pV > *pM)
            *pM = *pV;
    }

    // exibindo o maior valor
    printf("\nO maior valor do vetor eh: %d\n", *pM);

    return 0;
}