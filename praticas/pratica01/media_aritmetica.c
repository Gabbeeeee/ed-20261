#include <stdio.h> 

float media_aritmetica(float array[], int n) {
    if(n>100 || n == 0 || array == 0) {return 0;}

    float soma = 0;
    for(int i = 0; i < n; i++) {
        soma += array[i];
    }
    return (soma / n);
}

int main() {

    //TESTES

    float media = 0;

    float array1[10] = {1,2,3,4,5,6,7,8,9,10}; // n = 10
    media = media_aritmetica(array1, 10);
    printf("Media de {1,2,3,4,5,6,7,8,9,10} = %.1f\n", media);
    
    float array2[5] = {0,0,0,0,1}; // n = 5
    media = media_aritmetica(array2, 5);
    printf("Media de {0,0,0,0,1} = %.1f\n", media);

    float array3[3] = {}; // sem entradas
    media = media_aritmetica(array3, 0);
    printf("Media de {} = %.1f\n", media);

    float array4[7] = {1.3, 22, 4.5, 13, 7.2, 8, 10}; //entradas decimais
    media = media_aritmetica(array4, 7);
    printf("Media de {1.3, 22, 4.5, 13, 7.2, 8, 10} = %.1f\n", media);

    float array5[4] = {0,0,0,0}; // media de zeros
    media = media_aritmetica(array5, 4);
    printf("Media de {0,0,0,0} = %.1f\n", media);

    float array6[4] = {-50,100,-75,-30}; // negativos
    media = media_aritmetica(array6, 4);
    printf("Media de {-50,100,-75,-30} = %.1f\n", media);


    return 0;
}