#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[60];
    float nota;
    struct Aluno *prox;
}*inicio = NULL;

void bubbleSortAlunos() {
    struct Aluno *aux = inicio, *alunos = inicio, *teste;
    char nome[60];
    float nota;

    do {
        aux = alunos;

        do {
            if(alunos->nota < aux->nota) {
                strcpy(nome, alunos->nome);
                nota = alunos->nota;
                
                strcpy(alunos->nome, aux->nome);
                alunos->nota = aux->nota;

                strcpy(aux->nome, nome);
                aux->nota = nota;
            }
            aux = aux->prox;
        }while(aux != NULL);

        alunos = alunos->prox;        

    } while(alunos != NULL);

}

void inserirAlunos() {
    struct Aluno *novo;
    novo = new struct Aluno();

    printf("\nDigite o nome do aluno: ");
    scanf("%s", &novo->nome);
    printf("\nDigite a nota dele: ");
    scanf("%f", &novo->nota);
    novo->prox = inicio;
    inicio = novo;
}

int main() {
    struct Aluno *alunos = inicio;
    char nome[60];
    float nota;
    int continuar;

    for(int i = 0; i < 5; i++) {
        inserirAlunos();
    }

    printf("Digite 1 para continuar e outro digito para sair: ");
    scanf("%d", &continuar);

    while(continuar == 1) {
        inserirAlunos();

        printf("Digite 1 para continuar e outro digito para sair: ");
        scanf("%d", &continuar);
    }

    bubbleSortAlunos();

    struct Aluno *aux = inicio;

    do{
        printf("\n%s ", aux->nome);
        printf("%.2f", aux->nota);
        aux = aux->prox;
    }while(aux != NULL);

    return 0;
}