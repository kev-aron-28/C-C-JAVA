#include <stdio.h>

// m = 1000, d = 500, c = 100, l = 50, x = 10, v = 5, 

int rom(char l[5]);

int main(void){

    char number[5];

    for (int i = 0; i < 5; i ++){
        printf("Ingresa la letra: ");
        scanf("%c ", &number[i]);
    }
    
    int total_number = rom(number);
    printf("%d ", total_number);
    return 0;
}


int rom(char l[5]){

    int r = 0;        
    for (int i = 0; i < 5; i ++){
        if(l[i] == 'm'){
            r = r + 1000;
        } else if(l[i] == 'd'){
            r = r + 500;
        } else if(l[i] == 'c'){
            r = r + 100;
        } else if(l[i] == 'l'){
            r = r + 50;
        } else if(l[i] == 'x'){
            r = r + 10;
        } else if(l[i] == 'v'){
            r = r + 5;
        } else {
            r = r + 1;
        }
    }

    return r;

}




