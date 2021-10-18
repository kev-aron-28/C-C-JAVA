#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f;
    char nm[] = "prueba.txt";

    f = fopen(nm, "rt");

    if(f == NULL){
        printf("Ocurrio un error abriendo el archivo ");
    }

    fclose(f);

    return 0;
}