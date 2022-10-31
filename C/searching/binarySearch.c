#include <stdio.h>

int binarySearch(int a[], int key, int l, int h);
int binarySearchIterative(int array[], int value, int lower, int high);
int main(){

    int numbers[10]; 
    printf("Busqueda binaria \n");

    for(int i = 0; i < 10; i++){
        printf("Ingresa los numeros del arrray: \n");
        scanf("\n %d", &numbers[i]);
    }

    int result = binarySearchIterative(numbers, 5, 0, 10);

    printf("\nEl numero se encuentra en la posicion =  %d", result);

    return 0;
}


int binarySearch(int a[], int key, int l, int h){

    int center,low, high;
    low = l;
    high = h-1;

    if(low >= high){
        return -1;
    }

    center = (low + high)/2;
    
    if(a[center] == key){
        return center;
    }  else if(a[center] < key){
        return binarySearch(a,key, center + 1, high);
    } else {
        return binarySearch(a, key, low,center - 1);
    }
}


int binarySearchIterative(int array[], int value, int lower, int high) {
    int center;
    int l,h;
    l = lower;
    h = high - 1;
    while(l <= h) {
        center = ((l + h) / 2);
        if(array[center] == value ) {
            return 1;
        } 

        if(array[center] < value) {
            l = center + 1;
        }

        if(array[center] > value) {
            h = center - 1;
        } 
    }

    return -1;
}