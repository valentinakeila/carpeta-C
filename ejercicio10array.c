/*10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

void main(){

int arrayCuadrado[3][3];
int suma = 0;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Ingrese el numero de la fila %d columna %d\n", i+1 , j+1);
        scanf("%d", &arrayCuadrado[i][j]);

        if (i!=j)
        {
          suma = suma + arrayCuadrado[i][j];
        }
        


    }

    
}

printf("La suma es: %d\n", suma);



    system("pause");
}