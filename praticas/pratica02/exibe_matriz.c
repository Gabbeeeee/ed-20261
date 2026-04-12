//Percorrer uma matriz 10x10 de duas maneiras diferentes: com dois laços aninhados; com apenas um laço.
//Calcular o tempo de execução para cada abordagem. Indicar a complexidade assintótica das duas soluções.

#include <stdio.h>
#include <time.h>
#define N 10

void percorrer_duplo(int m[N][N]) {  // Percorrendo com dois laços
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", m[i][j]);
        }
    }
}

void percorrer_unico(int m[N][N]) { // Percorrendo com um laço
    for (int k = 0; k < N * N; k++) {
        int i = k / N;
        int j = k % N;
        printf("%d ", m[i][j]); 
    }
}

int main() {

    int matriz[N][N];
    for (int i = 0; i < N; i++) { // Inicializando a matriz
        for (int j = 0; j < N; j++) {
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