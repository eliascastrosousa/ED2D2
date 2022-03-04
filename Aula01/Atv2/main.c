/*Atividade 2
Utilizando o programa da atividade 1, escreva uma função para a inserção de um novo
valor no vetor ordenado em sua posição correta. Desloque os outros números, se
necessário. Considere que há espaço vago no vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include "atv2.h"
#define TAM 100

int main(){
    int vetor[TAM]= {0,5,7,2,8,3,4,9,6,1};
    int vetor1[TAM]= {0,1,2,3,4,5,6,7,8,9};
    int n=TAM, elem, opc, x, add;

    do{

        printf("Digite o que procura: \n[1] Busca Linear \n[2] Busca Ordenada \n[3] Busca Binaria  ");
        printf("\n[4] Inserir um Elemento \n[5] Exibir Lista Ordenada \n[6] Exibir lista Desordenada \n[0] Sair \nDigite:");
        scanf("%d", &opc);

        switch(opc){
            case 1: printf("\nBusca Linear\n");
                    printf("\nDigite o elemento que voce procura: ");
                    scanf("%d", &elem);
                    x = buscaLinear(vetor,  n, elem);
                    printf("\n\nResultado: %d\n", x);
                break;
            case 2: printf("\nBusca Ordenada\n");
                    printf("\nDigite o elemento que voce procura: ");
                    scanf("%d", &elem);
                    x = buscaOrdenada(vetor1,  n, elem);
                    printf("\n\nResultado: %d", x);
                break;
            case 3: printf("\nBusca Binaria");
                    printf("\nDigite o elemento que voce procura: ");
                    scanf("%d", &elem);
                    x = buscaBinaria(vetor1,  n, elem);
                    printf("\n\nResultado: %d\n", x);
                break;
            case 4: printf("\nInserir Elemento");
                    printf("\nQual elemento deseja adicionar: ");
                    scanf("%d", &elem);

                    x = insere_lista_ordenada(vetor1, n, elem);
                    if(x){
                        printf("\n inserido na posicao com sucesso!\n");
                    }else{
                        printf("\nErro, nao inserido!\n");
                    }
                break;
            case 5: printf("\nExibindo Lista Ordenada: ");
                    for(int c=0; c<n; c++){
                        printf("%d ", vetor1[c]);
                    }
                    printf("\n");
                break;

            case 6: printf("\nExibindo Lista desordenada: ");
                    for(int c=0; c<n; c++){
                        printf("%d ", vetor[c]);
                    }
                    printf("\n");
                break;


            default: printf("Opcao invalida");
        }
    }
    while (opc != 0);

    system("pause");
}
