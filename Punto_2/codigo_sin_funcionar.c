// codigo_roto.c
#include <stdio.h>

void duplicar_numero(int *numero);

int main() {
    int valor1;
    int valor2;    

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0;
}

void duplicar_numero(int *numero){
    *numero = (*numero) * 2;
}