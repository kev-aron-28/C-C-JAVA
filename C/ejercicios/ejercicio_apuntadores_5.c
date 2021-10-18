#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct swimer{
    char name[10];
    char age[10];
    char test[10];
    char time[6];
};
typedef struct swimer persona;

void full_swimer(persona *p);
int des_standar(persona *p);
float promedio(persona *pp);

int main(){
    persona p[2];
    for(int i = 0; i < 2; i++){
        printf("Nadador %d: ", i+1);
        printf("Ingresa la edad del nadador %d: ", i+1); gets(&p[i].age);
        printf("Ingresa el nombre del nadador %d: ", i+1); gets(&p[i].name);
        printf("Ingresa la prueba del nadador %d: ", i+1); gets(&p[i].test);
        printf("Ingresa el tiempo total del nadador %d: ", i+1); gets(&p[i].time);
    }
    persona *pp = p;
    des_standar(pp);

    return 0;
} 


void full_swimer(persona *p){
    for(int i = 0; i < 2; i++, p++){
        printf("\n");
        printf("EL nombre del nadador [%d] es %s", i+1,p->name);
        printf("\n");
        printf("La edad del nadador [%d] es %s", i+1, p->age);
        printf("\n");
        printf("La prueba del nadador [%d] es %s", i+1 ,p->test);
        printf("\n");
        printf("La prueba del nadador [%d] es %.2f", i+1 ,atof(p->time));
        printf("\n");
    }
}

int des_standar(persona *p){

    float(*prom)(persona *pp) = promedio;
    float pm = prom(p);
    int contador = 0, sum = 0;
    while(contador < 2){
        sum += (atof(p->time) - pm);
        contador++;
    }
    printf("%g", sum);
    printf("\n%g", pm);

    return 0;
}


float promedio(persona *pp){
    int contador = 0;
    float result = 0.0;
    while(contador < 2){
        result += atof(pp->time);
        contador++;
    }
    return result/5;
}