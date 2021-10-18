#include <stdio.h>

int main(){


    for(int i = 1; i < 10; i++){
        
        if(i > 1 ){
            printf("7.");
        }

        
        for(int j = 1; j < i; j++){
             printf("%d ", j);
        }

            printf("\n");

    }
    return 0;
}