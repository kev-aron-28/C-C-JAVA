#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum semana{
        LUNES, 
        MARTES, 
        MIERCOLES,
        JUEVES,
        VIERNES, 
        SABADO, 
        DOMINGO
};
typedef enum semana Day;

struct patient
{
    char nombre[10];
    char pro_med[10];
    Day date;
};
typedef struct patient Pa;

void data(Pa *pp);



int main(){

    struct patient f[3];
    Day e;
    int contador = 0;
    do
    {
        printf("\n");
        puts("Ingresa el nombre : "); 
        scanf("%s", &f[contador].nombre);

        printf("Ingresa el problema medico: "); 
        scanf("\n%s", &f[contador].pro_med);

        printf("Ingresa el dia: ");
        scanf("\n%d", &e);

        f[contador].date = e;
        contador++;
    } while (contador < 3);
    Pa *p;
    p = f;
    for(int i = 0; i < 3; i++, p++){
        data(p);
    }
    return 0;
}


void data(Pa *pp){

    if(pp->date == 1){
        printf("El paciente que asiste el martes es: ", pp->nombre);
    }

}