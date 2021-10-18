#include <stdio.h>
#include <stdlib.h>
void game();
int check(char s[5], char t);
void showWord(char s[5], char t, char p[5]);

int main() {
    game();
}

void game(){
  
    char ran[5]= "kivin"; 
    char guessed[5] = "00000";
    int tries = 1;
    char word;
    int win = 0;
    
    do{

        if(win == 5){
            printf("******Haz ganado********* ");
            return;
        }

        printf("\nIntroduce la letra: ");
        scanf("\n%c", &word);
        int checked = check(ran, word);
        if(checked == 0){
            printf("Letra no incluida en la palabra \n");
            tries = tries + 1;
        } else {
            win = win + 1;
            printf("Palabra correcta \n");
            showWord(ran, word, guessed);
        }

        

    } while(tries <= 3);
}


int check(char s[5], char t){

    for(int i = 0; i < 5; i ++){
        if(s[i] == t){
            return 1;

        }
    }

    return 0;
}


void showWord(char s[5], char t, char p[5]){
    for(int i = 0; i < 5; i++){
        if(s[i] == t){
            p[i] = t;
        }
    }

    for(int j = 0; j < 5; j++){
        printf(" %c - ", p[j]);
    }
}
