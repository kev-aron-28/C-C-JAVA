#include <stdio.h>


void turnBackArray();

int main(){

    turnBackArray();

    return 0;
}



void turnBackArray(){

    int n1[3][4] = {
        {4,7,1,3},
        {2,6,9,7},
        {3,1,2,6}
    };

    int n2[4][3];

    for(int filas = 0; filas < 4; filas++){
        for(int columas = 0; columas < 3; columas++){

            n2[filas][columas] = n1[columas][filas];
        }   
    }

        for(int i = 0; i < 4; i ++){
            for(int j = 0; j < 3; j++){
                printf("%d ", n2[i][j]);
            }
            printf("\n");
    }

}