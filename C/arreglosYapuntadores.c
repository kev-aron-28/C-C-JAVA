￼include <stdio.h>


int main (){
    int i = 0; 
    // Arreglos y punteros 
    int numb[] = {1,2,3,4,5};
    for(i = 0; i < 5; i++){
        printf("Los elementos son: %d", *(numb + i));
        printf("\n");
    }

    char n[2][10] = 
    { {"jose"},               
    {"kevin"} };

    for(int j = 0; j < 2; j++) {
        printf("El elemento %d es: %s ", j, *(n+j));
    }

    // Array de apuntadores 
    printf("\n");


    int *p[10];
    for(i = 0; i < 10; i++){
        *(p+i) = i*10;
    }

    printf("\n");
    for(i = 0; i < 10; i++){
        printf("%p", p+i);
    }
    
    printf("\n");
    // Apuntador a una arreglo 

    int (*pr) [10];
    pr = &p;
    printf("%p == %p", pr, &p);
    printf("%d", *pr[1]);

    char abc[] = "abcdefghijklmñopqrstvywz";
    char *c = &abc[0];
    for(int contador = 0; contador < 10; contador++){
        printf("El siguiente caracter es : %c", *c++);
        printf("\n");
    }



    return 0;
}
