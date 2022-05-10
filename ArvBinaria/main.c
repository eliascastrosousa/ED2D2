#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main(){
    int x;
    ArvBin *raiz;
    raiz = cria_arvBin();
}

if(vazia_arvBin(raiz)){
   printf("Arvore Vazia");
}else{
    printf("Arvore possui elementos");
}
printf("\n");

x = totalNO_arvBin(raiz);
printf("O total de nos e %d\n", x);

preOrdem_arvBin(raiz);

emOrdem_arvBin(raiz);

posOrdem_arvBin(raiz);

