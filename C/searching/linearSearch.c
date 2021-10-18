#include <stdio.h>

int linearSearch(int a[], int size ,int key);

int main(){

    int numbers[10];
    
     for(int i = 0; i < 10; i++){
        printf("Ingresa los numeros del arrray: \n");
        scanf("\n %d", &numbers[i]);
    }

    int result = linearSearch(numbers, 5, 3);

    printf("\nEl numero se encuentra en la posicion =  %d", result);

    return 0;
}

int linearSearch(int a[], int size ,int key){

    for(int i = 0; i < size; i++){
        if(a[i] == size) return i;
    }

    return -1;


}