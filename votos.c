/*
Los organizadores de un acto electoral solicitaron realizar un programa para manejar el conteo de votos.
En la elección hay cinco candidatos, los cuales se representan con los valores comprendidos entre 1 y 5.
El programa debe obtener el número de votos de cada candidato y el porcentaje que obtuvo respecto al total de los votantes.
Se ingresa los votos  de manera desordenada, el final de ingreso de los votos se representa por un cero.
Ejemplo

INGRESO DE VOTOS:
2 5 5 4 3 5 1 2 4 3 1 2 4 5 0
2 representa un voto para el candidato2
5 representa un voto para el candidato5
4 representa un voto para el candidato4
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int voto,v1=0,v2=0,v3=0,v4=0,v5=0,total=0;
    float pv1=0,pv2=0,pv3=0,pv4=0,pv5=0;
    printf("Ingrese su voto: ");
    scanf("%d",&voto);
    if(voto==1)
        v1++;
    else if(voto==2)
        v2++;
    else if(voto==3)
        v3++;
    else if(voto==4)
        v4++;
    else if(voto==5)
        v5++;
    else
        printf("voto invalido\n");
    total=v1+v2+v3+v4+v5;
    pv1=v1/total*100;
    pv2=v2/total*100;
    pv3=v3/total*100;
    pv4=v4/total*100;
    pv5=v5/total*100;
    printf("El candidato 1 tiene %d votos con un porcentaje del %.2f\n",v1,pv1);
    printf("El candidato 2 tiene %d votos con un porcentaje del %.2f\n",v2,pv2);
    printf("El candidato 3 tiene %d votos con un porcentaje del %.2f\n",v3,pv3);
    printf("El candidato 4 tiene %d votos con un porcentaje del %.2f\n",v4,pv4);
    printf("El candidato 5 tiene %d votos con un porcentaje del %.2f\n",v5,pv5);
    return 0;
}
