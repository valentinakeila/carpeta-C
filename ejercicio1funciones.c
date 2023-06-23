/*Crear una función que calcule el cubo de un número real (float). El resultado deberá
ser otro número real*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cubo(float numCubo);
void main(){

float num;

printf("Ingrese un numero\n");
scanf("%f", &num);
printf("El resultado del numero al cubo es:%f\n",  cubo(num));


 system("pause");
}


float cubo(float numCubo){

   float resultado = pow(numCubo,3);
   return resultado;
}