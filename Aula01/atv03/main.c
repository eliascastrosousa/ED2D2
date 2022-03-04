/*
Atividade 3

Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação BubbleSort
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int vetor[10] = {90,115,110,150,140,130,155,120,190,170};

    printf("Vetor Desordenado: ");
    for(int c=0; c<n; c++){
        printf("%d ",vetor[c]);
    }

    printf("\n\nOrdenando por metodo Bubblesort: \n\n");

    ordenaBubbleSort(vetor, n);

    printf("Vetor ordenado: ");
    for(int c=0; c<n; c++){
        printf("%d ",vetor[c]);
    }



    return 0;
}
