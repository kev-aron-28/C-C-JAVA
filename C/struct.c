#include <stdio.h>


int main(){

    // struct <nombre de estructura>{
    //     <tipo de dato> <nombre de propiedad> 
    //     <tipo de dato> <nombre de propiedad>... 
    // }

    struct alumno{
        char name[20];
        int age;
    };

    struct alumno a1 = {
        "Kevin",
        20
    };
    printf("El nombre del alumno es %s \n", a1.name );
    printf("La edad del alumno es %d \n", a1.age );

    struct alumno a2;
    printf("Ingresa el nombre del alumno: ");
    gets(a2.name);
    printf("\n");
    printf("Ingresa la edad del alumno: ");
    scanf("%d", &a2.age);
    
    printf("El nombre del alumno 2 es %s \n", a2.name );
    printf("La edad del alumno 2 es %d \n", a2.age );

    struct libro{
        char name[20];
        float price;
    };

    struct libro l1 = {
        "Sin nombre",
        20.5
    };
    struct libro *pz;
    pz = &l1;
    printf("El nombre del libro es %s", pz->name);

    return 0;
}