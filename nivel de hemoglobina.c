/*
En un laboratorio de análisis clínico, un médico determina si una persona tiene anemia o no,
lo cual depende de su nivel de hemoglobina en la sangre, de su edad y de su género.
Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde,
se determina su resultado como positivo y en caso contrario como negativo.
La tabla en la que el medico se basa para obtener el resultado para sexo femenino es la siguiente:

EDAD        NIVEL HEMOGLOBINA
0 entre 1 mes                      entre 13 y 26 g%
> 1 y < = 6 meses                  entre 10 y 18 g%
> 6 y < = 12 meses                 entre 11 y 15 g%
> 1 y < = 5  años                  entre 11.5 y 15 g%
> 5 y < = 10 años                  entre 12.6 y 15.5 g%
> 10 y < = 15 años                 entre 13 y 15.5 g%
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad,op;
    float hemo;
    printf("1. Edad en meses.\n2. Edad en anios.\n\nEscoja la opcion... ");
    scanf("%d",&op);
    system("cls");
    if(op==1){
        printf("ingrese su edad en meses: ");
        scanf("%d",&edad);
        printf("ingrese su nivel de hemoglobina: ");
        scanf("%f",&hemo);
        if(edad>0&&edad<=1&&hemo>=13&&hemo<=26)
            printf("no tiene anemia");
        else if(edad>1&&edad<=6&&hemo>=10&&hemo<=18)
            printf("no tiene anemia");
        else if(edad>6&&edad<=12&&hemo>=11&&hemo<=15)
            printf("no tiene anemia");
        else
            printf("tiene anemia");
    }else{
        printf("ingrese su edad en anios: ");
        scanf("%d",&edad);
        printf("ingrese su nivel de hemoglobina: ");
        scanf("%f",&hemo);
        if(edad>1&&edad<=5&&hemo>=11.5&&hemo<=15)
            printf("no tiene anemia");
        else if(edad>5&&edad<=10&&hemo>=12.6&&hemo<=15.5)
            printf("no tiene anemia");
        else if(edad>10&&edad<=15&&hemo>=13&&hemo<=15.5)
            printf("no tiene anemia");
        else
            printf("tiene anemia");
    }
    return 0;
}
