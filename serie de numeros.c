#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,cont=1,suma=0;
    printf("Cuantos numeros va a ingresar: ");
    scanf("%d",&num);
    printf("\n");
    /*while(cont <= num){
        suma=suma+cont;
        printf("%d\n",cont);
        cont++;
    }*/
    for(cont=1 ; cont<=num ; cont++){
        suma=suma+cont;
        printf("%d\n",cont);
    }
    printf("\nLa suma de %d numeros es %d\n",num,suma);
    return 0;
}
