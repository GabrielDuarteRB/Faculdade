#include <stdio.h>

struct No {
    int n;
    struct No *prox;
}*inicio=NULL;

void menu(int* opc) {
    printf("\n1 - Inserir no inicio");
    printf("\n2 - Inserir no final");
    printf("\n3 - Imprimir");
    printf("\n4 - Buscar");
    printf("\n5 - Alterar");
    printf("\n6 - Excluir um unico elemento");
    printf("\n7 - Deletar toda a lista");
    printf("\n8 - Sair");
    printf("\nEscolha uma opcao:");
    scanf("%d", opc);
}

void inserir_inicio() {
    int value;
    struct No *novo;
    novo = new struct No();
    printf("\nEscolha um valor para ser adicionado: ");
    scanf("%d", &value);
    if(novo == NULL) {
        printf("\nNao inserido, nao ha memoria disponivel.");
        return;
    }

    novo->n = value;
    novo->prox = inicio;
    inicio = novo;
    printf("\nValor inserido com sucesso\n");
}

void inserir_final() {
    int value;
    printf("\nEscolha um valor para ser adicionado: ");
    scanf("%d", &value);
    struct No *novo, *aux;
    novo = new struct No();

    if(novo == NULL) {
        printf("\nNao inserido, nao ha memoria disponivel.");
        return;
    }

    novo->n = value;
    novo->prox = NULL;

    if(inicio == NULL) {
        inicio = novo;
    } else {
        aux = inicio;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    printf("\nValor inserido com sucesso\n");
}

void imprimir() {
    struct No *aux = inicio;

    if(aux == NULL){
        printf("Lista vazia!");
        return;
    }

    for(;aux != NULL; aux=aux->prox) {
        printf("%d ", aux->n);
    }
}

void buscar() {
    int value;
    printf("\nEscolha um valor para ser buscado: ");
    scanf("%d", &value);
    struct No *atual = inicio;

    while(atual != NULL) {
        if(atual->n == value) {
            printf("\nNumero encontrado\n");
            return;
        }
        atual = atual->prox;
    }

    printf("\nNumero nao foi encontrado\n");
}

void alterar() {
    int value, new_value;
    printf("\nEscolha um valor para ser alterado: ");
    scanf("%d", &value);
    printf("\nEscolha o novo valor: ");
    scanf("%d", &new_value);
    struct No *atual = inicio;

    while(atual != NULL) {
        if(atual->n == value) {
            atual->n = new_value;
            printf("\nValor alterado com sucesso");
            return;
        }
        atual = atual->prox;
    }

    printf("Valor nao encontrado na lista");
}

void excluir_um_elemento() {
    int value;
    printf("\nEscolha um valor para ser excluido: ");
    scanf("%d", &value);
    struct No *atual = inicio, *anterior = NULL;

    while (atual != NULL) {
        if(atual->n == value) {
            if(anterior == NULL) {
                inicio = atual->prox;
            } else {
                anterior->prox = atual->prox;
            }
            delete(atual);
            printf("\nValor excluido com sucesso!\n");
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
    printf("\nValor nao encontrado!\n");
}

void excluir_lista() {
    struct No *atual = inicio, *prox;

    while(atual != NULL) {
        prox = atual->prox;
        delete(atual);
        atual = prox;
    }

    inicio = NULL;
    printf("Lista excluida!");
}

int main() {
    int opc = 0;

    while(opc != 8) {
        menu(&opc);

        switch (opc)
        {
            case 1:
                inserir_inicio();
                break;
            case 2:
                inserir_final();
                break;
            case 3:
                imprimir();
                break;
            case 4:
                buscar();
                break;
            case 5:
                alterar();
                break;
            case 6:
                excluir_um_elemento();
                break;
            case 7:
                excluir_lista();
                break;
            case 8:
                printf("Ate logo\n");
                break;
            default:
                printf("\nEscolha um numero valido\n");
        }
    }

    getchar();

    return 0;
}
