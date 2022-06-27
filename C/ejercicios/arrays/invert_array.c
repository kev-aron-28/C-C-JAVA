#include <stdio.h>
void full_repited(int *arr, int size);

int main() {

    int len;
    printf("Ingrese la cantidad de numeros \n");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Ingresar el numero %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    full_repited(arr, len);
    
    return 0;
}

void full_repited(int *arr, int size) {

    int current, i;
    for (i = 0; i < size; i++)
    {
        for (int k = 1; k < size; k++)
        {
            if(arr[i] == arr[k]) {
                arr[k] = -1;
            }
        }
        
    }

    for (i = 0; i < size; i++)
    {
        printf(" %d  ", *(arr + i));
    }
    

    

}
