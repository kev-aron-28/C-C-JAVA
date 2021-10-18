#include <stdio.h>

void mes(int m);

int main(void){

    mes(10);
    return 0;
}

void mes(int m){

    printf("LUNES MARTES MIERCOLES JUEVES VIERNES SABADO DOMINGO");
    int dias[35];
    int n = 0;
    int len = 30;
      for(int i = 0; i < len; i++ ){
        
        if(i <= n){
            dias[i] = 0;
        } else {
            dias[i] = i - n;
        }
    }

    for(int i = 0, k = 0; i < len; i++){
        
        if(k % 7== 0){
            printf("\n");
        }
        k++;
        
        printf("%d \t", dias[i]);
    }
    

}