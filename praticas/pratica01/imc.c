#include <stdio.h>

float calcular_imc(float altura, float peso) {
    if(altura <= 0.0f || peso <= 0.0f) {
        return 0.0f;
    }
    return peso / (altura * altura);
}

int main ()
{
    float imc = 0.0f;

    printf("Testa altura <= 0\n");
    imc = calcular_imc(0.0f, 50.0f);
    printf("altura = 0, peso = 50, imc = %.1f => %i\n", imc, imc == 0);

    printf("\nTesta peso <= 0\n");
    imc = calcular_imc(1.75f, 0.0f);
    printf("altura = 1.75, peso = 0, imc = %.1f => %i\n", imc, imc == 0);

    printf("\nTesta imc abaixo do peso\n");
    imc = calcular_imc(1.75f, 50.0f);
    printf("altura = 1.75, peso = 50, imc = %.1f => %i\n", imc, (imc < 18.5f));

    printf("\nTesta imc peso normal\n");
    imc = calcular_imc(1.75f, 65.0f);
    printf("altura = 1.75, peso = 65, imc = %.1f => %i\n", imc, (imc >= 18.5f && imc <= 24.9f));

    printf("\nTesta imc sobrepeso\n");
    imc = calcular_imc(1.75f, 80.0f);
    printf("altura = 1.75, peso = 80, imc = %.1f => %i\n", imc, (imc >= 25.0f && imc <= 29.9f));

    printf("\nTesta imc obesidade\n");
    imc = calcular_imc(1.75f, 95.0f);
    printf("altura = 1.75, peso = 95, imc = %.1f => %i\n", imc, imc >= 30);


    return 0;
}
