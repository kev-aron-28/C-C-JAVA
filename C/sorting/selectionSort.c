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

    int min, temp;
    for(int i=0; i < n - 1 ; i++){
        min = i;

        for(int j=i+1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }

        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    showArray(a, n);
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}