/*
    4. Dado el vector {10, 20, 5, 15, 30, 20}
        - Informar el vector de la forma: "Indice: X, Valor: Y".
        - Totalizar el vector e informar el total.
        - Informar el contenido de las posiciones impares.
        - Informar las posiciones que contienen números impares.
        - Informar el mayor número.
        - Informar cuántas veces aparece el número 20.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num_vector[6] = {10,20,5,15,30,20};
    int mayor_numero = 0;
    int total_vector = 0;
    int cant_num_20 = 0;

    printf("\nComponentes del vector:\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("Indice: %i, Valor: %i\n", i, num_vector[i]);
        total_vector = total_vector + num_vector[i];
    }

    printf("\nEl total del vector es: %i\n", total_vector);

    printf("\nEl contenido de las posiciones impares es:\n");
    for (int i = 1; i <= 5; i = i + 2)
    {
        printf("Indice: %i, Valor: %i\n", i, num_vector[i]);
    }

    printf("\nLas posiciones del vector que contienen n%cmeros impares son:\n", 163);
    for (int i = 0; i <= 5; i++)
    {
        if ((num_vector[i] % 2) == 1)
        {
            printf("Indice: %i, Valor: %i\n", i, num_vector[i]);
        }
    }

    printf("\nEl mayor n%cmero del vector es:\n", 163);
    for (int i = 0; i <= 5; i++)
    {
        if (num_vector[i] > mayor_numero)
        {
            mayor_numero = num_vector[i];
        }
    }
    printf("Valor: %i\n", mayor_numero);

    printf("\nLa cantidad de veces que se repite el n%cmero 20 en el vector es:\n", 163);
    for (int i = 0; i <= 5; i++)
    {
        if (num_vector[i] == 20)
        {
            cant_num_20++;
        }
    }
    printf("%i\n", cant_num_20);

    system("pause");
}