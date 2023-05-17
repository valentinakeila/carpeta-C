/*4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float promedioAlumno;
    int cantAlumnos;
    int cantParciales;
    float promedioTotal;
    char nombreAlumno;
    float notaIngresada;
    float promedioGeneral;
    float promedioGeneralTotal;

    printf("Ingrese cantidad de alumnos\n");
    scanf("%d", &cantAlumnos);
    printf("Ingrese cantidad de parciales tomados\n");
    scanf("%d", &cantParciales);

    for (int i = 1; i <= cantAlumnos; i++)
    {
        printf("ingrese las notas del alumno %i\n", i);

        for (int j = 1; j <= cantParciales; j++)
        {

            do
            {
                printf("Ingrese la nota del parcial %i : \n", j);
                scanf("%f", &notaIngresada);
                if (notaIngresada > 10 || notaIngresada < 0)
                {
                    printf("Nota no valida\n");
                }
            } while (notaIngresada > 10 || notaIngresada < 0);

            promedioAlumno = promedioAlumno + notaIngresada;
        }
        promedioTotal = promedioAlumno / cantParciales;
        printf("El promedio del alumno es %f\n", promedioTotal);
        promedioGeneral = promedioGeneral + promedioTotal;

        promedioAlumno = 0;
    }

    promedioGeneralTotal = promedioGeneral / cantAlumnos;
    printf("El promedio total del curso es: %f \n", promedioGeneralTotal);
}