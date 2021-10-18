#include <stdio.h>

int main(){

    int c, i = 0; //
    FILE * pf;
    char *nombre = "myfile.txt";
    if((pf = fopen(nombre, "rt")) == NULL){
        puts("Ocurrio un error");
        return 1;
    }

    while((c = getc(pf)) != EOF){
        if(c == '\n'){
            i++;
            printf("\n");
        } else{
            putchar(c);
        }
    }

    fclose(pf);
    return 0;
}