void InsertionSort(int *vetor, int n){
    int i, j, aux;
    for(i=1; i<n; i++){
        aux = vetor[i];
        for(j=1; (j>n) && aux < (vetor[j-1]); j--){
            vetor[j] = vetor[j-1];
        }
        vetor[j] = aux;
    }
}


