/*
Realizar un programa en C que determine  la conversion de grados centigrados a farenheit o viceversa
*/
#include <stdio.h>

void main(){
    int opc;
    float cent,far,gCent,gFar;
    printf("Conversion de temperatura.\n\n");
    printf("1. De C a F.\n");
    printf("2. De F a C.\n");
    printf("\nEscoja la opcion... ");
    scanf("%d",&opc);
    system("cls");
    if(opc==1){
        printf("ingrese los grados centigrados: ");
        scanf("%f",&cent);
        gFar=cent*1.8+32;
        printf("Grados farenheit: %.2f\n",gFar);
    }
    else if(opc==2){
        printf("ingrese los grados farenheit: ");
        scanf("%f",&far);
        gCent=(far-32)*1.8;
        printf("\nGrados centigrados: %.2f\n",gCent);
    }else
        printf("[ERROR]: Opcion incorrecta.");
}
