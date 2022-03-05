/*Atividade 6
Fa�a um programa para ordena��o de um vetor de inteiros, utilizando o algoritmo de
ordena��o InsertionSort, que apresente sua sa�da como o exemplo abaixo:
*/

#include <stdio.h>
#include <stdlib.h>
#include "atv06.h"

int main()
{
    int n = 10;
    int vetor[10] = {90,115,110,150,140,130,155,120,190,170};

    printf("Vetor Desordenado: ");
    for(int c=0; c<n; c++){
        printf("%d ",vetor[c]);
    }

    printf("\n\nOrdenando por metodo InsertionSort: \n\n");

    InsertionSort(vetor, n);

    printf("Vetor ordenado: ");
    for(int c=0; c<n; c++){
        printf("%d ",vetor[c]);
    }
    printf("\n\n");


    return 0;
}
