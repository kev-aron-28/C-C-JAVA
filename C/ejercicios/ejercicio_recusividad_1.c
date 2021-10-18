#include <stdio.h>
#include <string.h>

int vocales(char string[5], int i);

int main(){

    char vowel[5] = "abcei";

    printf("La palabra tiene %d vocales",vocales(vowel, 0));
    return 0;
}

int vocales(char string[5], int j){
    
    if(j >= 5 ){
        return 0;
    }

    if(string[j] == 'a' || string[j] == 'e' || string[j] == 'i' || string[j] == 'o' || string[j] == 'u'){
        return vocales(string, j+1) + 1;
    } else {
        return vocales(string, j + 1) + 0;
    }



}

