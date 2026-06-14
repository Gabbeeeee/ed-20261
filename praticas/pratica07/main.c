#include <stdio.h>
#include "pilha.h"

int main() {

    Pilha *pilha = criar();

    if (pilha_vazia(pilha))
        printf("Pilha vazia.\n");

    empilhar(pilha, 10);
    empilhar(pilha, 20);
    empilhar(pilha, 30);

    printf("\nElementos da pilha:\n");
    pilha_exibir(pilha);

    printf("Topo da pilha: %d\n", pilha_topo(pilha));

    desempilhar(pilha);

    printf("\nApos desempilhar:\n");
    pilha_exibir(pilha);

    printf("Topo da pilha: %d\n", pilha_topo(pilha));

    desempilhar(pilha);
    desempilhar(pilha);

    if (pilha_vazia(pilha))
        printf("\nPilha vazia novamente.\n");

    pilha_destruir(pilha);

    return 0;
}