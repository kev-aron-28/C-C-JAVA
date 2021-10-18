#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int cont_voc(char *c, int size);

int main(){

     char **p;
     int i, j, numeroDeFilas, numeroDeCaracteres;


     do
     {
         printf("Ingresa el numero de palabras: ");
         scanf("%d", &numeroDeFilas);
     } while (numeroDeFilas <= 0);


     p = (char**) calloc(numeroDeFilas, sizeof(char*));
    
    printf("\n");
     for(i = 0; i < numeroDeFilas; i++){
         printf("\nIngresa el numero de caracteres de la palabra: %d", i+1);
         scanf("\n%d", &numeroDeCaracteres);
         p[i] = (char*) calloc(numeroDeCaracteres, sizeof(char));
         printf("\nIngrese la cadena %d: ", i);
         scanf("\n%s", (*p+i));
         int result = cont_voc((*p+i), numeroDeCaracteres);
         printf("\nEl numero de vocales de la palabra %d es = %d", i+1, result );
     }
    
    return 0;   
}


int cont_voc(char *c, int size){

    int count = 0;

    for(int i = 0; i < size; i++) {

        if(*(c+i) == 'a' || *(c+i) == 'e' || *(c+i) == 'i' || *(c+i) == 'o' || *(c+i) == 'u'){
            count++;
        }   


    }


    return count;
}