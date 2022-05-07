//programa principal
#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"


int main(){
    int x;
    ArvAVL *raiz;
    //programa principal
    raiz = cria_ArvAVL();
    printf("\n");

    //programa principal
    x = insere_ArvAVL(raiz, 150);
    x = insere_ArvAVL(raiz, 110);
    x = insere_ArvAVL(raiz, 100);
    x = insere_ArvAVL(raiz, 130);
    x = insere_ArvAVL(raiz, 120);
    x = insere_ArvAVL(raiz, 140);
    x = insere_ArvAVL(raiz, 160);

    if(x){
        printf("Elemento inserido com sucesso!!");
    }else{
        printf("Erro, não foi possivel inserir o elemento.");
    }

    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_ArvAVL(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento nao encontrado...");
    }

    //programa principal
    if(vazia_ArvAVL(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A Arvore possui elementos.");
    }
    printf("\n");
    //programa principal
    x = altura_ArvAVL(raiz);
    printf("Altura da arvore: %d", x);

    printf("\n");
    //programa principal
    x = totalNO_ArvAVL(raiz);
    printf("Total de nos na arvore: %d", x);

    printf("\nVisitando em pre-Ordem:\n");
    //programa principal
    preOrdem_ArvAVL(raiz);


    printf("\nVisitando em-Ordem:\n");
    //programa principal
    emOrdem_ArvAVL(raiz);

    printf("\nVisitando em pos-Ordem:\n");
    //programa principal
    posOrdem_ArvAVL(raiz);


    //programa principal
    remove_ArvAVL(raiz, 100);
    printf("\nVisitando em pos-Ordem depois da remocao:\n");
    posOrdem_ArvAVL(raiz);


    //programa principal


    //programa principal
    liberar_ArvAVL(raiz);
    printf("\n\n\n");
    printf("Hello world!\n");
    return 0;
}
