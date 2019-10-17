#include <stdio.h>

int main(){
    int tabla,res=0,cont=1,lim;
    printf("Ingrese la tabla: ");
    scanf("%d",&tabla);
    printf("ingrese el limite de la tabla: ");
    scanf("%d",&lim);
    printf("\n");
    while(cont<=lim){
        res=tabla*cont;
        printf("%d x %d = %d\n",tabla,cont,res);
        cont++;
    }
    return 0;
}
