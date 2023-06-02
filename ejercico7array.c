/*7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int cantidadNotas;
    float suma = 0;
    float promedio;
    printf("Ingrese la cantidad de notas\n");
    scanf("%d", &cantidadNotas);

    float array[cantidadNotas];

    for (int i = 0; i < cantidadNotas ; i++)
    {
        printf("Ingrese la nota %d \n", i+1);
        scanf("%f", &array[i]);
        suma = suma + array[i];
    }

    promedio = suma / cantidadNotas;

    printf("La suma de las notas es: %f\n", suma);
    printf("El promedio es: %f\n", promedio);

    system("pause");
}