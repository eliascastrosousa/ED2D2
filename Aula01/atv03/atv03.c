void ordenaBubbleSort(int *vetor, int n){
    int i, cont, aux, fim = n;
    do{
        cont=0;
        for(i=0; i <fim-1; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                cont = 1;
            }
        }
        fim--;

    }while(cont != 0);

}
