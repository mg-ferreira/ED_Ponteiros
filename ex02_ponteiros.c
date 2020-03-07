/*--------------------------------------------------------------------------------------------------------------
        Escreva um programa em C que calcula a média de elementos armazenados em um vetor de 30 posições.
---------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>

int main(){
    // declaração de variáveis
    float vet[] = {2.31, 8.79, 6.48, 7.74, 9.00, 8.27, 7.54, 6.92, 6.30, 6.85, 6.27, 8.17, 1.90, 10, 8.12,
                   0.29, 2.17, 5.18, 3.01, 7.78, 4.77, 9.57, 5.80, 1.10, 3.72, 2.35, 7.77, 4.62, 6, 2.11};
    float media=0;
    int i;

    // declaração de ponteiros para as variáveis
    float *pMedia = &media, *pV = &vet[0]; 
    int *pI = &i;

    // calculando a média através de ponteiros
    for(*pI = 0; *pI < 30; (*pI)++){
        *pMedia += *pV;
        ++pV;
    }

    // exibindo o valor da média
    printf("\nO valor medio eh: %.2f\n", (*pMedia)/30);
    return 0;
}