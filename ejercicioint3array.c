/*Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float nota[10];
    int dni[10];
    int menu;
    int busqueda;

    printf("Seleccione una opcion:\n1-Cargar Alumnos\n2-Buscar un alumno\n3-Modificar la nota de un alumno\n4-Mostrar un listado de los 10 alumnos\n5-Salir\n");

    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        for (int i = 0; i < 10; i++)
        {

            do
            {
                printf("Ingrese el DNI del alumno:%d\n", i + 1);
                scanf("%d", &dni[i]);
                if (dni[i] < 1000000 || dni[i] > 99999999)
                {
                    printf("El DNI no es valido\n");
                }

            } while (dni[i] < 1000000 || dni[i] > 99999999);

            do
            {
                printf("Ingrese la nota del alumno:%d\n", i + 1);
                scanf("%f", &nota[i]);

                if (nota[i] > 10 || nota[i] < 1)
                {
                    printf("La nota no es valida\n");
                }

            } while (nota[i] > 10 || nota[i] < 1);
        }
        break;
    case 2:

        do
        {
            printf("Ingrese el DNI del alumno que quiere buscar\n");
            scanf("%d", &busqueda);
            if (busqueda < 1000000 || busqueda > 99999999)
            {
                printf("El DNI no es valido\n");
            }

        } while (busqueda < 1000000 || busqueda > 99999999);

        for (int i = 0; i < 10; i++)
        {
            if (busqueda == dni[i])
            {
                printf("%d", dni[i]);
                printf("%f", nota[i]);
            }
            else
            {
                printf("No se encontro\n");
            }
        }
        break;
    case 3:

        do
        {
            printf("Ingrese el DNI del alumno que quiere buscar\n");
            scanf("%d", &busqueda);
            if (busqueda < 1000000 || busqueda > 99999999)
            {
                printf("El DNI no es valido\n");
            }

        } while (busqueda < 1000000 || busqueda > 99999999);

        for (int i = 0; i < 10; i++)
        {
            if (busqueda == dni[i])
            {
                do
                {
                    printf("Ingrese la nueva nota del alumno:%d\n", i + 1);
                    scanf("%f", &nota[i]);

                    if (nota[i] > 10 || nota[i] < 1)
                    {
                        printf("La nota no es valida\n");
                    }

                } while (nota[i] > 10 || nota[i] < 1);
            }
            else
            {
                printf("No se encontro\n");
            }

            break;
        }
    case 4:

        for (int i = 0; i < 10; i++)
        {
            printf("%d\t", dni[i]);
            printf("%f\n", nota[i]);
        }

        break;

    case 5:

        printf("Ha salido\n");

        break;

    default:

        printf("Numero incorrecto\n");

        break;
    }

    system("pause");
}