#include <stdio.h>

int sumaArray(int n[], int size);
int maximo(int n[], int size);

int main(){

    int numbers[5];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for(int i=0; i < 5; i ++){

        printf("Introduce un número ");
        scanf("%d", &numbers[i]);
    }

    int suma = sumaArray(numbers, size);
    int max = maximo(numbers, size);
    printf("La suma total de los elementos del arreglo es %d \n", suma);
    printf("El elemento más grande es  %d \n", max);


    return 0;
}


int sumaArray(int n[], int size){

    int total = 0;

    for(int j = 0; j < size; j++){
        total = n[j] + total;
    }

    return total;
}


int maximo(int n[], int size){

    int max = n[0];

    for(int i =1; i < size; i++){

        max = (n[i] > max? n[i] : max);

    }


    return max;
}
