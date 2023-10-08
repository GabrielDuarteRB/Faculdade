#include <stdio.h>

void merge(int vetor[], int esquerda, int meio, int direita) {

    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int arrayEsquerdo[n1], arrayDireito[n2];

    for(i = 0; i < n1; i++) {
        arrayEsquerdo[i] = vetor[esquerda + i];
    }

    for(j = 0; j < n2; j++) {
        arrayDireito[j] = vetor[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = esquerda;

    while(i < n1 && j < n2) {
        
        if(arrayEsquerdo[i] <= arrayDireito[j]) {
            vetor[k] = arrayEsquerdo[i];
            i++;
        } else {
            vetor[k] = arrayDireito[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        vetor[k] = arrayEsquerdo[i];
        i++;
        k++;
    }

    while(j < n2) {
        vetor[k] = arrayDireito[j];
        j++;
        k++;
    }

}

void mergeSort(int vetor[], int esquerda, int direita) {

    if(esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio+1, direita);

        merge(vetor, esquerda, meio, direita);
    } 
}

void adicionarNotas(int tamanho, int *array) {
    for(int t = 0; t < tamanho; t++) {
        printf("Digite a nota %d", t);
        scanf("%d", &array[t]);
    }
}

int main() {
    int tamanho;

    printf("Quantas notas o Yago tirou? ");
    scanf("%d", &tamanho);
    int vetor[tamanho];

    adicionarNotas(tamanho, &vetor)

    mergeSort(vetor, 0, tamanho - 1);

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    getchar();
    return 0;
}