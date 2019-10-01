#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[4];
    float precio[2],subtotal,iva,total,p1,p2;
    long int ced;
    int cant[2];
    printf("Ingrese el nombre del cliente: ");
    scanf("%s",name);
    printf("ingrese la cedula del cliente: ");
    scanf("%ld",&ced);
    printf("productos comprados: 2\n\n");
    //scanf("%d",&x);
    char prod[2][8];
    for(int i=0;i<2;i++){
        fflush(stdin);
        printf("Ingrese la descripcion del producto %d: ",i+1);
        scanf("%s",prod[i]);
        fflush(stdin);
        printf("ingrese el precio del producto %d: ",i+1);
        scanf("%f",&precio[i]);
        fflush(stdin);
        printf("ingrese la cantidad que compro del producto %d: ",i+1);
        scanf("%d",&cant[i]);
        fflush(stdin);
        printf("\n");
    }
    system("pause");
    system("cls");
    printf("************FACTURA*************\n");
    printf("Nombre: %s\n",name);
    printf("cedula: %ld\n",ced);
    printf("cantidad de productos comprados: 2\n\n");
    for(int i=0;i<2;i++){
        printf("Descripcion del producto %d: %s\n",i+1,prod[i]);
        printf("Precio del producto %d: %.2f\n",i+1,precio[i]);
        printf("Cantidad comprada del producto %d: %d\n\n",i+1,cant[i]);
    }
    p1=cant[0]*precio[0];
    p2=cant[1]*precio[1];
    subtotal=p1+p2;
    iva=subtotal*0.12;
    total=subtotal+iva;
    printf("subtotal: %.2f\n",subtotal);
    printf("IVA 12%: %.2f\n",iva);
    printf("total: %.2f\n",total);
    return 0;
}
