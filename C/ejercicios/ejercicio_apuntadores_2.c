#include <stdio.h>


int main(){


    int arreglo[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int *contador = &arreglo[0][0];

    for(int i = 0; i < 9; i++){
        printf("EL numero es: %d", *contador++);
    }


    return 0;
}