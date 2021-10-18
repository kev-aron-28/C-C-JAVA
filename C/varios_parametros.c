#include <stdio.h>
#include <stdarg.h>

int suma(int n, ...);

int main(void){
    
    int s = suma(1,2,3,4,5,6,7,8,9);
    printf("%d", s);
    return 0;
}


int suma(int n, ...){
    int m;
    va_list puntero;
    va_start(puntero, n);
    m = va_arg(puntero, int);

    printf("%d", m);

    va_end(puntero);
    
    return m;
}