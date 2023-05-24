/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.
*/


#include <stdio.h>
#include <stdlib.h>


int main(){

int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un valor\n");
        scanf("%d", &array[i]);
    }
     for (int i = 0; i < 5; i++)
    {
        printf("indice: %d\n valor: %d\n",i , array[i]);
    }

printf("\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("indice: %d\n valor: %d\n",i , array[i]);
    }


    system("pause");
    return 0;
}