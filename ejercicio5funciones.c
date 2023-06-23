/*Crear una función que reciba un número cualquiera y que devuelva como resultado
la suma de sus dígitos*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int suma(char array[]);

void main(){
char num[5];
printf("Ingrese un numero\n");
scanf("%s",&num);

printf("La suma de los digitos es: %d\n", suma(num));


    system("pause");
}

int suma(char array[] ){
int resultado = 0;

for (int i = 0; i < strlen(array) ; i++)
{
    resultado = resultado + (array[i] - '0');
} 

return resultado;

}