#include <stdio.h>

void draw();

int main(){
    draw();

    return 0;
}

void draw() {
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 12; j++){
            if(i == 0 || i == 5 || j == 0 || j == 11){
                printf("*");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}
