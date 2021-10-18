#include <stdio.h>

int fibo(){
    static int x = 0; //mantener valores entre llamadas 
    static int y = 1;

    x = y - x;
    y = y + x;

    return y;
}

int main(){

    auto int n; // Se le asigna el espacio en memoria automaticamente 
    register int i;
    printf("Digita un el numero de la secuencia \n");
    scanf("%d", &n);

    printf("0, 1, 1");

    for(i = 2; i < n; i ++){
        printf(", %d ", fibo());
    }

    return 0;
}