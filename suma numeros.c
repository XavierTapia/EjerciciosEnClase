#include <stdio.h>
#include <stdlib.h>

int main(){
    int suma=0,cont=1,num,cantNum;
    printf("Cuantos numeros va a ingresar: ");
    scanf("%d",&cantNum);
    printf("\n");
    while(cont<=cantNum){
        printf("ingrese un numero: ");
        scanf("%d",&num);
        suma=suma+num;
        cont++;
    }
    printf("\nla suma de %d numero(s) es %d\n",cantNum,suma);
    return 0;
}
