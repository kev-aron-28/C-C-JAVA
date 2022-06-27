#include <stdio.h>

int main(){
    const int max = 10;
    
    for(int i = 0; i < max; i++){

        printf("\n");

        for(int j = 1; j < i; j++){
            printf("%d ", j);
        }

    }

    for(int i = max; i >= 0; i--){

        printf("\n");

        for(int j = 1; j < i; j++){
            printf("%d ", j);
        }

    }
    
    
    return 0;
}
