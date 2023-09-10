int merge(int vetor[], int esquerda, int meio, int direita) {

    int[] novoVetor = new int[vetor.length];

    for(i = esquerda; i <= direita; i++) {
        novoVetor[i] = vetor[i];
    }

    int contNovoVetor = esquerda;
    int m = meio + 1
    int contVetor = esquerda;

    while(contNovoVetor <= meio && m <= direita) {
        
        if(novoVetor[contNovoVetor] <= novoVetor[m]) {
            vetor[contVetor] = novoVetor[contNovoVetor];
            contNovoVetor++;
        } else {
            vetor[contVetor] = novoVetor[m];
            m++;
        }
        contVetor++
    }

    while(esquerda <= meio) {
        vetor[contVetor] = novoVetor[contNovoVetor];
        contNovoVetor++;
        contVetor++;
    }

    while(direita <= meio) {
        vetor[contVetor] = novoVetor[m];
        m++;
        contVetor++;
    }

}

int mergeSort(int vetor[], int esquerda, int direita) {

    if(esquerda >= direita) return;

    int meio = (esquerda + direita) / 2

    mergeSort(vetor, esquerda, meio);
    mergeSort(vetor, meio+1, direita);

    merge(vetor, esquerda, meio, direita);

}

int main() {
    int vetor = [8, 23, 1, 2, 43, 3, 87, 16, 22, 9];
    int esquerda = 0;
    int direita = vetor.length - 1;

    mergeSort(vetor, esquerda, direita);

    for(int i = 0; i <= vetor.length; i++) vetor[i];
}