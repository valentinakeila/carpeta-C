/* 6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio

*/


#include <stdio.h>
#include <stdlib.h>

int main(){

int cantNotas = 0;
float totalNotas;
float nota;
char respuesta = 'N';
char respuestaIngresada;
float promedioTotal;

do
{
    printf("Ingrese las notas\n");
    scanf ("%f", &nota );
    totalNotas = totalNotas + nota;
    cantNotas= cantNotas + 1;


    printf("¿Desea continuar? SI = S - NO = N (May%cscula)\n", 163);

    fflush(stdin);

    scanf("%c", &respuestaIngresada);
    
} while (respuesta != respuestaIngresada);

promedioTotal = totalNotas / cantNotas;

printf ("total notas: %f \n", totalNotas);
printf("cantidad notas: %d\n" , cantNotas);
printf("El promedio es: %f\n", promedioTotal );





}