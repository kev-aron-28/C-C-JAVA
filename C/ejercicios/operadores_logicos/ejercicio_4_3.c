#include <stdio.h>

void result(int a, int b, int c, int d, int e, int f);
int main(){
    int a = 2, b = 3, c = 7, d = 3, e = -4, f = 2;
    result(a,b,c,d,e,f);
    return 0;
}

void result(int a, int b, int c, int d, int e, int f){
    int x = ((c*e) - (b*f)) / ((a*e) - (b*d));
    int y = ((a*f) - (c*d)) / ((a*e) - (b*d));

    printf("x = %d, y = %d", x, y);
}
