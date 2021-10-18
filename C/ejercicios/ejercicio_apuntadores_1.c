#include <stdio.h>

int main(){
    typedef char String;
    char *p;

    String cadena[10];

    puts("Ingrese la cadena");
    gets(cadena);

    p = cadena;

    while(*p){

        if((*p >= 'a'  )&&  (*p <= 'z')){
            *p++ = *p - 32;
        } else {
            p++;
        }
    }

    puts("La cadena convertida a mayusculas es:");
    puts(cadena);

    return 0;
}