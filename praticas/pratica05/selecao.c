#include "selecao.h"

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Linear search (ordena parcialmente até achar o menor)
int linear_search(int *v, int n, int k) {
    for (int i = 0; i <= k; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        troca(&v[i], &v[min]);
    }
    return v[k];
}

int particionar(int *v, int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j] < pivo) {
            i++;
            troca(&v[i], &v[j]);
        }
    }

    troca(&v[i + 1], &v[fim]);
    return i + 1;
}

// Quick Select
int quick_select(int *v, int inicio, int fim, int k) {
    if (inicio <= fim) {
        int p = particionar(v, inicio, fim);

        if (p == k)
            return v[p];
        else if (k < p)
            return quick_select(v, inicio, p - 1, k);
        else
            return quick_select(v, p + 1, fim, k);
    }
    return -1; // erro
}

void bubble_sort(int *v, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (v[j] > v[j + 1]) 
            {
                troca(&v[j], &v[j + 1]);
            }
        }
    }
}