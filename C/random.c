#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))


int main (void){
    
    int i;
    randomize;

    for(int j = 0; j < 10; j++)
        printf("%d \n",  random(100));

    return 0;
}