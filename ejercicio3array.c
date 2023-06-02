
/*3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num_array[5];
    int cont_num_5 = 0;

    for (int i = 0; i <= 4; i++)
    {
        printf("Ingrese el %d%c valor\n", i+1, 167);
        scanf("%d", &num_array[i]);

        if (num_array[i] == 5)
        {
            cont_num_5 = cont_num_5 + 1;
        }
    }

    printf("\nEl n%cmero 5 se repite %d veces entre los valores del array\n", 163, cont_num_5);
    system("pause");
}