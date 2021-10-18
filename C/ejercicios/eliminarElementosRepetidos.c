#include <stdio.h>


void eliminate(int a[], int n);
void order(int a[], int n);
void showArray(int a[], int n);

int main(){

    int numbers[10];
    int size = 10;
     for(int i = 0; i < size; i++){
        printf("Ingresa los numeros del arrray: \n");
        scanf("\n %d", &numbers[i]);
    }
    eliminate(numbers, size);
    return 0;
}

void eliminate(int a[], int n){
    int k;
    int tam = n;
    for(int i = 0; i < tam; i++){
        
        for(int j = i+1; j < tam; j++){
            k = j;
            if(a[i] == a[j]){ 
                while(k < tam){
                    a[k] = a[k+1]; //Se recorre los elementos del array una posición atras para quitar el elemento repetido
                    k++; //Se incrementa k para pasar al siguiente elemento
                }
                tam--; //Se disminuye el tamaño, pues la lista tendra menos elementos
                j--;
            }
        }
    }
    showArray(a, tam);

}

void order(int a[], int n){

    int minIndex, aux;

    for(int i = 0; i < n - 1; i++){
        minIndex = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[minIndex]){
                    minIndex = j;
                }
            }
        aux = a[i];
        a[i] = a[minIndex];
        a[minIndex] = aux;
    }
}

void showArray(int a[], int n ){
    for(int i = 0; i < n; i++){
        printf("El numero en la posicion a[%d] = %d \n", i ,a[i]);
    }
}