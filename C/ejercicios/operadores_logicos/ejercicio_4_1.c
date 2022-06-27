#include <stdio.h>

int producto(int n, int j);
int suma(int n, int j);
int resta(int n, int j);
int main(){
    const int n = 10;
    const int j = 5;

    int p = producto(n, j);
    int s = suma(n, j);
    int r = resta(n, j);
    printf("el producto es : %d", p);
    printf("\n");
    printf("la suma es : %d", s);
    printf("\n");
    printf("la resta es : %d", r);
}


int producto(int n, int j){
    return n * j;
}

int suma(int n, int j) {
    return n + j;
}

int resta(int n, int j){
    return n - j;
}
