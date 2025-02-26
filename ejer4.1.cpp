//Ejercicio 4.1: Sumar los elementos de un arreglo 
// se piden los numeros para un arrgeglo y se suman los elementos del arreglo y despues se recicla el codigo del punto 2.2
#include <stdio.h>

int main(){
    //pedimos los numeros 
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int numeros[5];
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &n3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &n4);
    printf("Ingrese el quinto numero: ");
    scanf("%d", &n5);
    numeros[0] = n1;
    numeros[1] = n2;
    numeros[2] = n3;
    numeros[3] = n4;
    numeros[4] = n5;
    // hacemos la suma de los numeros del arreglo
    int n = numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4];
    printf("La suma de los numeros es: %d\n", n);

    int op = n % 2; 

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