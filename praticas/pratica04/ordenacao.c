#include <stdio.h>
#include "ordenacao.h"

// Função auxiliar para trocar dois valores
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
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

// Selection Sort
void selection_sort(int *v, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (v[j] < v[min]) 
            {
                min = j;
            }
        }
        troca(&v[i], &v[min]);
    }
}

// Função auxiliar do Quick Sort
int particionar(int *v, int inicio, int fim) 
{
    int pivo = v[fim];
    int i = inicio - 1;
    for (int j = inicio; j < fim; j++) 
    {
        if (v[j] < pivo) 
        {
            i++;
            troca(&v[i], &v[j]);
        }
    }
    troca(&v[i + 1], &v[fim]);
    return i + 1;
}

// Quick Sort
void quick_sort(int *v, int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);
        quick_sort(v, inicio, p - 1);
        quick_sort(v, p + 1, fim);
    }
}