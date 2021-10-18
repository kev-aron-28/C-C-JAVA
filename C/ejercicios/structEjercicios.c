#include <stdio.h>

enum estado {
    moroso, atrasado, pagado
};
typedef enum estado Estado;

struct factura
{
    char nombre[10];
    int candidad;
    int total;
    Estado estado_producto;
};

void show_factura(struct factura pp[3]);
void show_more_100(struct factura pp[3]);

int main(){

    struct factura f[3];
    Estado e;
    int contador = 0;
    do
    {
        printf("\n");
        puts("Ingresa el nombre : "); 
        scanf("%s", &f[contador].nombre);

        printf("Ingresa la cantidad de productos: "); 
        scanf("\n%d", &f[contador].candidad);

        printf("Ingresa el total a pagar: ");
        scanf("\n%d", &f[contador].total);

        printf("Ingresa el estado del producto: ");
        scanf("\n%d", &e);

        f[contador].estado_producto = e;
        contador++;
    } while (contador < 3);
     printf("\n");
    show_factura(f);
    return 0;
}


void show_factura(struct factura pp[3]){
     printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("Factura %d", i);
        printf("\n");
        printf("Nombre: %s", pp[i].nombre);
        printf("\n");
        printf("Cantidad de productos: %d", pp[i].candidad);
        printf("\n");
        printf("Total a pagar: %d", pp[i].total);
        printf("\n");
        printf("Estado de producto %d", pp[i].estado_producto);  
        printf("\n");
    }

    show_more_100(pp);
    
        
}


void show_more_100(struct factura pp[3]){
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        if(pp[i].total > 100){
            printf("Clientes con pagos mayor a $100: %s", pp[i].nombre);
            printf("\n");
        }
    }
    

}