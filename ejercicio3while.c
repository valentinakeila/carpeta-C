/*3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numerosIngresados;
    int numeros = 1;
    float sumaNumeros = 0;
    while (numeros <= 4)
    {
        do
        {
            printf("Ingrese un numero real mayor a 0\n");
            scanf("%f", &numerosIngresados);
            if (numerosIngresados < 1)
            {
                printf("Número no válido.\n");
            }

        } while (numerosIngresados < 1);

        sumaNumeros = sumaNumeros + numerosIngresados;
        numeros++;
    }

    printf("El total del la suma: %f \n", sumaNumeros);

    system("pause");
    return 0;
}
