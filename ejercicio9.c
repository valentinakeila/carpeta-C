#include <stdio.h>
#include <stdlib.h>

void main(){

float altura;

printf("ingrese su altura en centimetros\n");
scanf ("%f", &altura);

if(altura<=150){
    printf("Persona con altura por debajo de la media\n");
}
else if (altura>150 && altura<170){
    printf("Persona de altura media\n");

} 
else {
    printf("Persona de altura por arriba de la media");
}

    system("pause");
}