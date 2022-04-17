#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "ProjetoP1.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    int cont, i, escUm, escDois, *vet, elem, repet;
    time_t antes, depois;
    float tempgast, totaltempgast = 0, medtempgast;

    escUm = Escolha_ordenacao();

    escDois = Escolha_elem();

    switch(escDois){
        case 1:
            elem = 1000;
        break;
        case 2:
            elem = 5000;
        break;
        case 3:
            elem = 10000;
        break;
        case 4:
            elem = 20000;
        break;
        case 5:
            elem = 50000;
        break;
        case 6:
            elem = 100000;
        break;
        default:
            printf("Opção inválida!\n");
            system("pause");
    }
    printf("\n");

    switch(escUm){
        case 1:
            //alocar memoria
            vet = Aloca_memoria(vet, elem);
                //***reperir 10x***
                for(repet=0; repet<10; repet++){
                        //selecionar numeros aleatorios
                        for(cont=0; cont<elem; cont++){
                            Gerar_num_aleatorio(vet, cont, elem);
                        }
                        //iniciar contagem de tempo
                        antes = time(0);
                        Sleep(2);
                        printf("\n\nOrdenação em andamento...\n");
                                //ordenar vetor
                                Ordena_bubbleSort(vet, cont);
                        //encerrar contagem de tempo
                        depois = time(0);
                    //mostrar tempo gasto
                    Imprimi_vet(vet, elem);
                    printf("\n\nEntre %d e %d se passaram %f segundos.\n\n", antes, depois, difftime(depois, antes));
                    //salvar tempo gasto para ordenacao
                    tempgast = difftime(depois, antes);
                    totaltempgast = totaltempgast + tempgast;
                    //***reperir 10x***
                    printf("Teste %d de 10.\n\n", repet+1);
                    system("pause");
                }
                //tirar a media do tempo gasto das 10 repeticoes
                medtempgast = totaltempgast/10;
                printf("\n\nA média de tempo gasto em todo o processo é: %f segundos.\n\n", medtempgast);
                //tempo gasto com vetor ja ordenado *crescente e decrescente*

            //liberar memoria
            vet = Libera_memoria(vet);
        break;
        case 2:
           //alocar memoria
            vet = Aloca_memoria(vet, elem);
                //***reperir 10x***
                for(repet=0; repet<10; repet++){
                        //selecionar numeros aleatorios
                        for(cont=0; cont<elem; cont++){
                            Gerar_num_aleatorio(vet, cont, elem);
                        }
                        //iniciar contagem de tempo
                        antes = time(0);
                        Sleep(2);
                        printf("\n\nOrdenação em andamento...\n");
                                //ordenar vetor
                                Ordena_insertionSort(vet, cont);
                        //encerrar contagem de tempo
                        depois = time(0);
                    //mostrar tempo gasto
                    Imprimi_vet(vet, elem);
                    printf("\n\nEntre %d e %d se passaram %f segundos.\n\n", antes, depois, difftime(depois, antes));
                    //salvar tempo gasto para ordenacao
                    tempgast = difftime(depois, antes);
                    totaltempgast = totaltempgast + tempgast;
                    //***reperir 10x***
                    printf("Teste %d de 10.\n\n", repet+1);
                    system("pause");
                }
                //tirar a media do tempo gasto das 10 repeticoes
                medtempgast = totaltempgast/10;
                printf("\n\nA média de tempo gasto em todo o processo é: %f segundos.\n\n", medtempgast);
                //tempo gasto com vetor ja ordenado *crescente e decrescente*

            //liberar memoria
            vet = Libera_memoria(vet);
        break;
        default:
            printf("Opcao invalida!\n");
            system("pause");
    }

    return 0;
}
