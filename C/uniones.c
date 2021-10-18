#include <stdio.h>

int main (){

    // Ahorra memoria y miembros se solapan de na misma posición en memoria 
    // El tamaño lo determina, la variable de mayor tamaño 

    union persona{
        char nombre[20];
        char apellido[20];
    };

    union persona k = {
        "kevin",
        "tapia"
    };

    puts(k.nombre);
    puts(k.apellido);


    return 0;
}