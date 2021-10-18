#include <stdio.h>

int main(int argc){
    
    char op;

    puts("Ingresa una letra ");
    scanf("%c", &op);

    switch (op)
    {
    case 'A': case'a': 
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'U' : case 'u': 
        printf("Es una vocal");

        break;
    
    default:
        puts("No es una vocal");
        break;
    }
    
    
    
    return 0;
}