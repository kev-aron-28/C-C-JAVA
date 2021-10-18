#include <stdio.h>

int main(){

    const int size = 10;

    for(int fila = 1; fila <= size; fila++){

        printf("\n");
        for(int i = 0; i < size - fila; i++){
            printf(" ");
        }

        for(int j = 1; j < fila * 2; j++){

            printf("*");
        }



    }

     for(int fila = size; fila > 1; fila--){

        printf("\n");
        for(int i = 0; i < size - fila; i++){
            printf(" ");
        }

        for(int j = 1; j < fila * 2; j++){

            printf("*");
        }



    }
    return 0;

}
