/*1. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

char nombre[20];
char apellido[20];
char mail[50];

printf("Ingrese su nombre:\n");
scanf("%s", &nombre);
printf("Ingrese su apellido:\n");
scanf("%s", &apellido);
printf("Ingrese su mail:\n");
scanf("%s",&mail);


printf("El largo del nombre es:%d\n", strlen(nombre));
printf("El largo del apellido es:%d\n", strlen(apellido));
printf("El largo del mail es:%d\n", strlen(mail));

    system("pause");
}