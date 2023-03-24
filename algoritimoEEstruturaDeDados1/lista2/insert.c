#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tam=100, array[tam], tamanho, j = 0, i, k, chave;
	double time_spent = 0.0;
	
	FILE *fp;
	fp = fopen("cem.txt", "r");
	if(fp == NULL){
	    printf("erro! NAO ACHEI\n");
	    return 1;
	}
	while(1){
		fscanf(fp,"%d",&array[j]);
		j++;
		if (feof(fp)){
			break;
		}
	}
	
	fclose(fp);
 
    clock_t begin = clock();
    
    tamanho = tam / array[0];
	
	for(i = 1; i < tamanho; i++) {
        chave = array[i];
        k = i - 1;
        while (k >= 0 && array[k] > chave) {
            array[k + 1] = array[k];
            k--;
        }
        array[k + 1] = chave;
    }

    for (int i = 0; i < tam; i++) {
        printf("%d ", array[i]);
    }
	
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("O tempo de execucao foi: %f segundos\n", time_spent);
	
	return 0;
}