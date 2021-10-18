#include <stdio.h>

int max(int numbers[5], int i);

int main(void){
    int i = 0;
    int n[5] = {4,5,1,2,7};
    int ma = max(n, i);
    printf("Maximo es %d", ma );
    return 0;
}


int max(int numbers[5], int i){

    int m = numbers[i]; // => 5

    if(i >= 4){
        return m;
    }

    if(m < numbers[i+1]){
        m = numbers[i+1];
        return max(numbers, i + 1);
    } else {
        return max(numbers, i + 1);
    }


}
