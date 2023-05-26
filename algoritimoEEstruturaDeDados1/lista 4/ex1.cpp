#include <stdio.h>

struct Pilha {
    int n;
    struct Pilha *prox;
} *inicio = NULL;

void menu(int* opc) {
    printf("\n1 - Empilha");
    printf("\n2 - Desempilha");
    printf("\n3 - Imprimir");
    printf("\n4 - Sair");
    printf("\nEscolha uma opcao:");
    scanf("%d", opc);
}

void empilha() {
    int num;
    struct Pilha *novo;
    novo = new struct Pilha();

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(novo == NULL) {
        printf("\nNao possui memoria disponivel!");
        return;
    }

    novo->n = num;
    novo->prox = inicio;

    inicio = novo;
    printf("Numero adicionado!");
}

void desempilha() {
    struct Pilha *aux;

    if(inicio == NULL) {
        printf("Lista vazia!");
        return;
    }

    aux = inicio->prox;
    delete(inicio);
    inicio = aux;
    printf("Desempilhou!");
}

void imprimir() {
    struct Pilha *aux = inicio;

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
                empilha();
                break;
            case 2:
                desempilha();
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