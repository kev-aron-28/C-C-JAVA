#include <stdio.h>


int fibonacci_recusive(int n){
    if(n == 0 || n == 1){
      return n;  
    }  else {

     return fibonacci_recusive(n - 2) + fibonacci_recusive(n - 1);
    }

}

int main(void){
    
    int i;

    do{
        printf("Introduce el numero de digitos de la serie");
        scanf("%d", &i);
    }while(i <= 1);

    puts("\tLos numeros son\n");
    printf("0, 1");
    
    for(int j = 2; j < i; j++)
        printf(" , %d", fibonacci_recusive(j));
    
    return 0;
}