#include <stdio.h>
#include <math.h>

int rectangulares();

int main(void){
    
    rectangulares();
}


int rectangulares(){
    
    double r = 5;
    int o = 45;
    double y = r * sin(45);
    double x = r * cos(45);
    printf("(%.2lf,  %.2lf)  ", x, y);

    return 0;

}