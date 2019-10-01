#include <stdio.h>                              //importar librerias
#include <math.h>
#define PI 3.1416                               //definicion de constantes

int main(){                                     //declaracion de la funcion principal
    float radio,area;                           //declaracion de variables
    printf("Ingrese radio: ");                  //salida en pantalla
    scanf("%f",&radio);                         //lectura de la variable radio
    //area=PI*radio*radio;                      proceso
    area=PI*pow(radio,2);                       //proceso con math.h
    printf("El area es: %f\n\n",area);          //salida del valor de la variable area
    system("pause");                            //espera una tecla para continuar
    return 0;
}
