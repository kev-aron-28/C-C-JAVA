#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float fx(float x);
float gx(float x);
float zx(float c);


int main(){

    float (*funcion1)(float) = fx;
    float (*funcion2)(float) = gx;
    float (*funcion3)(float) = zx;
    for(float i = 0; i < 3.5; i = i + 0.2){
        printf("\nEl valor de la funcion en %g es = %g: ", i ,funcion2(i));
        printf("\n%g", i);
    }



    return 0;
}





float fx(float x) {
    float euler = 2.718;   
    return pow(3*euler, x-1)-(2*x);
}
float gx(float x){
    return (-x*sin(x)) + 1.5;
}
float zx(float x){
    return pow(x, 2) - (2*x) + 3;
}
