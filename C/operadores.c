#include <stdio.h>


void prove(int l){

    printf( "%d", l == 2 ? 1 : 0);
}


int main(){
    
    int valor;
    char nombre[20]; 
    
    puts("Ingresa tu nombre ");
    gets(nombre);

    printf("La longitud es %d", sizeof(nombre));


    

    return 0;
}