#include <stdio.h>

void obtainElements();
void showElements(int array[3][2]);
int addElements(int arrray[3][2]);


int main(){
    obtainElements();
    return 0;
}


void obtainElements(){
    int array[3][2];
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 2; j++){
            printf("Ingresa el numero: ");
            scanf("%d", &array[i][j]);
        }
    }
    showElements(array);
    printf("\n");
    printf("La suma total de los elementos del array es =  %d", addElements(array));
}

int addElements(int array[3][2]){

    int result = 0;
    
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 2; j++){
           
           result += array[i][j];
        }
    }

    return result;
}


void showElements(int array[3][2]){
    puts("El array es el siguiente ");
    printf("\n");
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 2; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

}