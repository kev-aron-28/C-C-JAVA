#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(){
    
    char unidad;
    char decena;
    char centena;

    printf("Introduce la centena:");
    scanf("%c ", &centena);
    
    printf("Introduce la decena:");
    scanf("%c ", &decena);

    puts(centena);
    puts(decena);

     return 0;

}