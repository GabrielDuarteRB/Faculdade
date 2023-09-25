#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[60];
    float nota;
    struct Aluno *prox, *ant;
} *inicio = NULL;

void bubbleSortAlunos(Aluno *alunos) {
    struct Aluno *aux;
    char nome[60];
    float nota;


    while(alunos->ant != NULL){
        alunos = alunos->ant;
    }

    do {
        aux = alunos;

        do {
            if(alunos->nota > aux->nota) {
                strcpy(nome, alunos->nome);
                nota = alunos->nota;
                
                strcpy(alunos->nome, aux->nome);
                alunos->nota = aux->nota;

                strcpy(aux->nome, alunos->nome);
                aux->nota = nota;
            }
            aux = aux->prox;
        }while(aux->prox != NULL);

        alunos = alunos->prox;        

    } while(alunos->prox != NULL);

}

void inserirAlunos() {
    struct Aluno *alunos = inicio, *novo;
    novo = new struct Alunos();

    printf("\nDigite o nome do aluno: ");
    scanf("%s", &novo->nome);
    printf("\nDigite a nota dele: ");
    scanf("%f", &novo->nota);
}

int main() {
    struct Aluno *alunos = inicio;
    char nome[60];
    float nota;
    int continuar;

    for(int i = 0; i < 5; i++) {
        
    }

    printf("Digite 1 para continuar e outro digito para sair: ");
    scanf("%d", &continuar);

    while(continuar == 1) {
        printf("\nDigite o nome do aluno: ");
        scanf("%c", &nome);
        printf("\nDigite a nota dele: ");
        scanf("%f", &nota);

        strcpy(alunos->nome, nome);
        alunos->nota = nota;
        alunos = alunos->prox;

        printf("Digite 1 para continuar e outro digito para sair: ");
        scanf("%d", &continuar);
    }

    bubbleSortAlunos(alunos);

    struct Aluno *aux = inicio;

    do{
        printf("\n%c", aux->nome);
        printf("\n%d", aux->nota);
        aux = aux->prox;
    }while(aux != inicio);

    return 0;
}