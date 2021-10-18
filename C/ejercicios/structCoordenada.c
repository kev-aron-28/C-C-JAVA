#include <stdio.h>
#include <math.h>

typedef int Punto;

struct Coordenada{
    Punto x;
    Punto y;
};
typedef struct Coordenada Co;
void distancia(Co a, Co b);


int main(){

    Co a, b;

    printf("Introduce x de a:");
    scanf("\n%d", &a.x);
    printf("Introduce y de a:");
    scanf("\n%d", &a.y);
    printf("Introduce x de b:");
    scanf("\n%d", &b.x);
    printf("Introduce y de b:");
    scanf("\n%d", &b.y);
    distancia(a, b);

    return 0;
}


void distancia(Co a, Co b){
    int x1 = pow((b.x - a.x), 2);
    int y1 =  pow((b.y - a.y), 2);
    int result = sqrt(x1 + y1);
    printf("\n");
    printf("La distancia en entre los puntos A(%d, %d), B(%d, %d) es: %d", a.x, a.y, b.x, b.y, result);
}