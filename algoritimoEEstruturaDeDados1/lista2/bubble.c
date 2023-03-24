#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, qtd, max, j=0, tam=10000;
	int vet[tam], aux=0;
	double time_spent = 0.0;
	
	FILE *fp;
	fp = fopen("dezMil.txt", "r");
	if(fp == NULL){
	    printf("erro! NAO ACHEI\n");
	    return 1;
	}
	while(1){
		fscanf(fp,"%d",&vet[j]);
		j++;
		if (feof(fp)){
			break;
		}
	}
	
	fclose(fp);
 
    clock_t begin = clock();
	for(i=0;i<tam;i++){
		for(j=0;j<tam-1;j++){
			if(vet[j] > vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
			
		}
	}
		
	for(i=0;i<tam;i++){
		printf("%d\n",vet[i]);
	}
	
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("O tempo de execucao foi: %f segundos\n", time_spent);
	
	return 0;
}