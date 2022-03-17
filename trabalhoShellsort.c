#include <stdio.h>
#define MAX 8

void shellsort(int *vetor){
    int meio = (MAX -1)/ 2 ;
    int x=0 ,c =0, chave, k=0, aux;

    while(meio != 0){
        do{
            chave = 1;
            for( c =0; c < MAX - meio; c++){
                if(vetor[c] > vetor[c+meio]){
                    aux = vetor[c];
                    vetor[c] = vetor[c + meio];
                    vetor[c + meio] = aux;
                    chave =0;
                }
            }
            print("Tentativa de ordenação: ");

            for( k =0; k <MAX; k++){
                printf("%d ", vetor[k]);
            }
            printf("\n\n");

        }while(chave ==0);
        meio = meio /2;
    }

    printf("\nVetor Odenado: \n");
    for( c =0; c<MAX; c++){
        printf("%d ", vetor[c]);
    }printf("\n\n");

}

main(){

    int num[10];

    for(int i=0; i< MAX; i++){
        printf("Digite o [%d]o numero: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("\n\n");
    shellsort(num);


    system("pause");

}
