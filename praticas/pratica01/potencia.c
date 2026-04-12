#include <stdio.h>

float calcular_potencia(float base, int exp) 
{
    if (base == 0) {return 0;}
    if (exp <= 0) {return 1;}

    float resultado = 1;
    for(int i = 1; i <= exp; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {

    float potencia = 1;

    potencia = calcular_potencia(2,4);
    printf("2^4 = %.1f => %i\n", potencia, (potencia == 16));

    potencia = calcular_potencia(3,3);
    printf("3^3 = %.1f => %i\n", potencia, (potencia == 27));

    potencia = calcular_potencia(0,2);
    printf("0^2 = %.1f => %i\n", potencia, (potencia == 0));

    potencia = calcular_potencia(194,0);
    printf("194^0 = %.1f => %i\n", potencia, (potencia == 1));

    potencia = calcular_potencia(10,-1);
    printf("10^(-1) = %.1f => %i\n", potencia, (potencia == 1));

    return 0;
}