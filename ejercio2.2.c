//ejercio2.2 
//identificador de numeros pares y positivos
//primero pedimos el numero luego usamos la operacion residuo para determinar si es par y por ultimo evealuamos segund los condiciones de si es positivo o negativo
#include <stdio.h>

int main() {
    int n;
    
    // pedir numero
    printf("Ingrese un numero para evaluacion: ");
    scanf("%d", &n);

    int op = n % 2;  // Calcula el residuo de la división entre 2

    // Condicionales 
    if (n > 0 && op == 0) {
        printf("El numero es positivo y par\n");
    } else if (n > 0 && op != 0) {
        printf("El numero es positivo e impar\n");
    } else if (n < 0 && op == 0) {
        printf("El numero es negativo y par\n");
    } else {
        printf("El numero es negativo e impar\n");
    }

    return 0;
}
