//ejercicio 8.1 hacer interes compuesto
// se piden los datos nesesarios para calcular el interes compuesto y se imprime el resultado
#include <stdio.h>
#include <math.h>

int main() {
    // pedir datos
    int P;
    float r;
    int n;
    int t;
    printf("Ingrese el capital inicial: ");
    scanf("%d", &P);
    printf("Ingrese la tasa de interes: ");
    scanf("%f", &r);
    printf("Ingrese el numero de veces que se capitaliza al año: ");
    scanf("%d", &n);
    printf("Ingrese el tiempo en años: ");
    scanf("%d", &t);
    //hacer calculo
    float A = P * pow(1 + r / n, n * t);
    printf("El monto final es: %f", A);
    return 0;
}	