#include <stdio.h>

int cuadrado_numero(int *numero){ // a)
    return (*numero)*(*numero);
}

void cuadrado_numero_void(int *numero){ // b)
    *numero=(*numero)*(*numero);
}

void mostrar_informacion(int *numero){ // c)
    printf("\nDireccion de la variable: %p",numero);
    printf("\nContenido de la variable: %d", *numero);
}

void invertir(int *primero, int *segundo){ // d)
    int aux=*primero;
    *primero=*segundo;
    *segundo=aux;
}

void ordenar(int *primero, int *segundo){ // e)
    if(*primero>*segundo){
        invertir(primero,segundo);
    }
}

int main(){
     
    int variable1, variable2;
    printf("Ingrese el valor de la variable 1: ");
    scanf("%d",&variable1);
    printf("Ingrese el valor de la variable 2: ");
    scanf("%d",&variable2);

    printf("\n INFORMACION DE LAS VARIABLES");
    mostrar_informacion(&variable1);
    mostrar_informacion(&variable2);


    int resultado=cuadrado_numero(&variable1);// me toma mi variable1 y me devuelve su cuadrado
    printf("\n\nEl cuadrado de la variable 1 es: %d", resultado);

    int copia=variable1;//uso una copia para no alterar la variable1 y poder usarla en ordenar y invertir
    cuadrado_numero_void(&copia);
    printf("\nEl cuadrado de la variable 1 es (void): %d",copia);

    printf("\n\nAntes de invertir: a=%d y b=%d",variable1, variable2);
    invertir(&variable1,&variable2);
    printf("\nDespues de invertir: a=%d y b=%d",variable1, variable2);

    printf("\n\nOrdenando de menor a mayor");
    ordenar(&variable1,&variable2);
    printf("\nResultado: menor=%d y mayor=%d", variable1, variable2);



    return 0;
}