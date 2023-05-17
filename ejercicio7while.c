/*7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numeroIngresado;
    int cantidad = 0;

    do
    {
        printf("Ingrese un numero real distinto a cero. Ingrese cero para finalizar\n");
        scanf("%f", &numeroIngresado);

        if (numeroIngresado != 0)
        {
            cantidad = cantidad + 1;
        }

    } while (numeroIngresado != 0);

    printf("La cantidad de numeros ingresados fueron %d \n", cantidad);

    system("pause");
    return 0;
}