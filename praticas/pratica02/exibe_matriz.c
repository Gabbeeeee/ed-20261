//Percorrer uma matriz 10x10 de duas maneiras diferentes: com dois laços aninhados; com apenas um laço.
//Calcular o tempo de execução para cada abordagem. Indicar a complexidade assintótica das duas soluções.

#include <stdio.h>
#include <time.h>
#define n 10

void percorrer_duplo(int m[n][n]) {  // Percorrendo com dois laços: O(n²)
    for (int i = 0; i < n; i++) {          // n * n
        for (int j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
    }
}

void percorrer_unico(int m[n][n]) { // Percorrendo com um laço: O(n²)
    for (int k = 0; k < n * n; k++) {    // n * n
        int i = k / n;
        int j = k % n;
        printf("%d ", m[i][j]); 
    }
}

int main() {

    int matriz[n][n];
    for (int i = 0; i < n; i++) { // Inicializando a matriz
        for (int j = 0; j < n; j++) {
            matriz[i][j] = i + j;
        }
    }

    clock_t inicio, fim;
    double tempo_duplo, tempo_unico;

    // Teste com dois laços
    inicio = clock();
    percorrer_duplo(matriz);
    fim = clock();
    tempo_duplo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Teste com um laço
    inicio = clock();
    percorrer_unico(matriz);
    fim = clock();
    tempo_unico = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo (2 lacos): %f segundos\n", tempo_duplo);  // deu 0.000023 segundos
    printf("Tempo (1 laco): %f segundos\n", tempo_unico);   // deu 0.000011 segundos

    return 0;
}