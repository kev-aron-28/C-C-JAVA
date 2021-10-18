#include <stdio.h>


int menor(int *elemnt, int tam);

int main(){


    int arr[5];
    for(int i=0; i<5; i++){
        printf("Ingresa el elemento %d:", i+1);
        scanf("%d" ,&arr[i]);
    }


    int result = menor(&arr[0], 5);
    printf("El menor es %d", result);


    return 0;
}



int menor(int *elemnt, int tam){

    int menor = *(elemnt);
    for(int j = 0; j < tam; j++){

        if(menor > *(elemnt++)){
            menor = *(elemnt++);
        }

    }

    return menor;

}