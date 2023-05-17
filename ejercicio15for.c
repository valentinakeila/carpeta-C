#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaIngresada = 0;
    float totalAlumno = 0;
    float promedioAlumno = 0;
    float promedioTotal = 0;
    float promedioGeneral = 0;

    printf("Ingrese las notas del alumno");

    for (int k = 1; k <= 5; k++)
    { totalAlumno = 0;
        for (int i = 1; i <= 3; i++)
        {
            printf("Ingrese la nota %d\n", i);
            scanf("%f", &notaIngresada);
            totalAlumno = totalAlumno + notaIngresada;
            promedioTotal = promedioTotal + notaIngresada;
        } 

        promedioAlumno = totalAlumno / 3;
        printf("El promedio del alumno es %f", promedioAlumno);
      
    }
      promedioGeneral = promedioTotal / 15;
        printf("El promedio general del curso es %f", promedioGeneral);

    return 0;
    system("pause");
}