/*6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float array[3];
    float promedio;
    float maxFacturacion;
    float minFacturacion;
    float total;

    for (int i = 0; i <= 2; i++)
    {
        printf("Ingrese la facturacion del mes %d\n", i+1);
        scanf("%f", &array[i]);

        total = total + array[i];

        if (array[i] < minFacturacion)
        {
            minFacturacion = array[i];
        }if (i == 0)
        {
           minFacturacion = array[0];
        }
        

        if (i == 0)
        {
           maxFacturacion = array[0];

        } if (array[i] > maxFacturacion)
        {
            maxFacturacion = array[i];
        }
    }

promedio = total / 3;

printf("El promedio de facturacion: %f\n", promedio);
printf("El minima facturacion es: %f\n", minFacturacion);
printf("La maxima facturacion es: %f", maxFacturacion);


    system("pause");
}