#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);

int main(){

    int s = suma(2,3);
    int r = resta(4,5);
    int m = multiplicacion(5,4);
    printf("La suma es %d \n", s);
    printf("La resta es %d \n", r);
    printf("La mult es %d", m);
    return 0;
}

int suma(int a, int b){

    return a + b;
}

int resta(int a, int b){
    
    return a - b;
}

int multiplicacion(int a, int b){

    return a * b;
}