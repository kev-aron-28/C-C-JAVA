#include <stdio.h>

float c_f(int c);

int main(){
    const int n = 100;
    float result = c_f(n);
    printf("el resultado es : %.1f", result);
    return 0;
}

float c_f(int c){
    return (1.8 * c) + 32;
}
