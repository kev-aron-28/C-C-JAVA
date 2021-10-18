#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct {    
    char *nm;
    int dia;
    int ms;
    int aa;
    char mes[11];
} PERSONA;

void entrada(PERSONA* p);
char* mes(short n);

int main(){
   
    FILE *pf;
    char nf[] = "PERSONS.DAT";
    char r = 'S';

    if((pf = fopen(nf, "wt")) == NULL){
        puts("Ocurrio un error");
        exit(-1);
    }
    
    while(toupper(r) == 'S'){
        PERSONA pt;        
        entrada(&pt);
        printf("%s %d-%d-%d %s\n", pt.nm,pt.dia,pt.ms,pt.aa,pt.mes);
        fprintf(pf, "%s %d-%d-%d %s\n", pt.nm,pt.dia,pt.ms,pt.aa,pt.mes);
        printf("Otro registro?: "); scanf("%c%*c", &r);

    }
    fclose(pf)
    return 0;
}

void entrada(PERSONA* p){
    char bf[81];
    printf("Nombre : "); gets(bf);
    p->nm = (char*)malloc((strlen(bf)+1)*sizeof(char));
    strcpy(p->nm, bf);
    printf("Fecha de nacimento (dd mm aa) : ");
    scanf("%d %d %d%*c", &p->dia, &p->ms, &p->aa);
    printf("\n %s\n", mes_asci(p->ms));
    strcpy(p->mes, mes_asci(p->ms));
}


