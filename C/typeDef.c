#include <stdio.h>

int main(int argc, char const *argv[])
{

    typedef char* String;
    String nombre = "kevin";
    printf("%s", nombre);

    struct complejo{
        float x,y;
    };

    typedef struct complejo complex;
    complex v[10];

    struct numero
    {   
        complex a;
    };
    

    return 0;
}
