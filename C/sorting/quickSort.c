#include <stdio.h>

void quickSort(int a[], int init, int last);
void showArray(int a[], int n );

int main(){

    int numbers[10];

    for(int i = 0; i < 10; i++){
        printf("Ingresa el numero : ");
        scanf("\n %d", &numbers[i]);
    }
    quickSort(numbers, 0, 9);
    showArray(numbers, 10);
    return 0;
}


void quickSort(int a[], int init, int last){
    int center, pivot,i,j;
    center = (init + last)/2;
    pivot = a[center];
    i = init;
    j = last;

    do
    {
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;

        if(i <= j){
             int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        
    } while (i <= j);
    
    if(init < j) quickSort(a, init, j);
    if(i < last) quickSort(a, i, last);
}


void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}