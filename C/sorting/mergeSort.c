#include <stdio.h>
#include <math.h>
#define LEN 5

void mergesort(int arr[], int temparr[], int lowerindex, int middleindex, int upperindex);
int mergesortutil(int arr[], int temparr[], int lowerindex, int upperindex);
void showArray(int a[], int n );

int main(int argc, char const *argv[])
{
    int arr[] = {0,5,4,3,2};
    int temparr[5];
    mergesortutil(arr, temparr, 0, LEN - 1);
showArray(arr, LEN);
    return 0;
}

int mergesortutil(int arr[], int temparr[], int lowerindex, int upperindex){
    if(lowerindex >= upperindex) {
        return 0;    
    }   

    const int middleindex = floor((lowerindex + upperindex) / 2);

    mergesortutil(arr, temparr, lowerindex, middleindex);
    mergesortutil(arr, temparr, middleindex + 1, upperindex);
    mergesort(arr, temparr, lowerindex, middleindex, upperindex);
    return 0;
}

void mergesort(int arr[], int temparr[], int lowerindex, int middleindex, int upperindex) {
    int lowerstart = lowerindex;
    int lowerstop = middleindex;
    int upperstart = middleindex + 1;
    int upperstop = upperindex;
    int count = lowerindex;

    while(lowerstart <= lowerstop && upperstart <= upperstop) {
        if(arr[lowerstart] < arr[upperstart]) {
            temparr[count++] = arr[lowerstart++];
        } else {
            temparr[count++] = arr[upperstart++];
        }
    }

    while (lowerstart <= lowerstop) {
        temparr[count++] = arr[lowerstart++];
    }

    while(upperstart <= upperstop) {
        temparr[count++] = arr[upperstart++];
    }

    for(int i = lowerindex; i <= upperindex; i++) {
        arr[i] = temparr[i];
    }
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}