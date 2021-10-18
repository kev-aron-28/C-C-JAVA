#include <stdio.h>


void turnArray(int numbers[5]);

int main(){
    int n[5];

    for(int i = 0; i < 5; i++){
        printf("Introduce los numeros del array: ");
        scanf("\n%d", &n[i]);
    }

    turnArray(n);
    return 0;
}


void turnArray(int n[5]){

    int turned[5];
    int j = 5;
    for(int i = 0; i < 5; i++){

        turned[i] = n[j-1];
        j--;
    }

    printf("Array alreves : \n");

    for(int k = 0; k < 5;k++ ){

        printf("%d \n", turned[k]);
    }
}