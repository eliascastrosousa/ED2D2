#include <stdio.h>
#include <stdlib.h>
#include "atv01.h"

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
