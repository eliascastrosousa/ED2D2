#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ProjetoP1.h"

int Escolha_ordenacao(opc){
    printf("Escolha um método de ordenação:\n");
    printf("1 - BubbleSort\t\t 2 - InsertionSort\t 3 - SelectionSort\n");
    printf("4 - ShellSort\t\t 5 - MergeSort\t\t 6 - QuickSort\n");
    printf("7 - HeapSort\t\t 8 - RadixSort\t\t 9 - TimSort\n");
    printf("10 - BeadSort\t\t 11 - CountingSort\n\n");
    scanf("%d", &opc);
    return opc;
}

int Escolha_elem(opcElem){
    printf("\nEscolha a quantidade de elementos usados para ordenação:\n");
    printf("1 - 1.000\t 2 - 5.000\t 3 - 10.000\t 4 - 20.000\t 5 - 50.000\t 6 - 100.000\n\n");
    scanf("%d", &opcElem);
    return opcElem;
    getchar();
}

int Aloca_memoria(int *vetorElem, int totElem){
    vetorElem = (int*) malloc(totElem * sizeof(int));
            if(vetorElem == NULL){
                printf("Erro: Sem memória!");
                exit(1);
            }
    return vetorElem;
}

int Gerar_num_aleatorio(int *vetorElem, int contad, int totElem){
        vetorElem[contad] = (rand() % totElem);
        printf("\t [%d]", vetorElem[contad]);
        return vetorElem[contad];
}

int Libera_memoria(int *vetorElem){
    free(vetorElem);
    return vetorElem;
}

/* Métodos de Ordenação */
void Ordena_bubbleSort(int *vetorElem, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i=0;i<fim - 1;i++){
            if(vetorElem[i] > vetorElem[i+1]){
                aux=vetorElem[i];
                vetorElem[i]=vetorElem[i+1];
                vetorElem[i+1]=aux;
                continua = i;
            }
        }
        fim--;
    }while(continua != 0);
}

void Ordena_insertionSort(int *vetorElem, int n){
    int i, j, aux;
    for(i=1;i<n;i++){
        aux = vetorElem[i];
        for(j=i;(j>0) && (aux<vetorElem[j-1]); j--){
            vetorElem[j] = vetorElem[j-1];
        }
        vetorElem[j] = aux;
    }
}
/* Métodos de Ordenação */

void Imprimi_vet(int *vetorElem, int totElem){
    int i;
    printf("\nVetor ordenado:\n\n");
    for(i=0;i<totElem;i++){
        printf("\t [%d]", vetorElem[i]);
    }
}
