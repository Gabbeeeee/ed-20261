#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAM 100

void copiar_vetor(int *origem, int *destino, int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}
void imprimir_vetor(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d]=%d ", i, v[i]);
    }
    printf("\n");
}

int main() {
    int v[TAM];
    int v_linear[TAM], v_quick[TAM];

    srand(time(NULL));

    // criando vetor
    for (int i = 0; i < TAM; i++) {
        v[i] = rand() % 1000;
    }

    bubble_sort(v, TAM); //ordenando vetor
    printf("Vetor ordenado:\n");
    imprimir_vetor(v, TAM); //imprimindo já ordenado

    // mediana
    int k = TAM / 2;

    // valor correto esperado
    int esperado = v[k];

    copiar_vetor(v, v_linear, TAM);
    copiar_vetor(v, v_quick, TAM);

    clock_t inicio, fim;

    // Linear Search
    inicio = clock();
    int res_linear = linear_search(v_linear, TAM, k);
    fim = clock();
    printf("\nLinear Search (k=%d): %d | Tempo: %lf s\n",
           k, res_linear, (double)(fim - inicio) / CLOCKS_PER_SEC);

    // Quick Select
    inicio = clock();
    int res_quick = quick_select(v_quick, 0, TAM - 1, k);
    fim = clock();
    printf("Quick Select (k=%d): %d | Tempo: %lf s\n",
           k, res_quick, (double)(fim - inicio) / CLOCKS_PER_SEC);

    printf("\n--- Validando ---\n");

    if (res_linear == esperado) {
        printf("Linear Search CORRETO (esperado = %d)\n", esperado);
    } else {
        printf("Linear Search INCORRETO (esperado = %d)\n", esperado);
    }

    if (res_quick == esperado) {
        printf("Quick Select CORRETO (esperado = %d)\n", esperado);
    } else {
        printf("Quick Select INCORRETO (esperado = %d)\n", esperado);
    }

    return 0;
}