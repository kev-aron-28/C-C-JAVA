#include <stdio.h>

int funcion_apuntador(int i, int j);


int main(){


    // Apuntadores constantes
    int x = 9;
    int y = 10;
    int *const p1 = &x;
    printf("%d", *p1); 
    *p1 = y;
    printf("%d", *p1);
    // p1 = &y; Esto no se puede 


    // Apuntadores a constantes

    const int num = 1;
    const int num2 = 3;
    const int *n = &num;
    printf("%d", *n );
    n = &num2;
    printf("%d", *n );
    // *n = 12; No es permitido

    printf("\n");
    // Apuntadores a funciones

    int(*funcion) (int, int);
    int resultado;
    funcion = funcion_apuntador;
    resultado = funcion(2,3);
    printf("El resultado es: %d", resultado);
    return 0;
}


int funcion_apuntador(int i, int j){
    return i+j;
}