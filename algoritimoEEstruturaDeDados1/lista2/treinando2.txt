#include <stdio.h>

struct No {
    int n;
    struct No *prox, *ant;
}*inicio = NULL, *fim = NULL;

void menu(int* opc) {
    printf("\n1 - Inserir no inicio");
    printf("\n2 - Inserir no fim");
    printf("\n3 - Imprimir");
    printf("\n4 - Buscar");
    printf("\n5 - Alterar");
    printf("\n6 - Excluir um unico elemento");
    printf("\n7 - Excluir a lista toda");
    printf("\n8 - Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%d", opc);
}

void inserir_inicio(){
    int valor;
    struct No *novo;
    novo = new struct No();

    printf("Escolha um valor para ser adicionado no inicio: ");
    scanf("%d", &valor);

    if(novo == NULL) {
        printf("Nao ha memoria o suficiente");
        return;
    }

    novo->n = valor;

    if(inicio == NULL) {
        novo->prox = NULL;
        novo->ant = NULL;
        fim = novo;
    } else {
        novo->prox = inicio;
        inicio->ant = novo;
    }

    inicio = novo;

    printf("valor inserido com sucesso");
}

void inserir_final() {
    int valor;
    struct No *novo, *aux = inicio;
    novo = new struct No();

    printf("Escolha um valor para ser adicionado no final: ");
    scanf("%d", &valor);

    if(novo == NULL) {
        printf("Nao ha memoria o suficiente");
        return;
    }

    novo->n = valor;

    if(fim == NULL) {
        novo->prox = NULL;
        novo->ant = NULL;
        inicio = novo;
    } else {
        novo->ant = fim;
        fim->prox = novo;
    }

    fim = novo;

    printf("Numero adicionado");
}

void imprimir() {
    struct No *aux = inicio;
    if(aux == NULL) {
        printf("Nao possui elementos cadastrados");
        return;
    }

    for(;aux != NULL; aux=aux->prox) {
        printf("\n%d", aux->n);
    }

}

No* buscar(int valor) {
    struct No *buscando = NULL, *aux = inicio, *aux2 = fim;

    while(aux != NULL && aux->ant != aux2) {
        if(aux->n == valor) {
            printf("Numero encontrado");
            printf("aux1");
            return aux;
        }

        if(aux2->n == valor) {
            printf("Numero encontrado");
            printf("aux2");
            return aux2;
        }
        aux = aux->prox;
        aux2 = aux2->ant;
    }

    printf("Numero nao encontrado");
    return buscando;
}

void alterar() {
    int valor, novoValor;
    struct No *aux;

    printf("Escolha um valor para ser mudado: ");
    scanf("%d", &valor);
    printf("Escolha um novo valor: ");
    scanf("%d", &novoValor);

    aux = buscar(valor);
    if(aux == NULL) {
        printf("Valor nao existe!");
    } else {
        aux->n = novoValor;
        printf("\nValor alterado!");
    }
}

void excluir_elemento() {
    int valor;
    struct No *aux = inicio, *anterior = NULL;

    printf("Escolha um valor para ser deletado: ");
    scanf("%d", &valor);

    while(aux != NULL) {

        if(aux->n == valor) {
            if(anterior == NULL) {
                inicio = aux->prox;
            } else {
                anterior->prox = aux->prox;
            }
            delete(aux);
            printf("Numero excluido com sucesso");
            return;
        }
        anterior = aux;
        aux = aux->prox;
    }

    printf("Valor nao encontrado");
}

void excluir_lista_toda() {
    struct No *atual = inicio, *prox;

    while(atual != NULL) {
        prox = atual->prox;
        delete(atual);
        atual = prox;
    }

    inicio = NULL;
    printf("Lista excluida");
}

int main(){
    int opc = 0;


    while(opc != 8) {
        menu(&opc);
        switch (opc) {
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
                int valor;
                printf("Escolha um valor para ser buscado: ");
                scanf("%d", &valor);
                buscar(valor);
                break;
            case 5:
                alterar();
                break;
            case 6:
                excluir_elemento();
                break;
            case 7:
                excluir_lista_toda();
                break;
            case 8:
                printf("Ate logo");
                break;
            default:
                printf("Digite um numero valido!");
        }
    }

    getchar();
    return 0;
};