#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAM 100

void copiar_vetor(int *origem, int *destino, int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

int main() {
    int v[TAM];
    int v_bubble[TAM], v_selection[TAM], v_quick[TAM];

    srand(time(NULL));

    //vetor original
    for (int i = 0; i < TAM; i++) {
        v[i] = rand() % 1000;
    }

    //cópias para cada algoritmo
    copiar_vetor(v, v_bubble, TAM);
    copiar_vetor(v, v_selection, TAM);
    copiar_vetor(v, v_quick, TAM);

    clock_t inicio, fim;

    //Bubble Sort
    inicio = clock();
    bubble_sort(v_bubble, TAM);
    fim = clock();
    printf("Bubble Sort: %lf segundos\n",
           (double)(fim - inicio) / CLOCKS_PER_SEC);

    //Selection Sort
    inicio = clock();
    selection_sort(v_selection, TAM);
    fim = clock();
    printf("Selection Sort: %lf segundos\n",
           (double)(fim - inicio) / CLOCKS_PER_SEC);

    //Quick Sort
    inicio = clock();
    quick_sort(v_quick, 0, TAM - 1);
    fim = clock();
    printf("Quick Sort: %lf segundos\n",
           (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}