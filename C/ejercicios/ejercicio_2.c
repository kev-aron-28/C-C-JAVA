#include <stdio.h>


int main(){

    // 24 => 12
    float hora;

    printf("Introduce una hora para convertir de formato 12hrs => 24 hrs \n");
    scanf("%g", &hora);


    if(hora <= 12.00 ){
        printf("%g", hora);
    } else {
        float op;
        op = hora - 12.00;

        printf("La hora es %g \n", op);
    }
    return 0;
}