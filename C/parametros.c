#include <stdio.h>


int cuadrado1(int a){
    a = a*a;
    return a;
}

int cuadrado2(int *a){
    
   *a = (*a)*(*a);
   return *a;
}



int main(){

    // Por valor
    int a = 5;
    int resultado = cuadrado1(a);
    printf("El resultado pasando por valor es : %d\n", resultado);
    printf("El valor de a es %d \n", a);

    //Por referencia 
    int b = 5;
    int resultado2 = cuadrado2(&b);
    printf("El resultado pasado por refencia es %d \n", resultado2);
    printf("El valor de b es %d", b);

    return 0;
}