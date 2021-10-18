#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    // La forma más usual es la funcion malloc()

    // int *espacioDeMemoria;
    // int n = 10;
    // espacioDeMemoria = (int*) malloc(sizeof(int));
    // espacioDeMemoria = &n;
    // printf("El numero es %d", *espacioDeMemoria);



    // int *arr = (int*) malloc(10*sizeof(int));

    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i] = i * 10;
    // }

    // for(int k = 0; k < 10; k++) printf("El numero es: %d", *arr++);

    // Arreglo bidimensional con malloc

    // int **p;
    // int n,m,i;
    
    // do{
    //     printf("\n Numero de filas: "); scanf("%d", &n);
    // } while(n<=0);
    
    // p = (int**) malloc(n*sizeof(int*));

    // for(i = 0; i < n; i++){
    //     int j;
    //     printf("Número de elementos de fila %d", i+1);
    //     scanf("%d", &m);
    //     p[i] = (int*)malloc(m*sizeof(int));
    //     for(j = 0; j<m; j++)
    //         scanf("%d", &p[i][j]);
    // }


    // liberar memoria

    int *ad;
    ad = (int*)malloc(sizeof(int));

    free(ad);


    // calloc 

    // puntero = (tipo*)calloc(numero de elementos, tamaño de cada elemento);
    
    // int num = 10;
    // int *espacioDeMemoria = (int*) calloc(num, sizeof(int));

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Ingresa el numero %d : ", i+1);
    //     scanf("%d", &espacioDeMemoria[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("El numero es: %d",  *espacioDeMemoria++);
    // }
    

    // // arreglo bidimensional con calloc

    // char **p;
    // int i, j, numeroDeFilas, numeroDeCaracteres;


    // do
    // {
    //     printf("Ingresa el numero de filas: ");
    //     scanf("%d", &numeroDeFilas);
    // } while (numeroDeFilas <= 0);


    // p = (char**) calloc(numeroDeFilas, sizeof(char*));

    // for(i = 0; i < numeroDeFilas; i++){
    //     printf("Ingresa el numero de caracteres de fila: ");
    //     scanf("%d", &numeroDeCaracteres);

    //     p[i] = (char*) calloc(numeroDeCaracteres, sizeof(char));

    //     for(j = 0; j < numeroDeCaracteres; j++){ 
    //         printf("Ingrese la cadena en [%d][%d]", i , j);
    //         scanf("%s", &p[i][j]);
    //     }
    // }



    // realloc(puntero bloque, tamaño total de nuevo bloque);


    char* cadena;
    int tam;
    tam = (strlen("Primavera")+ 1)*sizeof(char);
    cadena = (char*) malloc(tam); strcpy(cadena, "Primavera"); puts(cadena);

    
    tam += (strlen(" en Lupiana\n")+1)*sizeof(char);
    cadena = (char*) realloc(cadena, tam);
    strcat(cadena, " en lupiana\n");
    puts(cadena);
    free(cadena);


    return 0;
}