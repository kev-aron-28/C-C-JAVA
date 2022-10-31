#include <stdio.h>

int linearSearch(int a[], int size ,int key);
int linearSearchWithSortedInput(int arr[], int size, int value);
int main(){
    int size = 5;
    int numbers[size];
    
     for(int i = 0; i < size; i++){
        printf("Ingresa los numeros del arrray: \n");
        scanf("\n %d", &numbers[i]);
    }

    int result = linearSearchWithSortedInput(numbers, size, 6);

    printf("\nEl numero se encuentra? =  %d", result);

    return 0;
}

int linearSearch(int a[], int size ,int key){

    for(int i = 0; i < size; i++){
        if(a[i] == key) return 1;
    }

    return -1;


}

int linearSearchWithSortedInput(int arr[], int size, int value) {
    for(int i = 0; i < size; i++){
        if(arr[i] == value) return 1;
        if(value < arr[i]) return -1;
    }
    return -1;
}  