#include <stdio.h>

long factorial(int n);
void pascal(int rows);
int main() {
    int crows;
    printf("Rows: ");
    scanf("%d", &crows);
    pascal(crows);
    return 0;
}

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

void pascal(int rows){
    int c;
    for (int i = 0; i < rows; i++)
    {
        // for (c = 0; c <= (rows - i - 2); c++)
        // {
        //   printf(" ");   
        // }

        for (c = 0; c <= i; c++)
        {
          printf("%ld", factorial(i) / ( factorial(c) * factorial(i - c) ));
        }
        printf("\n");
    }
    
}