#include <stdio.h>


int main(int argc, char const *argv[])
{
    enum semana{
        LUNES, 
        MARTES, 
        MIERCOLES,
        JUEVES,
        VIERNES, 
        SABADO, 
        DOMINGO
    };

    enum semana dia;

    for(dia = LUNES; dia <= DOMINGO; dia++){
        printf("%d", dia);
    }
    
    return 0;
}
