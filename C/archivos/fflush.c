#include <stdio.h>

int main(){
    
    FILE * f;
    f = fopen("prueba.txt", "rt");

    if(f == NULL){
        printf("Hubo un error");
        fflush(f);
    }
    fflush(f);

    
    
    return 0;
}