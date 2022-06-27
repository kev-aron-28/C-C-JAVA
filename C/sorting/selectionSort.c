#include <stdio.h>


void selectionSort(int a[], int n );
void showArray(int a[], int n );

int main(){

    int numbers[5];
    printf("Ordenamiento por seleccion \n");

    for(int i = 0; i < 5; i++){
        printf("Ingresa el numero : ");
        scanf("\n %d", &numbers[i]);
    }
    selectionSort(numbers, 5);
    return 0;
}

void selectionSort(int a[], int n ){

    int max, aux;

    for(int i = 0; i < n - 1; i++){
        max = 0;
        for(int j = 1; j < n - i; j++) { // l < 6
            if(a[j] > a[max]){ // 5 > 0 
                max = j; // max = 1
            }
        }
        aux = a[n - 1 - i]; //temp = a[5] = temp= 1 
        a[n - 1 - i] = a[max]; // a[1] = 5  
        a[max] = aux; // a[1] = 1
    }

    showArray(a, n);
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}