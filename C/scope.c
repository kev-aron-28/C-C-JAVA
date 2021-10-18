#include <stdio.h>

const char name = 'k'; //Scope global, puede ser usado en cualquier ambito del programa

static int variable_archivo_fuente; //Variable con scope de archivo fuente


void name_func(){
    int i = 0; // Scope de funcion, "locales"
    printf("kevin");
}

int main (){
    

    if(5 > 6){
        int j = 1; // Scope de bloque
    }

    printf("%c", name);
    
    
    return 0;
}