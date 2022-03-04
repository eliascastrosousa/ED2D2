/*Atividade 5
Faça um programa para ordenação de um vetor de inteiros, utilizando o algoritmo de
ordenação selectionSort, que apresente sua saída como o exemplo abaixo:*/

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

    printf("\n\nOrdenando por metodo selectionSort: \n\n");

    selectionSort(vetor, n);

    printf("Vetor ordenado: ");
    for(int c=0; c<n; c++){
        printf("%d ",vetor[c]);
    }



    return 0;
}
