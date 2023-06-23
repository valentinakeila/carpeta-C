/*Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.*/

#include <stdio.h>
#include <stdlib.h>
float signo(float numeroFuncion);
void main(){

float num;

printf("Ingrese un numero\n");
scanf("%f", &num);
printf("El resultado es:%f\n", signo(num));



    system("pause");
}


float signo(float numeroFuncion){
float resultado;
if (numeroFuncion < 0)
{
    resultado = -1;
     
}else if(numeroFuncion > 0)
{
    resultado = 1;
}else{

    resultado = 0;
}

return resultado;

}