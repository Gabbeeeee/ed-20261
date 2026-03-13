#include <stdio.h>

void cedulas(int n) {

    int notas200 = n / 200;
    int notas100 = (n -(notas200 * 200)) / 100;
    int notas50 = (n - (notas200 *200 + notas100 *100)) / 50;
    int notas20 = (n - (notas200 *200 + notas100 *100 + notas50 *50)) / 20;
    int notas10 = (n - (notas200 * 200 + notas100 * 100 + notas50 * 50 + notas20 * 20)) / 10;
    int notas5 = (n - (notas200 * 200 + notas100 * 100 + notas50 * 50 + notas20 * 20 + notas10 * 10)) / 5;
    int notas2 = (n - (notas200 * 200 + notas100 * 100 + notas50 * 50 + notas20 * 20 + notas10 * 10 + notas5 * 5)) / 2;

}

int main() {

    int notas200, notas100, notas50, notas20, notas10, notas5, notas2;

    cedulas(1262);
    printf("Cedulas: 200 => %d, 100 => %d, 50 => %d, 20 => %d, 10 => %d, 5 => %d, 2 => %d", 
                                      notas200, notas100, notas50, notas20, notas10 ,notas5, notas2);

    return 0;
}