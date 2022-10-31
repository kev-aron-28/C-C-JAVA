#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(int argc, char const *argv[])
{
    int a[SIZE][SIZE][SIZE];
    int counter = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                a[i][j][k] = i + j + k + counter;
                counter++;
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                printf(" %d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int rowUser, columnUser, result;
    printf("Ingrese la fila ");
    scanf("%d", &rowUser);
    printf("Ingrese la columna ");
    scanf("%d", &columnUser);

    for (int sumCounter = 0; sumCounter < SIZE; sumCounter++)
    {
        result += a[rowUser][columnUser][sumCounter];
    }
    printf("La suma es %d ", result);
    return 0;
}
