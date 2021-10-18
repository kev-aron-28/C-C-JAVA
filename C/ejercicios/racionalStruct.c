#include <stdio.h>

typedef int Entero;
struct racional{
    Entero numerador;
    Entero denominador;
};
typedef struct racional Fraccion;


void suma(Fraccion pp[2]);

int main(){

    Fraccion a[2];
    for (int i = 0; i < 2; i++){
        printf("Ingresa el numerador de la fraccion %d: ", i);
        scanf("%d",&a[i].numerador);
        printf("\n");
        printf("Ingresa el denomidador de la fraccion %d: ", i);
        scanf("%d",&a[i].denominador);
        printf("\n");
    }
    suma(a);
    return 0;
}


void suma(Fraccion pp[2]){
    Fraccion result;
    int n, d;
    n = (pp[0].numerador * pp[1].denominador) + (pp[0].denominador * pp[1].numerador);
    d = (pp[0].denominador * pp[0].denominador);
    result.numerador = n;
    result.denominador = d;
    printf("%d/%d + %d/%d \n", pp[0].numerador, pp[0].denominador, pp[1].numerador, pp[1].denominador );
    printf("%d / %d", result.numerador, result.denominador);
}