
#include <stdio.h>
#include <stdlib.h>
#include "atv2.h"

int buscaLinear(int *vetor, int n, int elem){
     int i;
     for(i = 0; i<n; i++){
        if(elem == vetor[i]){
            return i;
        }
     }
     return -1;
}


int buscaOrdenada(int *vetor1, int n, int elem){
    int i;
     for(i = 0; i<n; i++){
        if(elem == vetor1[i]){
            return i;
        }else{
            if(elem <vetor1[i]){
                return -1;
            }
        }
     }
     return -1;

}

int buscaBinaria(int *vetor1, int n, int elem){
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n-1;

    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if(elem < vetor1[meio]){
            fim = meio-1;
        }else{
            if(elem > vetor1[meio]){
                fim = meio+1;
            }else{
                return meio;
            }
        }
    }
    return -1;
}

int insere_lista_ordenada(int *vetor1, int n, int elem){
    if(vetor1 == NULL){
        return 0;
    }

    //if(lista_cheia(li)){        return 0;    }

    int k, i=0;
    while(i < n && vetor1 < elem){
        i++;
    }
    for(k = n - 1; k >= i; k--){
        vetor1[k+1] = vetor1[k];
    }
    vetor1[i] = elem;
    n++;
    return 1;
}

