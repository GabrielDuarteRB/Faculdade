#include <stdio.h>

struct Fila {
    int n;
    struct Fila *prox, *ant;
} *inicio = NULL, *fim = NULL;

void menu(int* opc) {
    printf("\n1 - Empilha");
    printf("\n2 - Desempilha");
    printf("\n3 - Imprimir");
    printf("\n4 - Sair");
    printf("\nEscolha uma opcao:");
    scanf("%d", opc);
}

void enfileira() {
    int num;
    struct Fila *novo, *aux;
    novo = new struct Fila();

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(novo == NULL) {
        printf("\nNao possui memoria disponivel!");
        return;
    }

    novo->n = num;
    novo->ant = fim;
    novo->prox = NULL;
    if(fim == NULL) {
        inicio = novo;
    } else {
        fim->prox = novo;
    }

    fim = novo;

    printf("Numero adicionado!");
}

void desenfilera() {
    struct Fila *aux;

    if(inicio == NULL) {
        printf("Lista vazia!");
        return;
    }

    aux = inicio->prox;
    aux->ant = NULL;
    delete(inicio);
    inicio = aux;
    printf("Desempilhou!");
}

void imprimir() {
    struct Fila *aux = inicio;

    if(aux == NULL) {
        printf("Lista vazia!");
    }

    for(; aux != NULL; aux = aux->prox) {
        printf("\n%d", aux->n);
    }
}

int main() {
    int opc = 0;

    while(opc != 4) {
        menu(&opc);
        switch(opc) {
            case 1:
                enfileira();
                break;
            case 2:
                desenfilera();
                break;
            case 3:
                imprimir();
                break;
            case 4:
                printf("\nAte logo!");
                break;
            default:
                printf("Escolha um numero valido");
        }
    }
}