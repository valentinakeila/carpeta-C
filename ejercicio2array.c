/*2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/

#include <stdio.h>
#include <stdlib.h>


int main(){

int array[5];
float promedio;
float suma;


for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un valor\n");
        scanf("%d", &array[i]);

    }

for (int i = 0; i < 5; i++)
{
       suma = suma + array[i];

}

promedio = suma / 5;

printf("el resultado de la suma es %f\n", suma);
printf("el promedio es %f\n", promedio);


    system("pause");
    return 0;
}