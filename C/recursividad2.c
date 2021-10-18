//Suma de los terminos de un numero 
#include <stdio.h>

int iterativo(int n){

    int suma = 0;

    while(n > 9){
        suma = suma + n%10;
        n/=10;
    }

    return suma + n;
}


int recursivo(int n ){
    
    if(n <= 9){
        return n;
    } else {
        return recursivo(n/10) + n%10;
    }
}

int main(void){
    
    printf("El resultado iterativo es : %d \n", iterativo(240));
    
    printf("El resultado recursivo : %d \n " ,recursivo(240));
    
    return 0;
}