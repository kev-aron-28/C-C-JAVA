#include <stdio.h>

int main(){
    
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    //Multidimencionales tipo de dato nombre[filas][columnas];     
    
    int n[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    int sizey = sizeof(n[0]) / sizeof(n[0][0]);
    int sizex = sizeof(n) / sizeof(n[0]);
    
    
    for(int filas = 0; filas < sizex; filas++){
        for(int columas = 0; columas < sizey; columas++){

            printf("indice [%d][%d]= %d \n", filas, columas, n[filas][columas]);
        }
        printf("\n");
    }
    
    return 0;
}