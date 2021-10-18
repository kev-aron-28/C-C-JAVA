#include <stdio.h>
#include <string.h>

void showStr(char* word);

int main(){
    
    char nombre[30];

    puts("\n Introduce la palabra \n");
    gets(nombre);


    while(*nombre){

        puts(nombre);
        showStr(nombre);
    }    
    return 0;
}


void showStr(char* word){

    int j = strlen(word)-1;

    while(j > 0 && word[j] != ' '){
        j--;
    }
    word[j] = '\0';

}



