#include <stdio.h>

void averageClass(int a[3][5]);


int main(){

    int grades[3][5];
    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna <5; columna++ ){
            printf("Ingresa la %d calificacion del alumno %d = ", columna, fila);
            scanf("\n%d", &grades[fila][columna]);
        }
        printf("\n");
    }
    averageClass(grades);
    return 0;
}

void averageClass(int a[3][5]){
    int finalgrade = 0;
    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna <5; columna++ ){
            finalgrade += a[fila][columna];
        }
    }

    printf("El promedio total de la clase es  = %d", finalgrade/15);

}