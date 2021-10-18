#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    FILE *in, *out;
    char nom1[] = "cartas.txt";
    char nom2[] = "primero.txt";
    char cad[20];

    in = fopen(nom2, "rt");
    out = fopen(nom1, "at");

    if(in == NULL || out == NULL){
        puts("error");
        return 1;
    }

    while(fgets(cad, 20, in)){
        if(strlen(cad) >= 10){
            fputs(cad, out);
        } else {
            puts(cad);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}