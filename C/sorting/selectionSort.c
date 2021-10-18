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

    int minIndex, aux;

    for(int i = 0; i < n - 1; i++){
        minIndex = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[minIndex]){
                    minIndex = j;
                }
            }
        aux = a[i];
        a[i] = a[minIndex];
        a[minIndex] = aux;
    }
    
    showArray(a, n);
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}