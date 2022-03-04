/*Atividade 1
 Elabore um programa que execute os três tipos de busca:
▪ Busca Linear;
▪ Busca Ordenada;
▪ Busca Binária.
 Para isso, seu programa deverá contar com dois vetores de inteiros, um desordenado
para a Busca Linear, e outro ordenado para as Buscas Ordenada e Binária.
 Os resultados devem ser apresentados em tela juntamente com o respectivo vetor
para a conferência do índice retornado.
 Entregue no Moodle como Atividade 1 – Buscas em Vetores*/

#include <stdio.h>
#include <stdlib.h>
#include "atv01.h"
#define TAM 10

int main(){
    int vetor[TAM]= {0,5,7,2,8,3,4,9,6,1};
    int vetor1[TAM]= {0,1,2,3,4,5,6,7,8,9};
    int n=TAM, elem, opc, x;

    do{
        printf("Digite qual o metodo de procura: \n[1] Busca Linear \n[2] Busca Ordenada \n[3] Busca Binaria \n[0] Sair \nDigite: ");
        scanf("%d", &opc);

        printf("\nDigite o elemento que voce procura: ");
        scanf("%d", &elem);

        switch(opc){
            case 1: printf("\nBusca Linear\n");
                    x = buscaLinear(vetor,  n, elem);
                    printf("\n\nResultado: %d\n", x);
                break;
            case 2: printf("\nBusca Ordenada\n");
                    x = buscaOrdenada(vetor1,  n, elem);
                    printf("\n\nResultado: %d", x);
                break;
            case 3: printf("\nBusca Binaria");
                    x = buscaBinaria(vetor1,  n, elem);
                    printf("\n\nResultado: %d\n", x);
                break;
            default: printf("Opcao invalida");
        }
    }
    while (opc != 0);

    system("pause");
}
