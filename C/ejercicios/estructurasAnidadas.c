#include <stdio.h>

typedef char* String;
typedef int MesNac;

enum meses_nacimiento{
    enero,
    febrero,
    marzo,
    abril,
    mayo,
    junio,
    julio,
    agosto,
    septiembre,
    octubre, 
    noviembre,
    diciembre
};
typedef enum meses_nacimiento Mes;

struct nombre_completo{
   String nombre[10];
   String apellido[10];
};
typedef struct nombre_completo Nombre;

struct persona
{
    Nombre nom_persona;
    Mes nac_persona;

};
typedef struct persona P;

P registar_datos(){
    P kevin;
    MesNac m; 
    printf("Ingresa el nombre de la persona: ");
    gets(kevin.nom_persona.nombre);
    printf("Ingresa el apellido de la persona: ");
    gets(kevin.nom_persona.apellido);
    printf("Mes de nacimento: ");
    scanf("\n%d", &m);
    kevin.nac_persona = m;
    
    return kevin;
}

int main(){

    P kevin;
    kevin = registar_datos();
    printf("El nombre es: %s \n", kevin.nom_persona.nombre);
    printf("El apellido es: %s \n", kevin.nom_persona.apellido);
    printf("El mes de nacimiento es: %d \n", kevin.nac_persona);


    return 0;
}