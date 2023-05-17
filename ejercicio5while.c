/*5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

int dni = 42704897;
float nota = 7;
int dniIngresado = 0;
int intentos = 1;
int ingresaCorrectamente = 0;


do
{
    printf("Ingrese DNI del alumno\n");
    scanf("%d", &dniIngresado);

    if (dniIngresado != dni)
    {
        printf("El DNI no es correcto\n");
        intentos = intentos + 1;
    }else
    {
        printf("El DNI es correcto\n");
        intentos = intentos + 3;
    }
 
} while (intentos <= 3 || dni != dniIngresado);




    system("pause");
    return 0;
}