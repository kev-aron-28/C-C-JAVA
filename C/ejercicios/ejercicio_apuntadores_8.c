#include <stdio.h>
#include <math.h>

int area_triangulo(int b, int a);
int cuadrado(int ba, int b);
int circulo(int r, int pi);

int main(){

    int resultado, v1, v2; 
    int (*f) (int, int);
    // \n
    printf("Que deseas obtener?");
    scanf("%d", &resultado);

    printf("\nIngresa el valor 1: ");
    scanf("%d", &v1);

    printf("\nIngresa el valor 2: ");
    scanf("%d", &v2);

    switch(resultado){
        case 0: 
            f = area_triangulo;
        break;
        case 1:
            f = cuadrado;
        break;
        case 2: 
            f = circulo;
        break;
        default:
            f = area_triangulo;
    }

    int res = f(v1, v2);
    printf("EL resultado es: %d", res);



    return 0;
}


int area_triangulo(int b, int a){
    return (b * a) / 2;
}


int cuadrado(int ba, int b){
    return ba * b;
}

int circulo(int r, int pi){
    return pi * pow(r, 2);
}