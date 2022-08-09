#include <stdio.h>
#include <stdlib.h>
#include "arvoreLLRB.h"
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int x, num;
    arvoreLLRB *raiz;
    raiz = cria_arvoreLLRB();

    printf("\nAdicionando funcionários!\n");
































    x = insere_arvoreLLRB(raiz, 150);
    x = insere_arvoreLLRB(raiz, 110);
    x = insere_arvoreLLRB(raiz, 100);
    x = insere_arvoreLLRB(raiz, 130);
    x = insere_arvoreLLRB(raiz, 120);
    x = insere_arvoreLLRB(raiz, 140);
    x = insere_arvoreLLRB(raiz, 160);

    remove_arvoreLLRB(raiz, 100);

    printf("Digite um valor para consulta: ");
    scanf("%d", &num);

    printf("\nBusca na Arvore Rubro Negra \n");

    x=consulta_arvoreLLRB(raiz, num);
    if(x){
        printf("\nConsulta realizada com sucesso!\n");
    }else{
        printf("\nElemento nao encontrado...");
    }



    return 0;

}
