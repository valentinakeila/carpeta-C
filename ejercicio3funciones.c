/*Crear una función que devuelva la primera letra de una cadena de texto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char letra(char array[10]);

void main(){


char array[10];
printf("Ingrese una palabra\n");
fflush(stdin);
scanf("%s", &array);

printf("%c", letra(array));


    system("pause");
}

char letra(char array[10]){

char resultado;
resultado =  array[0];

return resultado;
}