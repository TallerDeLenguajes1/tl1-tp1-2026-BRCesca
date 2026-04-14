#include <stdio.h>



int main(){
    int variable=10;// declaro mi variable entera de valor 10
    int *puntero=&variable;// declaro un puntero a entero que apunta a la direccion de memoria de mi variable entera

    printf("Hola mundo");
    printf("\nContenido del puntero: %d",*puntero);
    printf("\nDireccion de memoria almacenada por el puntero: %p",puntero);
    printf("\nDireccion de memoria de la variable: %p",&variable);
    printf("\nDireccion de memoria del puntero: %p",&puntero);
    printf("\nTamanio de memoria utilizado por variable: %zu bytes",sizeof(variable));
    printf("\nTamanio de memoria utilizado por el puntero: %zu bytes",sizeof(puntero));



    return 0;
}