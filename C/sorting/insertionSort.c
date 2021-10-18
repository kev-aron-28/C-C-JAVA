#include <stdio.h>

//O(n2)
void insertionSort(int a[], int n);
void showArray(int a[], int n );

int main(){

    int numbers[5];
    printf("Ordenamiento por seleccion \n");

    for(int i = 0; i < 5; i++){
        printf("Ingresa el numero : ");
        scanf("\n %d", &numbers[i]);
    }
    insertionSort(numbers, 5);

    return 0; 
}

void insertionSort(int a[], int n){

    int aux, j;

    for(int i = 1; i < n; i++){
        j = i;
        aux = a[i];
        while(j > 0 && aux < a[j-1]){
            a[j] = a[j - 1];
            j--;
        }
        a[j] = aux;
    }

    showArray(a,n);
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}