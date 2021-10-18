#include <stdio.h>

//O(n2)

void bubbleSort(int arrayNumbers[], int n);
void showArray(int a[], int n);

int main(){

    int numbers[5]; 
    printf("Ordenacion por Bubble sort \n");

    for(int i = 0; i < 5; i++){
        printf("Ingresa los numeros del arrray: \n");
        scanf("\n %d", &numbers[i]);
    }

    bubbleSort(numbers, 5);
    return 0;
}


void bubbleSort(int arrayNumbers[], int n){

    for(int i = 0; i < n - 1; i++ ){
        for(int j = 0; j < n - i - 1; j++){
            if(arrayNumbers[j] > arrayNumbers[j + 1]){
                int aux = arrayNumbers[j];
                arrayNumbers[j] = arrayNumbers[j + 1];
                arrayNumbers[j + 1] = aux; 
            }
        }
    }

    showArray(arrayNumbers, n);
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}