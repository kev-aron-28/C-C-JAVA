#include <stdio.h>
#include <string.h>



void orderWords(char words[5][10]);

int main(){

    char words[5][10];


    for(int i = 0; i < 5; i++){
        printf("Introduce la cadena ");
        scanf("\n%s", &words[i]);
    }

    orderWords(words);
    return 0;
}


void orderWords(char words[5][10]){

    char orderedWords[5][10];
    char aux[10];
    int interruptor = 1;
    for(int pasada = 0; pasada < 5 && interruptor; pasada++){
        interruptor = 0;
        for(int j = 0; j < 5 - pasada - 1; j++){

            if(words[j][0] > words[j + 1][0]){
                strcpy(aux, words + j);
                strcpy(words[j], words + j + 1);
                strcpy(words[j+1], aux);
            }

        }

    }


    for(int k = 0; k < 5; k++){
        printf("\n Las palabras ordenadas son  = %s", words + k);
    }

    
}