//realizar un programa que determine si una persona es mayor o menor de edad
#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad;
    char nombre[10];
    printf("ingrese el nombre: ");
    scanf("%s",nombre);
    printf("ingrese la edad: ");
    scanf("%d",&edad);
    if(edad>=18)
        printf("%s es mayor de edad",nombre);
    else
        printf("%s es menor de edad",nombre);
    return 0;
}
